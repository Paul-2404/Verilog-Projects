module encoder4x2(
	input wire [3:0] A,
	output reg [1:0] Z);

always @(*)
	case(A)
		4'b0001: Z = 2'b00;
		4'b0010: Z = 2'b01;
		4'b0100: Z = 2'b10;
		4'b1000: Z = 2'b11;
		default: Z = 2'bxx;
	endcase

endmodule
