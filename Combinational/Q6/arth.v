module arth(
	input wire [1:0] a,b,
	output reg [1:0] s,d,p,q,m,r
);

always @(*)
begin
	s = a+b;
	d = a-b;
	p = a*b;
	q = a/b;
	m = a%b;
	r = a**b;
end
endmodule
