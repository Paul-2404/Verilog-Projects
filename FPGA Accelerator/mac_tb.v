module mac_tb;

parameter width = 8;

reg rst,clk,start;
reg [width-1:0] a;
reg [width-1:0] b;
wire [(2*width)-1:0] result;
wire done;
integer i;
//wire [(2*width)-1:0] prod;
//wire [(2*width)-1:0] result0;

mac #(.width(width))
dut(
    .rst(rst),
    .clk(clk),
    .start(start),
    .done(done),
    .a(a),
    .b(b),
    .result(result)
    //.result0(result0),
    //.prod(prod)
);

initial begin
    forever #5 clk=~clk;
end

initial begin
    clk=0;  rst=1;  start=0;  a = 0;  b = 0;
    #10;
    
    start=1;  rst=0;
    
    for(i=0; i<2; i=i+1)
        begin
            a= $random;
            b= $random;
            //rst= $random;
            #50;
         end
    #100;
    
$finish;
end
endmodule