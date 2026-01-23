module bw_ops(
	input wire [3:0] a,
	input wire [3:0] b,
	output reg [3:0] A,O,Na,Nb,X
);

always @(*)
begin
	A = (a & b);
	O = (a | b);
	Na = (~a);
	Nb = (~b);
	X = (a ^ b);
end
endmodule
