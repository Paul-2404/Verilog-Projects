module mux4x1(D0,D1,D2,D3,S1,S2,Z);
input D0,D1,D2,D3,S1,S2;
output Z;
reg Z;

assign Z= (S1==0 && S2==0)?D0:
	(S1==0&&S2==1)?D1:
	(S1==1&&S2==0)?D2:
	D3;
endmodule
