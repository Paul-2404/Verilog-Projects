module mux_tb;
reg D0,D1,D2,D3;
reg S1,S2;
wire Z;

mux4x1 uut(
	.D0(D0),
	.D1(D1),
	.D2(D2),
	.D3(D3),
	.S1(S1),
	.S2(S2),
	.Z(Z)
);

initial begin
	D0=0;D1=0;D2=0;D3=0;
	S1=0;S2=0;

	$display("Test Case|S1 S2|D0 D1 D2 D3|Z");
	$monitor("	%b %b   %b %b %b %b|%b",S1,S2,D0,D1,D2,D3,Z);

	#10 D0=1;D1=0;D2=0;D3=0;S1=0;S2=0;
	#10 D0=0;D1=1;D2=0;D3=0;S1=0;S2=1;
	#10 D0=0;D1=0;D2=1;D3=0;S1=1;S2=0;
	#10 D0=0;D1=0;D2=0;D3=1;S1=1;S2=1;
	#10 D0=0;D1=1;D2=1;D3=1;S1=0;S2=0;
	#10 D0=1;D1=0;D2=1;D3=1;S1=0;S2=1;
	#10 D0=1;D1=1;D2=0;D3=1;S1=1;S2=0;
	#10 D0=1;D1=1;D2=1;D3=0;S1=1;S2=1;
end
initial
begin
	$dumpfile("mux4x1.vcd");
	$dumpvars(0,mux);
end
endmodule

