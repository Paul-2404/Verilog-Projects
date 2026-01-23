module addsub(
	input wire ctrl,
	input wire [3:0] a,
	input wire [3:0] b,
	output reg [3:0] z
);

always @(*)
begin
	if (ctrl)
	begin
		z=a+b;
	end

	else
		z=a-b;
end
endmodule
