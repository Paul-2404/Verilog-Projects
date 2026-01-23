#!/usr/bin/env tclsh

set verilog_source "cequ_ops.v"
set testbench_source "cequ_ops_tb.v"

set vcd_output "cequ_ops.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vcequ_ops_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vcequ_ops_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
