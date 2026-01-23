#!/usr/bin/env tclsh

set verilog_source "counter.v"
set testbench_source "counter_tb.v"

set vcd_output "counter.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vcounter_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vcounter_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
