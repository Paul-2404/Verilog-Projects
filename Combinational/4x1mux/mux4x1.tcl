#!/usr/bin/env tclsh

set verilog_source "mux4x1.v"
set testbench_source "mux_tb.v"

set vcd_output "mux4x1.vcd"
puts "Compiling verilog cod with Verilator......"

exec verilator --binary -j 0 -Wall $verilog_source --exe $testbench_source --clk clk --trace -o V4x1mux-tb-sim

puts "Running the simulation..."

exec obj_dir/V4x1mux-tb-sim

puts "Launching GTKWave..."

exec gtkwave $vcd_output &
