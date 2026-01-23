module pencoder_tb;

reg [7:0] d;
wire [2:0] o;

pencoder dut(
	.d(d),
	.o(o)
);

initial begin
	d = 8'b11111111;
	#10 d = 8'b10000000;
	#10 d = 8'b01111111;
	#10 d = 8'b01000000;
	#10 d = 8'b00111111;
	#10 d = 8'b00100000;
	#10 d = 8'b00011111;
	#10 d = 8'b00010000;
	#10 d = 8'b00001111;
	#10 d = 8'b00001000;
	#10 d = 8'b00000111;
	#10 d = 8'b00000100;
	#10 d = 8'b00000011;
	#10 d = 8'b00000010;
	#10 d = 8'b00000001;

	#10 $finish;
end

initial begin
	$dumpfile("pencoder.vcd");
	$dumpvars(0,pencoder);
end
endmodule
