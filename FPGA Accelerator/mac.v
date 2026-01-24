module mac #(parameter width = 8) (
    input wire rst,
    input wire clk,
    input wire [width-1:0] a,
    input wire [width-1:0] b,
    input wire start,
    output reg done,
    output reg [(2*width)-1:0] result
);

(*use_dsp = "yes"*) reg [2*width:0]prod;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        result     <= 0;
        done       <= 0;
        prod       <= 0;
    end
    else if (start) begin         
        prod <= a * b;
        result <= prod;
        done <= (prod != 0);
        end
    end
endmodule