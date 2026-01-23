module grayc_tb;

reg clk;
reg reset;
wire [7:0] g;

grayc dut(
	.clk(clk),
	.reset(reset),
	.g(g)
);

initial begin
	clk = 0;
	forever #10 clk=~clk;
end

initial begin
	reset = 1;
	#10
	reset = 0;

	#300 $finish;
end

initial begin 
	$dumpfile("grayc.vcd");
	$dumpvars(0,grayc);
end
endmodule
