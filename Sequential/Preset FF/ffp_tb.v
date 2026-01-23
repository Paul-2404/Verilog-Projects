module ffp_tb;

reg clk;
reg reset;
reg preset;
reg clear;
wire q;

ffp dut(
	.clk(clk),
	.reset(reset),
	.preset(preset),
	.clear(clear),
	.q(q)
);

initial begin
	clk = 0;
	forever #10 clk = ~clk;
end

initial begin
	reset = 1;
	preset = 1;
	#10;
	reset = 0;
	#50;
	preset = 0;
	reset = 1;
	#10;
	reset = 0;

	#50 $finish;
end

initial begin
	$dumpfile("ffp.vcd");
	$dumpvars(0,ffp);
end
endmodule
