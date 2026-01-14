//      // verilator_coverage annotation
        //IEEE Floating Point Adder (Single Precision)
        //Copyright (C) Jonathan P Dawson 2013
        //2013-12-12
        
        module adder(
                input_a,
                input_b,
                input_a_stb,
                input_b_stb,
                output_z_ack,
                clk,
                rst,
                output_z,
                output_z_stb,
                input_a_ack,
                input_b_ack);
        
          input     clk;
          input     rst;
        
          input     [31:0] input_a;
          input     input_a_stb;
          output    input_a_ack;
        
          input     [31:0] input_b;
          input     input_b_stb;
          output    input_b_ack;
        
          output    [31:0] output_z;
          output    output_z_stb;
          input     output_z_ack;
        
          reg       s_output_z_stb;
          reg       [31:0] s_output_z;
          reg       s_input_a_ack;
          reg       s_input_b_ack;
        
          reg       [3:0] state;
          parameter get_a         = 4'd0,
                    get_b         = 4'd1,
                    unpack        = 4'd2,
                    special_cases = 4'd3,
                    align         = 4'd4,
                    add_0         = 4'd5,
                    add_1         = 4'd6,
                    normalise_1   = 4'd7,
                    normalise_2   = 4'd8,
                    round         = 4'd9,
                    pack          = 4'd10,
                    put_z         = 4'd11;
        
          reg       [31:0] a, b, z;
          reg       [26:0] a_m, b_m;
          reg       [23:0] z_m;
          reg       [9:0] a_e, b_e, z_e;
          reg       a_s, b_s, z_s;
          reg       guard, round_bit, sticky;
          reg       [27:0] sum;
        
 099759   always @(posedge clk)
 099759   begin
        
 099759     case(state)
        
 002003       get_a:
 002003       begin
 002003         s_input_a_ack <= 1;
 001003         if (s_input_a_ack && input_a_stb) begin
 001000           a <= input_a;
 001000           s_input_a_ack <= 0;
 001000           state <= get_b;
                end
              end
        
 002000       get_b:
 002000       begin
 002000         s_input_b_ack <= 1;
 001000         if (s_input_b_ack && input_b_stb) begin
 001000           b <= input_b;
 001000           s_input_b_ack <= 0;
 001000           state <= unpack;
                end
              end
        
 001000       unpack:
 001000       begin
 001000         a_m <= {a[22 : 0], 3'd0};
 001000         b_m <= {b[22 : 0], 3'd0};
 001000         a_e <= a[30 : 23] - 127;
 001000         b_e <= b[30 : 23] - 127;
 001000         a_s <= a[31];
 001000         b_s <= b[31];
 001000         state <= special_cases;
              end
        
 001000       special_cases:
 001000       begin
                //if a is NaN or b is NaN return NaN 
%000009         if ((a_e == 128 && a_m != 0) || (b_e == 128 && b_m != 0)) begin
%000009           z[31] <= 1;
%000009           z[30:23] <= 255;
%000009           z[22] <= 1;
%000009           z[21:0] <= 0;
%000009           state <= put_z;
                //if a is inf return inf
%000000         end else if (a_e == 128) begin
%000000           z[31] <= a_s;
%000000           z[30:23] <= 255;
%000000           z[22:0] <= 0;
                  //if a is inf and signs don't match return nan
%000000           if ((b_e == 128) && (a_s != b_s)) begin
%000000               z[31] <= b_s;
%000000               z[30:23] <= 255;
%000000               z[22] <= 1;
%000000               z[21:0] <= 0;
                  end
%000000           state <= put_z;
                //if b is inf return inf
%000000         end else if (b_e == 128) begin
%000000           z[31] <= b_s;
%000000           z[30:23] <= 255;
%000000           z[22:0] <= 0;
%000000           state <= put_z;
                //if a is zero return b
%000000         end else if ((($signed(a_e) == -127) && (a_m == 0)) && (($signed(b_e) == -127) && (b_m == 0))) begin
%000000           z[31] <= a_s & b_s;
%000000           z[30:23] <= b_e[7:0] + 127;
%000000           z[22:0] <= b_m[26:3];
%000000           state <= put_z;
                //if a is zero return b
%000000         end else if (($signed(a_e) == -127) && (a_m == 0)) begin
%000000           z[31] <= b_s;
%000000           z[30:23] <= b_e[7:0] + 127;
%000000           z[22:0] <= b_m[26:3];
%000000           state <= put_z;
                //if b is zero return a
~000991         end else if (($signed(b_e) == -127) && (b_m == 0)) begin
%000000           z[31] <= a_s;
%000000           z[30:23] <= a_e[7:0] + 127;
%000000           z[22:0] <= a_m[26:3];
%000000           state <= put_z;
 000991         end else begin
                  //Denormalised Number
~000987           if ($signed(a_e) == -127) begin
%000004             a_e <= -126;
 000987           end else begin
 000987             a_m[26] <= 1;
                  end
                  //Denormalised Number
~000988           if ($signed(b_e) == -127) begin
%000003             b_e <= -126;
 000988           end else begin
 000988             b_m[26] <= 1;
                  end
 000991           state <= align;
                end
              end
        
 085786       align:
 085786       begin
 040830         if ($signed(a_e) > $signed(b_e)) begin
 040830           b_e <= b_e + 1;
 040830           b_m <= b_m >> 1;
 040830           b_m[0] <= b_m[0] | b_m[1];
 043965         end else if ($signed(a_e) < $signed(b_e)) begin
 043965           a_e <= a_e + 1;
 043965           a_m <= a_m >> 1;
 043965           a_m[0] <= a_m[0] | a_m[1];
 000991         end else begin
 000991           state <= add_0;
                end
              end
        
 000991       add_0:
 000991       begin
 000991         z_e <= a_e;
 000509         if (a_s == b_s) begin
 000482           sum <= a_m + b_m;
 000482           z_s <= a_s;
 000509         end else begin
 000260           if (a_m >= b_m) begin
 000260             sum <= a_m - b_m;
 000260             z_s <= a_s;
 000249           end else begin
 000249             sum <= b_m - a_m;
 000249             z_s <= b_s;
                  end
                end
 000991         state <= add_1;
              end
        
 000991       add_1:
 000991       begin
 000981         if (sum[27]) begin
 000010           z_m <= sum[27:4];
 000010           guard <= sum[3];
 000010           round_bit <= sum[2];
 000010           sticky <= sum[1] | sum[0];
 000010           z_e <= z_e + 1;
 000981         end else begin
 000981           z_m <= sum[26:3];
 000981           guard <= sum[2];
 000981           round_bit <= sum[1];
 000981           sticky <= sum[0];
                end
 000991         state <= normalise_1;
              end
        
 001015       normalise_1:
 001015       begin
 000991         if (z_m[23] == 0 && $signed(z_e) > -126) begin
 000024           z_e <= z_e - 1;
 000024           z_m <= z_m << 1;
 000024           z_m[0] <= guard;
 000024           guard <= round_bit;
 000024           round_bit <= 0;
 000991         end else begin
 000991           state <= normalise_2;
                end
              end
        
 000991       normalise_2:
 000991       begin
~000991         if ($signed(z_e) < -126) begin
%000000           z_e <= z_e + 1;
%000000           z_m <= z_m >> 1;
%000000           guard <= z_m[0];
%000000           round_bit <= guard;
%000000           sticky <= sticky | round_bit;
 000991         end else begin
 000991           state <= round;
                end
              end
        
 000991       round:
 000991       begin
 000501         if (guard && (round_bit | sticky | z_m[0])) begin
 000501           z_m <= z_m + 1;
~000501           if (z_m == 24'hffffff) begin
%000000             z_e <=z_e + 1;
                  end
                end
 000991         state <= pack;
              end
        
 000991       pack:
 000991       begin
 000991         z[22 : 0] <= z_m[22:0];
 000991         z[30 : 23] <= z_e[7:0] + 127;
 000991         z[31] <= z_s;
~000991         if ($signed(z_e) == -126 && z_m[23] == 0) begin
%000000           z[30 : 23] <= 0;
                end
~000991         if ($signed(z_e) == -126 && z_m[23:0] == 24'h0) begin
%000000           z[31] <= 1'b0; // FIX SIGN BUG: -a + a = +0.
                end
                //if overflow occurs, return inf
~000991         if ($signed(z_e) > 127) begin
%000000           z[22 : 0] <= 0;
%000000           z[30 : 23] <= 255;
%000000           z[31] <= z_s;
                end
 000991         state <= put_z;
              end
        
 002000       put_z:
 002000       begin
 002000         s_output_z_stb <= 1;
 002000         s_output_z <= z;
 001000         if (s_output_z_stb && output_z_ack) begin
 001000           s_output_z_stb <= 0;
 001000           state <= get_a;
                end
              end
        
            endcase
        
~099757     if (rst == 1) begin
%000002       state <= get_a;
%000002       s_input_a_ack <= 0;
%000002       s_input_b_ack <= 0;
%000002       s_output_z_stb <= 0;
            end
        
          end
          assign input_a_ack = s_input_a_ack;
          assign input_b_ack = s_input_b_ack;
          assign output_z_stb = s_output_z_stb;
          assign output_z = s_output_z;
        
        endmodule
        
        
