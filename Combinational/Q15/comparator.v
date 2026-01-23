module comparator(
	input wire [7:0] a,
	input wire [7:0] b,
	output reg [1:0] z
);

always @(*)
begin
	if (a==b)
	begin
		z=2'b11;
	end

	else if (a<=b)
	begin
		z=2'b01;
	end

	else if (a>=b)
	begin
		z=2'b10;
	end

	else
		z=2'b00;
end
endmodule
