// SPDX-FileCopyrightText: 2023 Renaldas Zioma 
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// SPDX-License-Identifier: Apache-2.0

/* verilator lint_off WIDTH */
`default_nettype none

module tt_um_rejunity_sn76489 #( parameter CHANNEL_OUTPUT_BITS = 10,
                                 parameter MASTER_OUTPUT_BITS = 8,
                                 parameter SPI_MASTER_OUTPUT_BITS = 12
) (
    input clk,
    input rst,
    input [7:0] data,
    input we,
    output [SPI_MASTER_OUTPUT_BITS-1:0] spi_master,
    input clk_enable
);
    localparam NUM_TONES = 3;
    localparam NUM_NOISES = 1;
    localparam ATTENUATION_CONTROL_BITS = 4;
    localparam FREQUENCY_COUNTER_BITS = 10;
    localparam NOISE_CONTROL_BITS = 3;

    reg [$clog2(32)-1:0] clk_counter;
    wire clk_master_strobe = clk_counter == 0;

    // The SN76489 has 8 control "registers":
    // - 4 x 4 bit volume registers (attenuation)
    // - 3 x 10 bit tone registers  (frequency)
    // - 1 x 3 bit noise register
    localparam NUM_CHANNELS = NUM_TONES + NUM_NOISES;    
    reg [ATTENUATION_CONTROL_BITS-1:0]  control_attn[NUM_CHANNELS-1:0];
    reg [FREQUENCY_COUNTER_BITS-1:0]    control_tone_freq[NUM_TONES-1:0];
    reg [NOISE_CONTROL_BITS-1:0]        control_noise[NUM_NOISES-1:0];
    reg [2:0] latch_control_reg;
    reg restart_noise;

    always @(posedge clk) begin
        if (rst) begin
            clk_counter <= 0;

            control_attn[0] <= 4'b1111;
            control_attn[1] <= 4'b1111;
            control_attn[2] <= 4'b1111;
            control_attn[3] <= 4'b1111;
            control_tone_freq[0] <= 1;
            control_tone_freq[1] <= 1;
            control_tone_freq[2] <= 1;
            control_noise[0] <= 3'b100;

            latch_control_reg <= 0;
            restart_noise <= 0;
        end else if(clk_enable) begin
            clk_counter <= clk_counter + 1;                                 // provides clk_master_strobe for tone & noise generators
            restart_noise <= 0;
            if (we) begin
                if (data[7] == 1'b1) begin
                    case(data[6:4])
                        3'b000 : control_tone_freq[0][3:0] <= data[3:0];
                        3'b010 : control_tone_freq[1][3:0] <= data[3:0];
                        3'b100 : control_tone_freq[2][3:0] <= data[3:0];
                        3'b110 : 
                            begin 
                                control_noise[0] <= data[2:0];
                                restart_noise <= 1;
                            end
                        3'b001 : control_attn[0] <= data[3:0];
                        3'b011 : control_attn[1] <= data[3:0];
                        3'b101 : control_attn[2] <= data[3:0];
                        3'b111 : control_attn[3] <= data[3:0];
                        default : begin end
                    endcase
                    latch_control_reg <= data[6:4];
                end else begin
                    case(latch_control_reg)
                        3'b000 : control_tone_freq[0][9:4] <= data[5:0];
                        3'b010 : control_tone_freq[1][9:4] <= data[5:0];
                        3'b100 : control_tone_freq[2][9:4] <= data[5:0];
                        3'b001 : control_attn[0] <= data[3:0];
                        3'b011 : control_attn[1] <= data[3:0];
                        3'b101 : control_attn[2] <= data[3:0];
                        3'b111 : control_attn[3] <= data[3:0];
                        default : begin end
                    endcase
                end
            end
        end
    end

    wire                           channels [NUM_CHANNELS-1:0];
    wire [CHANNEL_OUTPUT_BITS-1:0] volumes  [NUM_CHANNELS-1:0];

    genvar i;
    generate
        for (i = 0; i < NUM_TONES; i = i + 1) begin : tone
            tone #(.COUNTER_BITS(FREQUENCY_COUNTER_BITS)) gen (
                .clk(clk),
                .enable(clk_master_strobe),
                .reset(rst),
                .compare(control_tone_freq[i]),
                .out(channels[i])
                );
        end

        for (i = 0; i < NUM_NOISES; i = i + 1) begin : noise
            noise #(.COUNTER_BITS(FREQUENCY_COUNTER_BITS)) gen (
                .clk(clk),
                .enable(clk_master_strobe),
                .reset(rst),
                .restart_noise(restart_noise),
                .control(control_noise[i]),
                .driven_by_tone(channels[NUM_TONES-1]), // can be driven by the last tone,
                                                        // when control_noise[1:0] == 2'b11
                .out(channels[NUM_TONES+i])
                );
        end

        for (i = 0; i < NUM_CHANNELS; i = i + 1) begin : chan
            attenuation #(.VOLUME_BITS(CHANNEL_OUTPUT_BITS)) attenuation (
                .in(channels[i]),
                .control(control_attn[i]),
                .out(volumes[i])
                );
        end
    endgenerate

    assign spi_master = volumes[0] + volumes[1] + volumes[2] + volumes[3];
    
endmodule

// The datasheet defines 16 attenuation steps that are -2.0dB apart, ranging from 0 dB at step 0
// to a maximum attenuation of -28dB at step 14. Step 15 is a complete silence.
// 7 bit is enough to represent SN attenuation levels as unique numbers

/* verilator lint_off REALCVT */
module attenuation #( parameter CONTROL_BITS = 4, parameter VOLUME_BITS = 14 ) (
    input  wire in,
    input  wire [CONTROL_BITS-1:0] control,
    output reg  [VOLUME_BITS-1:0] out
);
    localparam real MAX_VOLUME = (1 << VOLUME_BITS) - 1;
    `define ATLEAST1(i) ($rtoi(i)>1 ? $rtoi(i) : 1)
    always @(*) begin
        case(in ? control : 15) // if in == 0, output is forced to 0 
            // each bit of attenuation corresponds to 2dB
            // 2dB = 10^(-0.1) = 0.79432823
            0:  out =           MAX_VOLUME;
            1:  out = `ATLEAST1(MAX_VOLUME * 0.79432823);
            2:  out = `ATLEAST1(MAX_VOLUME * 0.63095734);
            3:  out = `ATLEAST1(MAX_VOLUME * 0.50118723);
            4:  out = `ATLEAST1(MAX_VOLUME * 0.39810717);
            5:  out = `ATLEAST1(MAX_VOLUME * 0.31622777);
            6:  out = `ATLEAST1(MAX_VOLUME * 0.25118864);
            7:  out = `ATLEAST1(MAX_VOLUME * 0.19952623);
            8:  out = `ATLEAST1(MAX_VOLUME * 0.15848932);
            9:  out = `ATLEAST1(MAX_VOLUME * 0.12589254);
            10: out = `ATLEAST1(MAX_VOLUME * 0.10000000);
            11: out = `ATLEAST1(MAX_VOLUME * 0.07943282);
            12: out = `ATLEAST1(MAX_VOLUME * 0.06309573);
            13: out = `ATLEAST1(MAX_VOLUME * 0.05011872);
            14: out = `ATLEAST1(MAX_VOLUME * 0.03981072);
                default:
                    out = 0;
        endcase
        `undef ATLEAST1
    end
endmodule

/* verilator lint_off WIDTH */

// For the SMS (1 and 2), Genesis and Game Gear, the tapped bits are bits 0 and 3 ($0009), fed back into bit 15.
// For the SG-1000, OMV, SC-3000H, BBC Micro and Colecovision, the tapped bits are bits 0 and 1 ($0003), fed back into bit 14.
// For the Tandy 1000, the tapped bits are bits 0 and 4 ($0011), fed back into bit 14.    
module noise #( parameter LFSR_BITS = 15, LFSR_TAP0 = 0, LFSR_TAP1 = 1, parameter COUNTER_BITS = 10 ) (
    input  wire clk,
    input  wire enable,
    input  wire reset,
    input  wire restart_noise,

    input  wire [2:0] control,
    input  wire driven_by_tone,

    output wire  out
);
    // SEE: Manual, "2. Noise Generator"
    // NF0/NF1 bits
    // Shift rates 512, 1024, 2048 are defined assuming global division by 32 as in "1. Tone Generator"
    localparam SHIFT_RATE_0 = 16; // 16 <= N / 512 /32
    localparam SHIFT_RATE_1 = 32; // 32 <= N /1024 /32
    localparam SHIFT_RATE_2 = 64; // 64 <= N /2048 /32
    localparam SHIFT_RATE_MAX = SHIFT_RATE_2;

    // Noise Feedback Control - "FB" bit
    wire is_white_noise = control[2];

    // Noise Frequency Control - "NF0, NF1" bits
    reg trigger;
    always @(*) begin
        case(control[1:0])
            2'b00:  trigger = counter[$clog2(SHIFT_RATE_0)];
            2'b01:  trigger = counter[$clog2(SHIFT_RATE_1)];
            2'b10:  trigger = counter[$clog2(SHIFT_RATE_2)];
            2'b11:  trigger = driven_by_tone;
        endcase
    end

    reg [$clog2(SHIFT_RATE_MAX):0] counter;
    always @(posedge clk) begin
        if (reset)
            counter <= 0;
        else
            if (enable)
                counter <= counter + 1'b1;
    end

    wire trigger_edge;
    signal_edge signal_edge(
        .clk(clk),
        .reset(reset),
        .signal(trigger),
        .on_posedge(trigger_edge)
    );

    wire reset_lfsr = reset | restart_noise;
    reg [LFSR_BITS-1:0] lfsr;
    always @(posedge clk) begin
        if (reset_lfsr)
            lfsr <= 1'b1 << (LFSR_BITS-1);
        else begin
            if (trigger_edge) begin
                if (is_white_noise) begin
                    lfsr <= {lfsr[LFSR_TAP0] ^ lfsr[LFSR_TAP1], lfsr[LFSR_BITS-1:1]};
                end else begin
                    lfsr <= {lfsr[LFSR_TAP0]                  , lfsr[LFSR_BITS-1:1]};
                end
            end
        end
    end

    assign out = lfsr[0];
endmodule

module signal_edge(
    input  wire clk,
    input  wire reset,
    input  wire signal,
    output wire on_posedge,
    output wire on_negedge,
    output wire on_edge
);
    reg previous_signal_state_0;
    reg previous_signal_state_1;
    always @(posedge clk) begin
        if (reset) begin
            previous_signal_state_0 <= 0; // tested in posedge, init to 0 to prevent missing the first positive edge after reset
            previous_signal_state_1 <= 1; // tested in negedge,               --- // ---               negative edge after reset
        end else begin
            previous_signal_state_0 <= signal;
            previous_signal_state_1 <= signal;
        end
    end
    
    assign on_edge    = on_posedge | on_negedge;
    assign on_posedge = (previous_signal_state_0 != signal &&  signal);
    assign on_negedge = (previous_signal_state_1 != signal && !signal);
endmodule


// https://www.smspower.org/forums/17191-SG1000HardwareQuestions#103500
// Posted: Sun Sep 16, 2018 5:03 pm
//
// Frequency value of $000 produces (MCLK / 32) / $400 output frequency on TI 
// PSG while on VDP it produces (MCLK / 32) / $001. Volume and frequency writes 
// do not reset the phase of tone channels but frequency writes will reset phase 
// of noise channel. It is possible to keep noise channel output permanently low 
// by writing into frequency register. All writes take effect immediately.

// https://github.com/dnotq/sn76489_audio/blob/master/rtl/sn76489_audio.vhd
// This also demonstrates why changing the tone period will not take effect
// until the next cycle of the counter.  Interestingly, the same counter is
// used in the AY-3-8910 and YM-2149, only slightly modified to count up
// (actually, in silicon both up and down counters are present
// simultaneously) and reset on a >= period condition.

module tone #( parameter COUNTER_BITS = 10 ) (
    input  wire clk,
    input  wire enable,
    input  wire reset,

    input  wire [COUNTER_BITS-1:0]  compare,

    output wire out
);
    reg [COUNTER_BITS-1:0] counter;
    reg state;

    // always @(posedge clk) begin
    //     if (reset) begin
    //         counter <= 0;
    //         state <= 0;
    //     end else begin
    //         if (enable)
    //             counter <= counter - 1'b1;
    //     end
    // end

    // always @(negedge clk) begin
    //     if (!reset)
    //         if (enable && counter == 0) begin
    //             counter <= compare;         // reset counter
    //             state <= ~state;            // flip output state
    //         end
    // end


    always @(posedge clk) begin
        if (reset) begin
            counter <= 0;
            state <= 0;
        end else begin
            if (enable) begin
                if (counter == 0) begin
                    counter <= compare - 1'b1;  // reset counter
                    state <= ~state;            // flip output state
                end else begin
                    counter <= counter - 1'b1;
                end
             end
        end
    end

    assign out = state;
endmodule
