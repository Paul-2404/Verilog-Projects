module ffp(
	input wire clk,
	input wire reset,
	input reg preset,
	input reg clear,
	output reg q
);

always @(posedge clk or posedge reset or posedge clear)
begin
	if (reset)
	begin
		q <= preset;
	end

	else if (clear)
	begin
		preset = 0;
	end

	else
		q <= q+1;
end
endmodule
