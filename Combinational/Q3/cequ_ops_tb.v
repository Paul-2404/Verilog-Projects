module cequ_ops_tb;

reg [3:0] a,b;
wire z;

cequ_ops dut(
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	a = 4'b0;
	#10 a = 4'b1x0z;
	b = 4'b0;
	#5 b = 4'b1x0z;
	#100 $finish;
end

initial begin
	forever #10 a = ~a;
end

initial begin
	$dumpfile("cequ_ops.vcd");
	$dumpvars(0,cequ_ops);
end
endmodule
