/* INSERT NAME AND PENNKEY HERE */

`timescale 1ns / 1ns

// quotient = dividend / divisor

module divider_unsigned (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
    wire [32:0][31:0] dividends;
    wire [32:0][31:0] remainders;
    wire [32:0][31:0] quotients;

    assign dividends[0] = i_dividend;
    assign remainders[0] = 0;
    assign quotients[0] = 0;
    
    genvar i;
    for (i = 0; i < 32; i = i + 1) begin
      divu_1iter d(.i_dividend(dividends[i]), .i_divisor(i_divisor), .i_remainder(remainders[i]), .i_quotient(quotients[i]),
                 .o_dividend(dividends[i+1]), .o_remainder(remainders[i+1]), .o_quotient(quotients[i+1]));
    end

    assign o_remainder = remainders[32];
    assign o_quotient = quotients[32];
    // TODO: your code here

endmodule


module divu_1iter (
    input  wire [31:0] i_dividend,
    input  wire [31:0] i_divisor,
    input  wire [31:0] i_remainder,
    input  wire [31:0] i_quotient,
    output wire [31:0] o_dividend,
    output wire [31:0] o_remainder,
    output wire [31:0] o_quotient
);
  /*
    for (int i = 0; i < 32; i++) {
        remainder = (remainder << 1) | ((dividend >> 31) & 0x1);
        if (remainder < divisor) {
            quotient = (quotient << 1);
        } else {
            quotient = (quotient << 1) | 0x1;
            remainder = remainder - divisor;
        }
        dividend = dividend << 1;
    }
    */

  wire [31:0] r_or_in;
  wire [31:0] divd_or_in;
  wire [31:0] or_1_out;
  wire geq_out;
  wire [31:0] minus_out;
  wire [31:0] or_2_out;
  assign r_or_in = {i_remainder[30:0], 1'b0};
  assign divd_or_in = {31'b0, i_dividend[31]};
  assign or_1_out = r_or_in | divd_or_in;
  assign o_dividend = {i_dividend[30:0], 1'b0};
  assign geq_out = or_1_out >= i_divisor;
  assign minus_out = or_1_out - i_divisor;
  assign or_2_out = {i_quotient[30:0], 1'b0} | 32'b1;
  assign o_remainder = geq_out ? minus_out : or_1_out;
  assign o_quotient = geq_out ? or_2_out : {i_quotient[30:0], 1'b0};

    // TODO: your code here

endmodule
