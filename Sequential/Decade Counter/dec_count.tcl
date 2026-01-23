#!/usr/bin/env tclsh

set verilog_source "dec_count.v"
set testbench_source "dec_count_tb.v"

set vcd_output "dec_count.vcd"
puts "Compiling verilog cod with Verilator......"

exec verilator --binary -j 0 $verilog_source --exe $testbench_source --clk clk --trace -o Vdec_count_tb_sim

puts "Running the simulation..."

exec obj_dir/Vdec_count_tb_sim

puts "Launching GTKWave..."

exec gtkwave $vcd_output &
