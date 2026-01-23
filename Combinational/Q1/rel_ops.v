module rel_ops(
	input wire [3:0] a,
	input wire [3:0] b,
	output reg [3:0] z
);

always @(*)
begin
	if (a < b)
	begin
		z = 4'b0001;
	end
	else if (a>b)
	begin
		z = 4'b0010;
	end
	else if (a == b)
	begin
		z = 4'b0100;
	end
	else
		z = 4'b0;
end
endmodule
