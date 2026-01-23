module rel_ops_tb;

reg [3:0] a;
reg [3:0] b;
wire [3:0] z;

rel_ops uut(
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	a = 4'b0000;
	b = 4'b0001;
	#10 a=4'b1010;
	#15 b=4'b1010;
	#10 a=4'b0000;
	#10 b=4'b0000;

	#20 $finish;
end

initial begin
	$dumpfile("rel_ops.vcd");
	$dumpvars(0,rel_ops);
end
endmodule
