#!/usr/bin/env tclsh

set verilog_source "udc.v"
set testbench_source "udc_tb.v"

set vcd_output "udc.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vudc_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vudc_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
