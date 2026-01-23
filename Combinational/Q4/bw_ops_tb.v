module bw_ops_tb;

reg [3:0] a,b;
wire [3:0] A,O,Na,Nb,X;

bw_ops dut(
	.a(a),
	.b(b),
	.A(A),
	.O(O),
	.Na(Na),
	.Nb(Nb),
	.X(X)
);

initial begin
	a = 4'b0000;b = 4'b0000;
	#10 a = 4'b0110;b = 4'b1010;
	#10 a = 4'b1101;b = 4'b0001;

	#30 $finish;
end

initial begin
	$dumpfile("bw_ops.vcd");
	$dumpvars(0,bw_ops);
end
endmodule
