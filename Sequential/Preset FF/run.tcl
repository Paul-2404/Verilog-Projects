#!/usr/bin/env tclsh

set verilog_source "ffp.v"
set testbench_source "ffp_tb.v"

set vcd_output "ffp.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vffp_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vffp_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
