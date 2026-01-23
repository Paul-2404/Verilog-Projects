module counter_tb;

reg clk;
reg rst;
wire O;
reg [31:0] c;

counter dut(
	.clk(clk),
	.rst(rst),
	.O(O),
	.c(c)
);

initial begin
	clk = 0;
	forever #10 clk = ~clk;
end

initial begin
	c =  32'hFFFFFFFC;
	rst = 1;
	#10 rst = 0;
	#100 $finish;
end

initial begin
	$monitor("Time=  %t,Reset= %b,O= %b",$time,rst,O);
end

initial begin
	$dumpfile("counter.vcd");
	$dumpvars(0,counter);
end
endmodule
