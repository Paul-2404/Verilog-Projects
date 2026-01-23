primitive fa_sum(sum,A,B,Cin);
	output sum;
	input A,B,Cin;
	
	table
		// A  B  Cin : sum
		   0  0   0  :  0;
		   0  0   1  :  1;
		   0  1   0  :  1;
		   0  1   1  :  0;
		   1  0   0  :  1;
		   1  0   1  :  0;
		   1  1   0  :  0;
		   1  1   1  :  1;
	 endtable
endprimitive


primitive fa_carry(Cout,A,B,Cin);
	output Cout;
	input A,B,Cin;

	table
		//A B Cin : Cout
		  0 0  0  :  0;
		  0 0  1  :  0;
		  0 1  0  :  0;
		  0 1  1  :  1;
		  1 0  0  :  0;
		  1 0  1  :  1;
		  1 1  0  :  1;
		  1 1  1  :  1;
	endtable
endprimitive
	   
module adder(
	input wire [3:0] a,b,
	input Cin,
	output reg [3:0] sum,
	output reg Cout
);

wire c0,c1,c2;
	fa_sum fas0(sum[0],a[0],b[0],Cin);
	fa_carry fac0(c0,a[0],b[0],Cin);

	fa_sum fas1(sum[1],a[1],b[1],c0);
	fa_carry fac1(c1,a[1],b[1],c0);

	fa_sum fas2(sum[2],a[2],b[2],c1);
	fa_carry fac2(c2,a[2],b[2],c1);

	fa_sum fas3(sum[3],a[3],b[3],c2);
	fa_carry fac3(Cout,a[3],b[3],c2);
endmodule

