#!/usr/bin/env tclsh

set verilog_source "comparator.v"
set testbench_source "comparator_tb.v"

set vcd_output "comparator.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vcomparator_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vcomparator_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
