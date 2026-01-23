module odd_parity_tb;

reg [7:0] i;
wire z;

odd_parity dut(
	.i(i),
	.z(z)
);

initial begin
	
	$dumpfile("odd_parity.vcd");
	$dumpvars(0,odd_parity);

	i = 8'b11010001;
	#10;
	i = 8'b11111110;
	#10;
	i = 8'b01010111;

	#10 $finish;
end
endmodule
