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
	   

