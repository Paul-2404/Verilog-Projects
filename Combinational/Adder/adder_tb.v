module adder_tb;

reg [3:0] a,b;
reg Cin;
wire [3:0] sum;
wire Cout;

adder dut(
	.a(a),
	.b(b),
	.Cin(Cin),
	.sum(sum),
	.Cout(Cout)
);

initial begin

	$dumpfile("adder.vcd");
	$dumpvars(0,adder);

	a = 4'b1100;
	b = 4'b1010;
	Cin = 0;
	#10
	Cin = 1;
	#10 $finish;
end
endmodule

