#!/usr/bin/env tclsh

set verilog_source "encoder4x2.v"
set testbench_source "encoder4x2_tb.v"
set vcd_output "encoder4x2.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR....."
exec verilator --binary -j 0 -Wall $verilog_source --exe $testbench_source --clk clk --trace -o Vencoder4x2_tb_sim

puts "RUNNING THE SIMULATION...."
exec obj_dir/Vencoder4x2_tb_sim

puts "LAUNCHING GTKwave..."
exec gtkwave $vcd_output &
