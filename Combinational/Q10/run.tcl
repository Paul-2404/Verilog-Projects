#!/usr/bin/env tclsh

set verilog_source "adder.v"
set testbench_source "adder_tb.v"

set vcd_output "adder.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 --bbox-unsup $verilog_source --exe $testbench_source --clk clk --trace -o Vadder_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vadder_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
