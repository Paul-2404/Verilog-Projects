module cequ_ops(
	input wire [3:0] a,
	input wire [3:0] b,
	output reg z
);

always @(*)
begin
	if (a === b)
	begin
		z = 1;
	end
	else
	begin
		z = 0;
	end
end
endmodule
