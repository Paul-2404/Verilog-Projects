`timescale 1ns/1ps

module top_tb;

    // Parameters
    parameter WIDTH = 8;
    parameter INSTS = 10;
    parameter CLK_PERIOD = 10; // 100 MHz clock

    // DUT signals
    reg clk;
    reg rst;
    reg [WIDTH-1:0] a;
    reg [WIDTH-1:0] b;
    reg start;
    reg [$clog2(INSTS)-1:0] sel;
    wire done;
    wire [(2*WIDTH)-1:0] result;

    // Instantiate the DUT
    top #(
        .width(WIDTH),
        .insts(INSTS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .a(a),
        .b(b),
        .start(start),
        .sel(sel),
        .done(done),
        .result(result)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD) clk = ~clk;
    end

    // Stimulus
    integer i;
    initial begin
        // Initialize
        rst = 1;
        start = 0;
        a = 0;
        b = 0;
        sel = 0;
        #(2*CLK_PERIOD);

        // Release reset
        rst = 0;
        start = 1;
        #(CLK_PERIOD);
        
        for (i = 0; i < INSTS; i = i + 1) begin
            a = i + 1;
            b = (i + 1) * 2;
            //sel = i;
            #(4*CLK_PERIOD);
        end
        
        for (i = 0; i < INSTS; i = i + 1) begin
            sel = i;
            # (4*CLK_PERIOD);
        end
        #(10*CLK_PERIOD);

         $finish;
    end

endmodule
