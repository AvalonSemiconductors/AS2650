/// sta-blackbox
module gf180mcu_fd_ip_sram__sram512x8m8wm1 (
	input CLK,
	input CEN,
	input GWEN,
	input [7:0] WEN,
	input [8:0] A,
	input [7:0] D,
	output reg [7:0] Q,
	inout VDD,
	inout VSS
);

reg [7:0] memory [511:0];
always @(posedge CLK) begin
	if(!CEN) begin
		if(!GWEN) begin
			memory[A] <= (D & (~WEN)) | (memory[A] & WEN);
		end
		Q <= memory[A];
	end
end

endmodule
