#!/usr/bin/env tclsh

set verilog_source "pencoder.v"
set testbench_source "pencoder_tb.v"

set vcd_output "pencoder.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vpencoder_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vpencoder_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
