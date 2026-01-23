module comparator_tb;

reg [7:0] a;
reg [7:0] b;
wire [1:0] z;

comparator dut(
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	a = 8'b00001101;
	b = 8'b00001101;
	#10;

	a = 8'b11100000;
	#10;

	b = 8'b11111100;

	#10 $finish;
end

initial begin
	$dumpfile("comparator.vcd");
	$dumpvars(0,comparator);
end
endmodule
