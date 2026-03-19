`timescale 1ns/1ns
`include "adder.v"

import "DPI-C" function int unsigned float_add (int unsigned a, int unsigned b);

import "DPI-C" function int unsigned float_cmp (int unsigned a, int unsigned b);

import "DPI-C" function void tr_print (int unsigned a, int unsigned b, int unsigned semp, int unsigned res, int unsigned cmp_res);

class prolitariat;
	rand bit a_sign;
	rand bit [7:0]  a_exp;
    rand bit [22:0] a_mant;

    rand bit b_sign;
	rand bit [7:0]  b_exp;
    rand bit [22:0] b_mant;

    //rand bit a_inf_val;
    //rand bit a_nan_val;
    //rand bit a_norm_val;
    //rand bit a_zero_val;
    //rand bit a_denorm_val;

    bit a_inf_val = 1;
    bit a_nan_val = 1;
    bit a_norm_val = 1;
    bit a_zero_val = 1;
    bit a_denorm_val = 1;

    rand bit [2:0] a_state_rand;
    constraint a_state_law   {  if(~a_inf_val)  a_state_rand != 3'd0;
                                if(~a_nan_val)  a_state_rand != 3'd1;
                                if(~a_norm_val) a_state_rand != 3'd2;
                                if(~a_zero_val) a_state_rand != 3'd3;
                                if(~a_denorm_val) a_state_rand != 3'd4;
                                a_state_rand inside {[3'd0 : 3'd4]}; }

    constraint a_inf_inp_law {  if( a_state_rand == 2'd0) a_exp  == 8'b11111111;
                                if( a_state_rand == 2'd0) a_mant == 23'b0;
                                if( a_state_rand == 2'd1) a_exp  == 8'b11111111;
                                if( a_state_rand == 2'd1) a_mant != 23'b0;
                                if( a_state_rand == 2'd2) a_exp  != 8'b0;
                                if( a_state_rand == 2'd2) a_exp  != 8'b11111111;
                                if( a_state_rand == 2'd3) a_exp  == 8'b0;
                                if( a_state_rand == 2'd3) a_mant == 23'b0;
                                if( a_state_rand == 2'd4) a_exp  == 8'b0;
                                if( a_state_rand == 2'd4) a_mant != 23'b0;} 
    
    //rand bit b_inf_val;
    //rand bit b_nan_val;
    //rand bit b_norm_val;
    //rand bit b_zero_val;
    //rand bit b_denorm_val;

    bit b_inf_val = 1;
    bit b_nan_val = 1;
    bit b_norm_val = 1;
    bit b_zero_val = 1;
    bit b_denorm_val = 1;

    rand bit [2:0] b_state_rand;
    constraint b_state_law   {  if(~b_inf_val)  b_state_rand != 3'd0;
                                if(~b_nan_val)  b_state_rand != 3'd1;
                                if(~b_norm_val) b_state_rand != 3'd2;
                                if(~b_zero_val) b_state_rand != 3'd3;
                                if(~b_denorm_val) b_state_rand != 3'd4;
                                a_state_rand inside {[3'd0 : 3'd4]}; }

    constraint b_inf_inp_law {  if( b_state_rand == 2'd0) b_exp  == 8'b11111111;
                                if( b_state_rand == 2'd0) b_mant == 23'b0;
                                if( b_state_rand == 2'd1) b_exp  == 8'b11111111;
                                if( b_state_rand == 2'd1) b_mant != 23'b0;
                                if( b_state_rand == 2'd2) b_exp  != 8'b0;
                                if( b_state_rand == 2'd2) b_exp  != 8'b11111111;
                                if( b_state_rand == 2'd3) b_exp  == 8'b0;
                                if( b_state_rand == 2'd3) b_mant == 23'b0;
                                if( b_state_rand == 2'd4) b_exp  == 8'b0;
                                if( b_state_rand == 2'd4) b_mant != 23'b0;} 

    function [31:0] a_to_duble();
        a_to_duble = {a_sign, a_exp, a_mant};
    endfunction

    function [31:0] b_to_duble();
        b_to_duble = {b_sign, b_exp, b_mant};
    endfunction
endclass

/* verilator coverage_off */
module top();
    
    reg clk = 1'b0;
    reg rst = 1'b1;

    reg [31:0] a = 32'b0, b = 32'b0, res = 32'b0, semp =  32'b0;
    
    reg [31:0] i_a = 32'b0, i_b = 32'b0;
    wire [31:0] o_z;

    reg i_a_strb = 1'b0, i_b_strb = 1'b0, o_z_ack = 1'b0;

    wire i_a_ack, i_b_ack, o_z_strb;

    reg err = 1'b0;

    reg act_state = 1'b0;
    reg [15:0] timer = 6'b0; 

/* verilator coverage_on */
    adder dut (
        .input_a(a),
        .input_b(b),
        .input_a_stb(i_a_strb),
        .input_b_stb(i_b_strb),
        .output_z_ack(o_z_ack),
        .clk(clk),
        .rst(rst),
        .output_z(o_z),
        .output_z_stb(o_z_strb),
        .input_a_ack(i_a_ack),
        .input_b_ack(i_b_ack)
    );
/* verilator coverage_off */

    always begin
        #10 clk <= ~clk;
    end

    integer file = 0, test_num = 0;
    string filename = "";

    initial begin
        prolitariat r_data = new;
        
        rst = 1'b1;
        $display ("Start resset seq\n");
        repeat (3) @(posedge clk);
        rst = 1'b0;
        $display("End resset seq\n");

        if ($value$plusargs("arg0=%x", a) && $value$plusargs("arg1=%x", b)) begin
            test_loop(a, b);
            $finish;
        end
        else if ($value$plusargs("from_file=%s", filename)) begin
            file = $fopen(filename, "r");
            if(file == 0) begin
                $display("Can't open %s", filename);
            end
            while(!$feof(file)) begin
                $fscanf(file, " %x", a);
                $fgetc(file);
                $fscanf(file, " %x", b);
                $fgetc(file);
                test_loop(a, b);
            end
            $fclose(file);

        end
        else if ($value$plusargs("random_mode=%d", test_num)) begin
            while(test_num > 0) begin
                r_data.randomize();
                a = r_data.a_to_duble();
                b = r_data.b_to_duble();
                test_loop(a, b);
                test_num -= 1;
            end
        end
        
        $display ("#----------------------------------------#");
        $display ("|                                        |");
        if (err == 0) begin
        $display ("|              Test Passed               |");
        end
        else begin
        $display ("|              Test Failed               |");
        end

        $display ("|                                        |");
        $display ("#----------------------------------------#");
        
        $finish;
    end

    always begin
        while ((act_state == 0) | (timer < 300))begin
            @(posedge clk);
            timer = (act_state)? timer + 1: 0;
            //$display("%d", timer);
        end


        $display ("calk to long");
        $display ("#----------------------------------------#");
        $display ("|                                        |");
        $display ("|              Test Failed               |");
        $display ("|                                        |");
        $display ("#----------------------------------------#");
        
        $finish;
    end

    task calk(int unsigned a, int unsigned b); 
        //окак, я думал как паралелить ввод аргументов, но оказалось они получаеются последовательно
        
        timer = 0;
        act_state = 1;

        // A inp
        //$display ("A1");
        while (i_a_ack != 1'b1)
            @(posedge clk);
        
        //$display ("A2");
        i_a = a;
        i_a_strb = 1'b1;

        while (i_a_ack != 1'b0)
            @(posedge clk);

        i_a_strb = 1'b0;

        // B inp
        //$display ("B1");
        while (i_b_ack != 1'b1)
            @(posedge clk);
        
        i_b = b;
        i_b_strb = 1'b1;

        //$display ("B2");
        while (i_b_ack != 1'b0)
            @(posedge clk);

        i_b_strb = 1'b0;

        // Outp
        //$display ("O1");
        while (o_z_strb != 1'b1)
            @(posedge clk);
        
        res = o_z;
        o_z_ack = 1'b1;
        //$display ("O2");
        @(posedge clk);
        o_z_ack = 1'b0;

        act_state = 0;
        timer = 0;

    endtask

    task calk_semp(int unsigned a, int unsigned b);
        semp = float_add(a, b);
    endtask 

    task test_loop (int unsigned a, int unsigned b);
        calk(a, b);
        calk_semp(a, b);

        tr_print(a, b, semp, res, float_cmp(res, semp));
    endtask

endmodule