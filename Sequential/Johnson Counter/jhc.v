module jhc(
	input wire clk,
	input wire reset,
	output reg [3:0] q
);

always @(posedge clk or posedge reset)
begin
	if (reset)
	begin
		q <= 4'b0;
	end

	else
		q <= {~q[0],q[3:1]};
end
endmodule
