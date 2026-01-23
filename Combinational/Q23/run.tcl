#!/usr/bin/env tclsh

set verilog_source "disp.v"
set testbench_source "disp_tb.v"

set vcd_output "disp.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vdisp_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vdisp_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
