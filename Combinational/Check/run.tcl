#!/usr/bin/env tclsh

set verilog_source "check.v"
set testbench_source "check_tb.v"

set vcd_output "check.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vcheck_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vcheck_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
