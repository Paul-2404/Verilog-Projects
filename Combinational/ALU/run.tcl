#!/usr/bin/env tclsh

set verilog_source "alu.v"
set testbench_source "alu_tb.v"

set vcd_output "alu.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Valu_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Valu_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
