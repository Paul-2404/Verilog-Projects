module mul(
	input wire [15:0] a,
	input wire [15:0] b,
	output reg [31:0] p
);

always @(*) begin
	p = a*b;
end
endmodule
