`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:32:54 06/20/2016
// Design Name:   mux3
// Module Name:   /home/ike/Desktop/ISE_workspace/CPU/mux3_tb.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux3_tb;

	// Inputs
	reg [7:0] Ain;
	reg [7:0] Bin;
	reg [7:0] Cin;
	reg [7:0] Din;
	reg [1:0] reg_sel;

	// Outputs
	wire [7:0] Bout;

	// Instantiate the Unit Under Test (UUT)
	mux3 uut (
		.Ain(Ain), 
		.Bin(Bin), 
		.Cin(Cin), 
		.Din(Din), 
		.reg_sel(reg_sel), 
		.Bout(Bout)
	);

	initial begin
		// Initialize Inputs
		Ain = 0;
		Bin = 0;
		Cin = 0;
		Din = 0;
		reg_sel = 0;

		// Wait 100 ns for global reset to finish
//		#100 Ain = 122; Bin = 4; Cin = 181; Din = 13; reg_sel = 0;
//		#100 Ain = 28; Bin = 193; Cin = 47; Din = 177; reg_sel = 0;
//		#100 Ain = 60; Bin = 212; Cin = 246; Din = 196; reg_sel = 1;
//		#100 Ain = 145; Bin = 184; Cin = 204; Din = 188; reg_sel = 1;
//		#100 Ain = 188; Bin = 98; Cin = 54; Din = 198; reg_sel = 2;
//		#100 Ain = 199; Bin = 172; Cin = 85; Din = 52; reg_sel = 2;
//		#100 Ain = 124; Bin = 0; Cin = 11; Din = 120; reg_sel = 3;
		#100 Ain = 218; Bin = 235; Cin = 93; Din = 29; reg_sel = 3;
        
		// Add stimulus here

	end
      
endmodule
