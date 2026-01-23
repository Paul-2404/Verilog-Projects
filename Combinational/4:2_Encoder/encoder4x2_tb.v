module encoder4x2_tb;

reg [3:0] A;
wire [1:0] Z;

encoder4x2 dut(
	.A(A),
	.Z(Z)
);

initial begin
$monitor("Time= %t,A= %b,Z= %b",$time,A,Z);

#10 A=4'b0001;
#10 A=4'b1110;
#10 A=4'b0010;
#10 A=4'b1101;
#10 A=4'b0100;
#10 A=4'b1011;
#10 A=4'b1000;
#10 A=4'b0111;

#10 $finish;
end

initial
begin
	$dumpfile("encoder4x2.vcd");
	$dumpvars(0,encoder4x2);
end
endmodule

