`timescale 1ns / 1ps

/**
 * @param a first 1-bit input
 * @param b second 1-bit input
 * @param g whether a and b generate a carry
 * @param p whether a and b would propagate an incoming carry
 */
module gp1(input wire a, b,
           output wire g, p);
   assign g = a & b;
   assign p = a | b;
endmodule

/**
 * Computes aggregate generate/propagate signals over a 4-bit window.
 * @param gin incoming generate signals
 * @param pin incoming propagate signals
 * @param cin the incoming carry
 * @param gout whether these 4 bits internally would generate a carry-out (independent of cin)
 * @param pout whether these 4 bits internally would propagate an incoming carry from cin
 * @param cout the carry outs for the low-order 3 bits
 */
module gp4(input wire [3:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [2:0] cout);

   // TODO: your code here
   wire temp1; 
   wire temp2;
   assign pout = &pin;
   assign gout = (gin[3]) | (pin[3]&gin[2]) | (pin[3]&pin[2]&gin[1]) | (pin[3]&pin[2]&pin[1]&gin[0]) ;
   assign temp1 = (gin[0]) | (cin&pin[0]);
   assign cout[0] = (gin[0]) | (cin&pin[0]);
   assign temp2 = (gin[1]) | (temp1&pin[1]);
   assign cout[1] = (gin[1]) | (temp1&pin[1]);
   assign cout[2] = (gin[2]) | (temp2&pin[2]);

endmodule

/** Same as gp4 but for an 8-bit window instead */
module gp8(input wire [7:0] gin, pin,
           input wire cin,
           output wire gout, pout,
           output wire [6:0] cout);

   // TODO: your code here
   wire temp1; 
   wire temp2;
   wire temp3; 
   wire temp4;
   wire temp5; 
   wire temp6;
   assign pout = &pin;
   assign gout = (gin[7]) | (pin[7]&gin[6]) | (pin[7]&pin[6]&gin[5]) | (pin[7]&pin[6]&pin[5]&gin[4]) 
   | (pin[7]&pin[6]&pin[5]&pin[4]&gin[3]) | (pin[7]&pin[6]&pin[5]&pin[4]&pin[3]&gin[2]) 
   | (pin[7]&pin[6]&pin[5]&pin[4]&pin[3]&pin[2]&gin[1]) |(pin[7]&pin[6]&pin[5]&pin[4]&pin[3]&pin[2]&pin[1]&gin[0]);
   assign temp1 = (gin[0]) | (cin&pin[0]);
   assign cout[0] = (gin[0]) | (cin&pin[0]);
   assign temp2 = (gin[1]) | (temp1&pin[1]);
   assign cout[1] = (gin[1]) | (temp1&pin[1]);
   assign temp3 = (gin[2]) | (temp2&pin[2]);
   assign cout[2] = (gin[2]) | (temp2&pin[2]);
   assign temp4 = (gin[3]) | (temp3&pin[3]);
   assign cout[3] = (gin[3]) | (temp3&pin[3]);
   assign temp5 = (gin[4]) | (temp4&pin[4]);
   assign cout[4] = (gin[4]) | (temp4&pin[4]);
   assign temp6 = (gin[5]) | (temp5&pin[5]);
   assign cout[5] = (gin[5]) | (temp5&pin[5]);
   assign cout[6] = (gin[6]) | (temp6&pin[6]);

endmodule

module cla
  (input wire [31:0]  a, b,
   input wire         cin,
   output wire [31:0] sum);

   // TODO: your code here
   wire [31:0] gin;
   wire [31:0] pin;
   wire [3:0] gin2;
   wire [3:0] pin2;
   wire [2:0] cout;
   wire [31:0] coutfinal;
   wire p; 
   wire g;
   genvar i;
   for (i = 0; i < 32; i = i + 1) begin
      gp1 g1(.a(a[i]), .b(b[i]), .g(gin[i]),.p(pin[i]));
      assign sum[i] = (a[i]^b[i])^coutfinal2[i];
    end
   gp4 g4(.gin(gin2[3:0]),.pin(pin2[3:0]), .cin(cin), .gout(g), .pout(p), .cout(cout[2:0]));

   gp8 g81(.gin(gin[7:0]),.pin(pin[7:0]), .cin(cin), .gout(gin2[0]), .pout(pin2[0]), .cout(coutfinal[7:1]));
   gp8 g82(.gin(gin[15:8]),.pin(pin[15:8]), .cin(cout[0]), .gout(gin2[1]), .pout(pin2[1]), .cout(coutfinal[15:9]));
   gp8 g83(.gin(gin[23:16]),.pin(pin[23:16]), .cin(cout[1]), .gout(gin2[2]), .pout(pin2[2]), .cout(coutfinal[23:17]));
   gp8 g84(.gin(gin[31:24]),.pin(pin[31:24]), .cin(cout[2]), .gout(gin2[3]), .pout(pin2[3]), .cout(coutfinal[31:25]));
   wire [31:0] coutfinal2; 
   assign coutfinal2[7:1] = coutfinal[7:1];
   assign coutfinal2[15:9] = coutfinal[15:9];
   assign coutfinal2[23:17] = coutfinal[23:17];
   assign coutfinal2[31:25] = coutfinal[31:25];
   assign coutfinal2[0] = cin;
   assign coutfinal2[8] = cout[0];
   assign coutfinal2[16] = cout[1];
   assign coutfinal2[24] = cout[2];

endmodule
