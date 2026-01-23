#!/usr/bin/env tclsh

set verilog_source "mux8x1.v"
set testbench_source "mux8x1_tb.v"

set vcd_output "mux8x1.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 -Wall $verilog_source --exe $testbench_source --clk clk --trace -o Vmux8x1_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vmux8x1_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
