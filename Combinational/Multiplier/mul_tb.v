module mul_tb;

reg [15:0] a;
reg [15:0] b;
wire [31:0] p;

mul dut(
	.a(a),
	.b(b),
	.p(p)
);

initial begin
	$monitor("Time=  %t,A=  %b,D=  %b,P=  %b",$time,a,b,p);
	a = 16'h0000; b = 16'h0000; #10;
	a = 16'h0001; b = 16'h0FA7; #10;
	a = 16'h04F8; b = 16'h07CA; #10;

	$finish;
end

initial begin
	$dumpfile("mul.vcd");
	$dumpvars(0,mul);
end
endmodule
