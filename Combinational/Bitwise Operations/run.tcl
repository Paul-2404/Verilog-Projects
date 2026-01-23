#!/usr/bin/env tclsh

set verilog_source "bw_ops.v"
set testbench_source "bw_ops_tb.v"

set vcd_output "bw_ops.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vbw_ops_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vbw_ops_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
