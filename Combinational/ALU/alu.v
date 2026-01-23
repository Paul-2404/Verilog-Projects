module alu(
	input wire [2:0] control,
	input wire [15:0] a,
	input wire [15:0] b,
	output reg [15:0] z,
	output reg [1:0] c
);

always @(*)
begin
	case (control)
		3'b000: begin z = 16'h0; c =2'b0; end
		3'b001: begin z = a+b; c=2'b0; end
		3'b010: begin z = a-b; c=2'b0; end
		3'b011: begin z = a&b; c =2'b0; end
		3'b100: begin z = a|b; c=2'b0; end
		3'b101: begin z = a^b; c=2'b0; end
		3'b110: begin z = ~(a^b); c=2'b0; end
		3'b111: if (a==b) begin
			c = 2'b11;
			z = 16'h0;
		end

		else if (a<b) begin
			c = 2'b01;
			z = 16'h0;
		end

		else if (a>b) begin
			c = 2'b10;
			z = 16'h0;
		end

		else begin 
			c =2'b00;
			z = 16'h0;
		end

		default: begin
			z = 16'h0;
			c = 2'b0;
		end
	endcase
end
endmodule
