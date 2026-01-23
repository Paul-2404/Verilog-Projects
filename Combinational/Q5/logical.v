module logical(
	input wire a,b,
	output reg [1:0] z
);

always @(*)
begin
	if (a && b)
	begin
		z = 2'b01;
	end
	else if(a || b)
	begin
		z = 2'b10;
	end
	else 
		z = 2'b0;
end
endmodule
