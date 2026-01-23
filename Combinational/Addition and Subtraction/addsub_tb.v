module addsub_tb;

reg ctrl;
reg [3:0] a;
reg [3:0] b;
wire [3:0] z;

addsub dut(
	.ctrl(ctrl),
	.a(a),
	.b(b),
	.z(z)
);

initial begin
	ctrl = 0;
	forever #10 ctrl = ~ctrl;
end
initial begin
	a=4'b0011;
	b=4'b1100;
	#20
	a=4'b1010;
	b=4'b0101;
	#20
	a=4'b1111;
	b=4'b0001;
	#20
	a=4'b0111;
	b=4'b0000;

	#10 $finish;
end

initial begin
	$dumpfile("addsub.vcd");
	$dumpvars(0,addsub);
end
endmodule
