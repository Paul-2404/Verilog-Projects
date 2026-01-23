module pencoder(
	input wire [7:0] d,
	output reg [2:0] o
);

always @(*)
begin
	if (d[0])
	begin
		o = 3'b0;
	end
	else if (d[1])
	begin
		o = 3'b001;
	end
	else if (d[2])
	begin
		o = 3'b010;
	end
	else if (d[3])
	begin
		o = 3'b011;
	end
	else if (d[4])
	begin
		o = 3'b100;
	end
	else if (d[5])
	begin
		o = 3'b101;
	end
	else if (d[6])
	begin
		o = 3'b110;
	end
	else if (d[7])
	begin
		o = 3'b111;
	end
	else
		o = 3'b0;
end
endmodule
