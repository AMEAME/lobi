`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:46:50 06/21/2016
// Design Name:   alu_pp44
// Module Name:   /home/ike/Desktop/ISE_workspace/CPU/alu_pp44_tb.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu_pp44
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_pp44_tb;

	// Inputs
	reg [7:0] Ain;
	reg [7:0] Bin;
	reg Carryin;
	reg [2:0] op;
	reg alu_enabled;

	// Outputs
	wire Carryout;
	wire [7:0] alu_out;

	// Instantiate the Unit Under Test (UUT)
	alu_pp44 uut (
		.Ain(Ain), 
		.Bin(Bin), 
		.Carryin(Carryin), 
		.op(op), 
		.alu_enabled(alu_enabled), 
		.Carryout(Carryout), 
		.alu_out(alu_out)
	);

	initial begin
		// Initialize Inputs
		Ain = 0;
		Bin = 0;
		Carryin = 0;
		op = 0;
		alu_enabled = 0;

		// Wait 100 ns for global reset to finish
		#100 Ain = 130; Bin = 25; Carryin = 1; op = 0; alu_enabled = 0;
		#100 Ain = 167; Bin = 117; Carryin = 0; op = 1; alu_enabled = 1;
		#100 Ain = 127; Bin = 28; Carryin = 0; op = 1; alu_enabled = 1;
		#100 Ain = 143; Bin = 43; Carryin = 1; op = 1; alu_enabled = 1;
		#100 Ain = 98; Bin = 170; Carryin = 1; op = 1; alu_enabled = 1;
		#100 Ain = 139; Bin = 205; Carryin = 0; op = 7; alu_enabled = 1;
		#100 Ain = 208; Bin = 30; Carryin = 1; op = 5; alu_enabled = 1;
		#100 Ain = 74; Bin = 0; Carryin = 0; op = 0; alu_enabled = 1;
		#100 Ain = 20; Bin = 249; Carryin = 0; op = 6; alu_enabled = 1;

		// Add stimulus here

	end
      
endmodule

