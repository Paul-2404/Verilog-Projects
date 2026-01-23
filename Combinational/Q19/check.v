module check(
	input wire [7:0] i,
	output reg z
);

always @(*)
begin
	if (i==8'b11111111)
	begin
		z = 1;
	end

	else
		z = 0;
end
endmodule
