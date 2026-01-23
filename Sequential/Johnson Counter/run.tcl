#!/usr/bin/env tclsh

set verilog_source "jhc.v"
set testbench_source "jhc_tb.v"

set vcd_output "jhc.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vjhc_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vjhc_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
