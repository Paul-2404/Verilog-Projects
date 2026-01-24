module top #(
    parameter width = 8,
    parameter insts = 10
)(
    input wire clk,
    input wire rst,
    input wire [width-1:0] a,
    input wire [width-1:0] b,
    input wire start,
    input  wire [$clog2(insts)-1:0] sel,
    output wire done,
    output reg [(2*width)-1:0] result
    );

wire [(insts*2*width)-1:0] result_array;
reg [(insts*width)-1:0] a_array;
reg [(insts*width)-1:0] b_array;
wire [insts-1:0] done_array;

reg [$clog2(insts)-1:0] load_counter;

always @(posedge clk or posedge rst) begin
    if(rst) begin
        load_counter <= 0;
        a_array <= 0;
        b_array <= 0;
        result <= 0;
    end
    else begin
        a_array[load_counter*width +: width] <= a;
        b_array[load_counter*width +: width] <= b;
        load_counter <= load_counter + 1;
        result <= result_array[sel*2*width +: 2*width];
    end
end

genvar i;

generate 
    for (i=0; i<insts; i=i+1) begin
        mac #(
            .width(width)
        )
        mac_inst(
                 .rst(rst),
                 .clk(clk),
                 .start(start),
                 .a(a_array[i*width +: width]),
                 .b(b_array[i*width +: width]),
                 .done(done_array[i]),
                 .result(result_array[i*2*width +: 2*width])
                );
         end
endgenerate

assign done = &done_array;

endmodule         