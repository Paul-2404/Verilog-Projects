module udc(
	input wire clk,
	input wire rst,
	input wire up,
	input wire down,
	output reg [3:0] c
);

always @(posedge clk or posedge rst)
begin
	if (rst)
	begin
		c <= 4'b0;
	end
	else 
	begin
		if (up)
		begin
			c <= c+1;
		end
		else if (down)
		begin
			c <= c-1;
		end
		else
			c <= c;
	end
end
endmodule
