#!/bin/bash

set -e

java LogoGen.java $1 > $2.mag
echo "extract all;ext2sim labels on;ext2sim -R -C;ext2spice scale off;ext2spice -F -R -C -f spice3;calma;lef write" | magic -T $PDK_ROOT/gf180mcuD/libs.tech/magic/gf180mcuD.tech -dnull -noconsole $2.mag
mv $2.lef ../lef
mv $2.gds ../gds
rm $2.mag $2.nodes $2.sim $2.ext $2.spice
