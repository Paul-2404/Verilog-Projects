module udc_tb;

reg clk,rst,up,down;
reg [3:0] c;

udc dut(
	.clk(clk),
	.rst(rst),
	.up(up),
	.down(down),
	.c(c)
);

initial begin
	rst = 1;
	#10 rst = 0;
	c = 4'b1100;
	#300 $finish;
end

initial begin
	clk = 0;
	forever #10 clk = ~clk;
end

initial begin
	up = 0;
	#10 up =1;
	#50 up =0;
end

initial begin
	down = 0;
	#100 down = 1;
	#100 down = 0;
end

initial begin
	$monitor("Time=  %t,Up=  %b,Down=  %b",$time,up,down);
end

initial begin
	$dumpfile("udc.vcd");
	$dumpvars(0,udc);
end
endmodule
