module alu_tb;

reg [15:0] a;
reg [15:0] b;
reg [2:0] control;
wire [15:0] z;
wire [1:0] c;

alu dut(
	.a(a),
	.b(b),
	.control(control),
	.z(z),
	.c(c)
);

initial begin
	 control = 3'b000;
	 a=16'hFFA0;
	 b=16'h0FCB;
	 #10 control = 3'b001;
	 #10 control = 3'b010;
	 #10 control = 3'b011;
	 #10 control = 3'b100;
	 #10 control = 3'b101;
	 #10 control = 3'b110;
	 #10 control = 3'b111;

	 #10 $finish;
end

initial begin
	$dumpfile("alu.vcd");
	$dumpvars(0,alu);
end
