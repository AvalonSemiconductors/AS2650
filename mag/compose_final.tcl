#!/bin/env wish
drc off
random seed 0
load /home/lucah/Videos/AS2650/mag/user_project_wrapper.mag -dereference
property GDS_FILE /home/lucah/Videos/AS2650/gds//home/lucah/Videos/AS2650/mag/user_project_wrapper.mag.gds
property GDS_START 0
select top cell
set bbox [box values]
load caravel_0_fill_pattern -quiet
snap internal
box values {*}$bbox
paint comment
property GDS_FILE /home/lucah/Videos/AS2650/gds/caravel_0_fill_pattern.gds
property GDS_START 0
property FIXED_BBOX "$bbox"
load caravel_0 -quiet
box values 0 0 0 0
box position 6um 6um
getcell /home/lucah/Videos/AS2650/mag/user_project_wrapper.mag child 0 0
getcell caravel_0_fill_pattern child 0 0
box position 0 0
getcell advSeal_6um_gen
puts stdout "Writing final GDS. . . "
flush stdout
gds undefined allow
cif *hier write disable
gds write /home/lucah/Videos/AS2650/gds/caravel_0.gds
quit -noprompt
