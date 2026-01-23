module rcounter(
	input wire clk,
	input wire reset,
	input wire enable,
	output reg [3:0] q
);

always @(posedge clk or posedge reset)
begin
	if (reset)
	begin
		q<=4'b0;
	end
	else
	begin
		if (enable)
		begin
			q<=q+1;
		end
		else
			q<=q;
	end
end
endmodule
