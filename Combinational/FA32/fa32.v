module fa32(
	input wire [31:0] A,
	input wire [31:0] B,
	output reg [31:0] S,
	output reg Cout
);

always @(*) begin
	{Cout,S} = A + B;
end
endmodule
