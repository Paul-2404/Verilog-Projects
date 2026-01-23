module dec_count_tb;

reg clk;
reg rst;
wire [3:0] c;

dec_count dut(
	.clk(clk),
	.rst(rst),
	.c(c)
);

initial begin
	clk = 0;
	forever #5 clk = ~clk;
end

initial begin
	rst = 1;
	#10 rst = 0;
	#100 $finish;
end

initial begin
	$monitor("Time=  %t,Reset=  %b",$time,rst);
end
initial begin
	$dumpfile("dec_count.vcd");
	$dumpvars(0,dec_count);
end
endmodule
