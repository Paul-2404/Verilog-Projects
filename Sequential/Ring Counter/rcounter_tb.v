module rcounter_tb;

reg clk;
reg reset;
reg enable;
wire [3:0] q;

rcounter dut(
	.clk(clk),
	.reset(reset),
	.enable(enable),
	.q(q)
);

initial begin
	clk = 0;
	forever #10 clk=~clk;
end

initial begin
	reset = 1;
	enable = 1;
	#10 reset = 0;
	#50 enable = 0;
	#20 enable = 1;

	#50 $finish;
end

initial begin
	$dumpfile("rcounter.vcd");
	$dumpvars(0,rcounter);
end
endmodule
