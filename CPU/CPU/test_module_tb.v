`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:56:43 06/19/2016
// Design Name:   test_module
// Module Name:   /home/ike/Desktop/ISE_workspace/CPU/test_module_tb.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: test_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_module_tb;

	// Inputs
	reg [7:0] Ain;
	reg [7:0] Bin;

	// Outputs
	wire [7:0] Aout;
	wire [7:0] Bout;

	// Instantiate the Unit Under Test (UUT)
	test_module uut (
		.Ain(Ain), 
		.Bin(Bin), 
		.Aout(Aout), 
		.Bout(Bout)
	);

	initial begin
		// Initialize Inputs
		Ain = 0;
		Bin = 0;

		// Wait 100 ns for global reset to finish
		#100 Ain = 67;  Bin = 111;
		#100 Ain = 147; Bin = 25;
		#100 Ain = 89;  Bin = 28;
		#100 Ain = 40;  Bin = 154;
		#100 Ain = 245; Bin = 128;
		#100 Ain = 154; Bin = 120;
		#100 Ain = 242; Bin = 114;
		#100 Ain = 139; Bin = 233;
		#100 Ain = 152; Bin = 223;

		#100 $finish;
        
		// Add stimulus here

	end
      
endmodule

