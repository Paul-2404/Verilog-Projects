module odd_parity(
	input wire [7:0] i,
	output reg z
);

wire temp;
assign temp = ^i;

always @(*)
begin
	if (temp)
	begin
		z = 0;
	end

	else 
		z = 1;
end
endmodule
