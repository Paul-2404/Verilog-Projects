#!/usr/bin/env tclsh

set verilog_source "logical.v"
set testbench_source "logical_tb.v"

set vcd_output "logical.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vlogical_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vlogical_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
