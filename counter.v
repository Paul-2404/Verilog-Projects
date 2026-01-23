module counter(
	input wire clk,
	input wire rst,
	output reg O,
	output reg [31:0] c
);

always @(posedge clk or posedge rst)
begin
	if (rst)
	begin
		c <= 32'h0;
		O = 0;
	end
	else
	begin
		c <= c+1;
		if (c==32'hFFFFFFFF)
		begin
			O = 1;
		end
		else
		begin
			O = 0;
		end
	end
end
endmodule
