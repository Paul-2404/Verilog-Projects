#!/usr/bin/env tclsh

set verilog_source "rcounter.v"
set testbench_source "rcounter_tb.v"

set vcd_output "rcounter.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vrcounter_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vrcounter_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
