module demux1x8(
	input A,
	input [2:0] S,
	output wire [7:0] D);

assign D[0] = A & (S==3'b000);
assign D[1] = A & (S==3'b001);
assign D[2] = A & (S==3'b010);
assign D[3] = A & (S==3'b011);
assign D[4] = A & (S==3'b100);
assign D[5] = A & (S==3'b101);
assign D[6] = A & (S==3'b110);
assign D[7] = A & (S==3'b111);

endmodule
