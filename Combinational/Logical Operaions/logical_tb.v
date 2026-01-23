module logical_tb;

reg a,b;
wire [1:0] z;

logical dut(
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	 a = 0;
	 b = 1;
	 #50 $finish;
end

initial begin
	forever #10 a = ~a;
end

initial begin 
	$dumpfile("logical.vcd");
	$dumpvars(0,logical);
end
endmodule
