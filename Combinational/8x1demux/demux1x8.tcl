#!/usr/bin/env tclsh

set verilog_source "demux1x8.v"
set testbench_source "demux1x8_tb.v"
set vcd_output "demux1x8.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR....."

exec verilator --binary -j 0 -Wall $verilog_source -exe $testbench_source -clk clk --trace -o Vdemux1x8_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vdemux1x8_tb_sim

puts "OPENING GTKwave..."

exec gtkwave $vcd_output &
