module grayc(
	input wire clk,
	input wire reset,
	output reg [7:0] g
);

reg [7:0] b;
always @(posedge clk or posedge reset)
begin
	if (reset)
	begin
		g<=8'b0;
		b<=8'b0;
	end

	else
	begin
		b <= b+1;
		g <= (b >> 1)^b;
	end
end
endmodule
