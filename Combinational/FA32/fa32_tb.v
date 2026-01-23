module fa32_tb;

reg [31:0] A;
reg [31:0] B;
wire [31:0] S;
wire Cout;

fa32 dut(
	.A(A),
	.B(B),
	.S(S),
	.Cout(Cout)
);

initial begin
	A = 32'hFFFFFFFF;
	B = 32'h00000001;
	#10 
	A = 32'hFFFFFFF0;
	B = 32'h1;
	#10 $finish;
end

initial begin
	$dumpfile("fa32.vcd");
	$dumpvars(0, FA32);
end
endmodule
