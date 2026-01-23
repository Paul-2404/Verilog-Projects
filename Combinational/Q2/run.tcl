#!/usr/bin/env tclsh

set verilog_source "equ_ops.v"
set testbench_source "equ_ops_tb.v"

set vcd_output "equ_ops.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vequ_ops_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vequ_ops_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
