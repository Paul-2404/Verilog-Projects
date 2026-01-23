module demux1x8_tb;

reg A;
reg [2:0] S;
wire [7:0] D;

demux1x8 uut(
	.A(A),
	.D(D),
	.S(S)
);

initial begin


$monitor("Time=  %t,D= %b,A= %b,S= %b",$time,D,A,S);

A=0; S=3'b00;
#10 A=1; S=3'b000;
#10 S=3'b001;
#10 S=3'b010;
#10 S=3'b011;
#10 S=3'b100;
#10 S=3'b101;
#10 S=3'b110;
#10 S=3'b111;

#10 A=0; S=3'b000;
#10 $finish;
end

initial
begin
	$dumpfile("demux1x8.vcd");
	$dumpvars(0,demux1x8);
end
endmodule

