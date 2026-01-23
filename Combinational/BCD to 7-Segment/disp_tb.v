module disp_tb;

reg [3:0] i;
wire [6:0] d;

disp dut(
	.i(i),
	.d(d)
);

initial begin
	i=4'b0000;
	#10 i=4'b1010;
	#10 i=4'b1110;
	#10 i=4'b1111;
	#10 i=4'b0001;
	#10 i=4'b0010;
	#10 i=4'b0011;
	#10 i=4'b0100;
	#10 i=4'b0101;
	#10 i=4'b0110;
	#10 i=4'b0111;
	#10 i=4'b1000;
	#10 i=4'b1001;

	#10 $finish;
end

initial begin
	$dumpfile("disp.vcd");
	$dumpvars(0,disp);
end
endmodule
