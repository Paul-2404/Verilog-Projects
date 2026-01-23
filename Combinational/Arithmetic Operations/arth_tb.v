module arth_tb;

reg [1:0] a,b;
wire [1:0] s,d,p,q,m,r;

arth dut(
	.a(a),
	.b(b),
	.s(s),
	.d(d),
	.p(p),
	.q(q),
	.m(m),
	.r(r)
);

initial begin
	a = 2'b10;
	b = 2'b11;
	#20 $finish;
end

initial begin
	$dumpfile("arth.vcd");
	$dumpvars(0,arth);
end
endmodule
