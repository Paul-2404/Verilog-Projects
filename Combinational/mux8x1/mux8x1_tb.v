module mux8x1_tb;
reg [7:0] D;
reg [2:0] S;
wire Z;

mux8x1 uut(
.D(D),
.S(S),
.Z(Z)
);

initial begin
	D=8'b00000000;
	S=3'b000;

	$display("TEST CASE|S|D|Z");
	$monitor("	%b	%b	%b",S,D,Z);

	#10 D=8'b10000000; S=3'b000;
	#10 D=8'b01000000; S=3'b000;
	#10 D=8'b00100000; S=3'b010;
	#10 D=8'b00010000; S=3'b011;
	#10 D=8'b00001000; S=3'b100;
	#10 D=8'b00000100; S=3'b101;
	#10 D=8'b00000010; S=3'b110;
	#10 D=8'b00000001; S=3'b111;
	#10 $finish;
end
initial
begin
	$dumpfile("mux8x1.vcd");
	$dumpvars(0,mux8x1);
end
endmodule
