#!/usr/bin/env tclsh

set verilog_source "odd_parity.v"
set testbench_source "odd_parity_tb.v"

set vcd_output "odd_parity.vcd"

puts "COMPILING VERILOG CODE WITH VERILATOR......"
exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vodd_parity_tb_sim

puts "RUNNING THE SIMULATION...."

exec obj_dir/Vodd_parity_tb_sim

puts "LAUNCHING GTKwave..."

exec gtkwave $vcd_output &
