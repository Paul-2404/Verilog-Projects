module mux8x1(
	input [7:0] D,
input [2:0] S,
output Z
);

assign Z= (S==3'b000) ? D[7]:
	(S==3'b001)?D[6]:
	(S==3'b010)?D[5]:
	(S==3'b011)?D[4]:
	(S==3'b100)?D[3]:
	(S==3'b101)?D[2]:
	(S==3'b110)?D[1]:
	D[0];
endmodule
