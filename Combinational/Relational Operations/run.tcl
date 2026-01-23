#!/usr/bin/env tclsh

set verilog_source "rel_ops.v"
set testbench_source "rel_ops_tb.v"

set vcd_output "rel_ops.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vrel_ops_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vrel_ops_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
