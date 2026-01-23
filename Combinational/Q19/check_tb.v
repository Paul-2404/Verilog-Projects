module check_tb;

reg [7:0] i;
wire z;

check dut(
	.i(i),
	.z(z)
);

initial begin
	$dumpfile("check.vcd");
	$dumpvars(0,check);

	i = 8'b10101011;
	#10;
	i = 8'b11111111;
	#10;
	i = 8'b00000000;
	#10;
	i = 8'b01100100;

	#10 $finish;
end
endmodule
