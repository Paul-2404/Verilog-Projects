module equ_ops_tb;

reg [3:0] a;
reg [3:0] b;
wire z;

equ_ops dut(
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	a = 0;
	b = 0;
	#10 a = 4'b10x1;
	#5 b = 4'b10x1;
	#100 $finish;
end

initial begin
	forever #10 a = ~a;
end

initial begin
	$dumpfile("equ_ops.vcd");
	$dumpvars(0,equ_ops);
end
endmodule
