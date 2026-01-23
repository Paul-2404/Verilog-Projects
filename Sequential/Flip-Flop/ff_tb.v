module ff_tb;

reg [3:0] a;
reg clk;
reg reset;
wire [3:0] q;

ff dut(
	.a(a),
	.clk(clk),
	.reset(reset),
	.q(q)
);

initial begin
	clk = 0;
	forever #10 clk=~clk;
end

initial begin
		
	reset = 1;
	#10 reset = 0;

	a = 0011;

	#35 reset = 1;

	#10 $finish;
end

initial begin
	$dumpfile("ff.vcd");
	$dumpvars(0,ff);
end
endmodule
