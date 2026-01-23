module jhc_tb;

reg clk;
reg reset;
wire [3:0] q;

jhc dut(
	.clk(clk),
	.reset(reset),
	.q(q)
);

initial begin
	clk = 0;
	forever #10 clk = ~clk;
end

initial begin
	
	$dumpfile("jhc.vcd");
	$dumpvars(0,jhc);

	reset = 1;
	#10;
	reset = 0;

	#500 $finish;
end
endmodule	
