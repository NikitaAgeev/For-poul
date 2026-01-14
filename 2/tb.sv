`timescale 1ns/1ns
`include "adder.v"

import "DPI-C" function int unsigned float_add (int unsigned a, int unsigned b);

import "DPI-C" function int unsigned float_cmp (int unsigned a, int unsigned b);
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
                a = $random;
                b = $random;
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
        repeat (1000000) @(posedge clk);

        #1000000

        $display ("Test to long");
        $display ("#----------------------------------------#");
        $display ("|                                        |");
        $display ("|              Test Failed               |");
        $display ("|                                        |");
        $display ("#----------------------------------------#");
        
        $finish;
    end

    task calk(int unsigned a, int unsigned b); 
        //окак, я думал как паралелить ввод аргументов, но оказалось они получаеются последовательно
        
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

    endtask

    task calk_semp(int unsigned a, int unsigned b);
        semp = float_add(a, b);
    endtask 

    task test_loop (int unsigned a, int unsigned b);
        calk(a, b);
        calk_semp(a, b);

        if (float_cmp(res, semp))
            $display ("From RTL: OK : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n",
	                    $bitstoreal(a), a,
	                    $bitstoreal(b), b,
                    	$bitstoreal(semp), semp,
	                    $bitstoreal(res), res);
        else begin
            err = 1'b1;
            $display ("From RTL: ERROR : %.3e (%x) add %.3e (%x) = %.3e (%x) vs %.3e (%x)\n",
	                    $bitstoreal(a), a,
	                    $bitstoreal(b), b,
                    	$bitstoreal(semp), semp,
	                    $bitstoreal(res), res);
        end

    endtask

endmodule