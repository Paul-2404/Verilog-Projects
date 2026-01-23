module dec_count(
	input wire clk,
	input wire rst,
	output reg [3:0] c
);

always @(posedge clk or posedge rst)
begin
	if (rst) begin
		c <= 4'b000;
	end
	else if (c == 4'b1001) begin
		c <= 4'b000;
	end
	else begin
		c <= c+1;
	end
end
endmodule

