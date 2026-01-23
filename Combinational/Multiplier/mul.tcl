#!/usr/bin/env tclsh

set verilog_source "mul.v"
set testbench_source "mul_tb.v"

set vcd_output "mul.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 -Wall $verilog_source --exe $testbench_source --clk clk --trace -o Vmul_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vmul_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
