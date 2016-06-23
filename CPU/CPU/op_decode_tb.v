`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:04:13 06/19/2016
// Design Name:   op_decode
// Module Name:   /home/ike/Desktop/ISE_workspace/CPU/op_decode_tb.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: op_decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module op_decode_tb;

	// Inputs
	reg [3:0] op;

	// Outputs
	wire [2:0] op_sel;
	wire [1:0] reg_sel1;
	wire [1:0] reg_sel2;
	wire alu_enabled;

	// Instantiate the Unit Under Test (UUT)
	op_decode uut (
		.op(op), 
		.op_sel(op_sel), 
		.reg_sel1(reg_sel1), 
		.reg_sel2(reg_sel2), 
		.alu_enabled(alu_enabled)
	);

	initial begin
		// Initialize Inputs
		op = 0;

		// Wait 100 ns for global reset to finish
		#50 op = 4'b0000;
		#50 op = 4'b0001;
		#50 op = 4'b0010;
		#50 op = 4'b0011;

		#50 op = 4'b0100;
		#50 op = 4'b0101;
		#50 op = 4'b0110;
		#50 op = 4'b0111;

		#50 op = 4'b1000;
		#50 op = 4'b1001;
		#50 op = 4'b1010;
		#50 op = 4'b1011;

		#50 op = 4'b1100;
		#50 op = 4'b1101;
		#50 op = 4'b1110;
		#50 op = 4'b1111;

		#50 $finish;
		
		// Add stimulus here

	end
      
endmodule

