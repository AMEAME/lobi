`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:13:03 06/19/2016
// Design Name:   cpu_comb
// Module Name:   /home/ike/Desktop/ISE_workspace/CPU/cpu_comb_tb.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu_comb
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_comb_tb;

	// Inputs
	reg [7:0] Ain;
	reg [7:0] Bin;
	reg [7:0] Cin;
	reg [7:0] Din;
	reg Carryin;
	reg [3:0] op;

	// Outputs
	wire [7:0] Aout;
	wire [7:0] Bout;
	wire [7:0] Cout;
	wire [7:0] Dout;
	wire Carryout;
	
	// Instantiate the Unit Under Test (UUT)
	cpu_comb uut (
		.Ain(Ain), 
		.Bin(Bin), 
		.Cin(Cin), 
		.Din(Din), 
		.Carryin(Carryin), 
		.op(op), 
		.Aout(Aout), 
		.Bout(Bout), 
		.Cout(Cout), 
		.Dout(Dout), 
		.Carryout(Carryout)
	);

	initial begin
		// Initialize Inputs
		Ain = 0;
		Bin = 0;
		Cin = 0;
		Din = 0;
		Carryin = 0;
		op = 0;

		// Wait 100 ns for global reset to finish
		#10 Ain = 101; Bin = 58;  Cin = 83;  Din = 87;  Carryin = 0; op = 0;
		#10 Ain = 230; Bin = 37;  Cin = 242; Din = 51;  Carryin = 0; op = 0;
  		#10 Ain = 153; Bin = 2;   Cin = 176; Din = 33;  Carryin = 0; op = 0;
  		#10 Ain = 11;  Bin = 182; Cin = 13;  Din = 65;  Carryin = 1; op = 0;
  
		#10 Ain = 0;   Bin = 204; Cin = 228; Din = 220; Carryin = 0; op = 1;
  		#10 Ain = 70;  Bin = 60;  Cin = 71;  Din = 75;  Carryin = 1; op = 1;
  		#10 Ain = 151; Bin = 92;  Cin = 224; Din = 8;   Carryin = 1; op = 1;
  		#10 Ain = 117; Bin = 183; Cin = 108; Din = 56;  Carryin = 0; op = 1;
  
		#10 Ain = 181; Bin = 155; Cin = 244; Din = 225; Carryin = 1; op = 2;
  		#10 Ain = 188; Bin = 8;   Cin = 110; Din = 220; Carryin = 0; op = 2;
  		#10 Ain = 237; Bin = 17;  Cin = 240; Din = 237; Carryin = 0; op = 2;
  		#10 Ain = 179; Bin = 170; Cin = 231; Din = 210; Carryin = 1; op = 2;
  
		#10 Ain = 214; Bin = 52;  Cin = 96;  Din = 97;  Carryin = 1; op = 3;
  		#10 Ain = 194; Bin = 77;  Cin = 82;  Din = 175; Carryin = 0; op = 3;
  		#10 Ain = 57;  Bin = 198; Cin = 24;  Din = 124; Carryin = 0; op = 3;
  		#10 Ain = 227; Bin = 86;  Cin = 185; Din = 228; Carryin = 0; op = 3;
  
		#10 Ain = 236; Bin = 182; Cin = 61;  Din = 119; Carryin = 0; op = 4;
  		#10 Ain = 59;  Bin = 168; Cin = 54;  Din = 152; Carryin = 0; op = 4;
  		#10 Ain = 98;  Bin = 19;  Cin = 203; Din = 180; Carryin = 0; op = 4;
  		#10 Ain = 200; Bin = 250; Cin = 243; Din = 89;  Carryin = 1; op = 4;
  
		#10 Ain = 202; Bin = 173; Cin = 54;  Din = 35;  Carryin = 0; op = 5;
  		#10 Ain = 39;  Bin = 23;  Cin = 91;  Din = 87;  Carryin = 1; op = 5;
  		#10 Ain = 217; Bin = 74;  Cin = 152; Din = 104; Carryin = 1; op = 5;
  		#10 Ain = 71;  Bin = 179; Cin = 103; Din = 174; Carryin = 1; op = 5;
  
		#10 Ain = 46;  Bin = 244; Cin = 113; Din = 230; Carryin = 1; op = 6;
  		#10 Ain = 209; Bin = 49;  Cin = 50;  Din = 204; Carryin = 0; op = 6;
  		#10 Ain = 96;  Bin = 225; Cin = 170; Din = 28;  Carryin = 1; op = 6;
  		#10 Ain = 152; Bin = 238; Cin = 221; Din = 142; Carryin = 1; op = 6;
  
		#10 Ain = 175; Bin = 206; Cin = 201; Din = 110; Carryin = 1; op = 7;
  		#10 Ain = 16;  Bin = 26;  Cin = 106; Din = 150; Carryin = 0; op = 7;
  		#10 Ain = 123; Bin = 253; Cin = 186; Din = 186; Carryin = 0; op = 7;
  		#10 Ain = 85;  Bin = 133; Cin = 59;  Din = 182; Carryin = 1; op = 7;
  
		#10 Ain = 122; Bin = 33;  Cin = 217; Din = 225; Carryin = 1; op = 8;
  		#10 Ain = 49;  Bin = 63;  Cin = 65;  Din = 237; Carryin = 0; op = 8;
  		#10 Ain = 248; Bin = 195; Cin = 36;  Din = 114; Carryin = 1; op = 8;
  		#10 Ain = 155; Bin = 206; Cin = 101; Din = 189; Carryin = 0; op = 8;
  
		#10 Ain = 170; Bin = 150; Cin = 239; Din = 179; Carryin = 0; op = 9;
  		#10 Ain = 229; Bin = 179; Cin = 57;  Din = 46;  Carryin = 0; op = 9;
  		#10 Ain = 236; Bin = 149; Cin = 83;  Din = 99;  Carryin = 0; op = 9;
  		#10 Ain = 113; Bin = 52;  Cin = 6;   Din = 119; Carryin = 1; op = 9;
  
		#10 Ain = 237; Bin = 204; Cin = 161; Din = 223; Carryin = 0; op = 10;
  		#10 Ain = 24;  Bin = 181; Cin = 91;  Din = 183; Carryin = 0; op = 10;
  		#10 Ain = 44;  Bin = 174; Cin = 185; Din = 45;  Carryin = 0; op = 10;
  		#10 Ain = 84;  Bin = 127; Cin = 145; Din = 187; Carryin = 0; op = 10;
  
		#10 Ain = 3;   Bin = 236; Cin = 208; Din = 147; Carryin = 1; op = 11;
  		#10 Ain = 90;  Bin = 194; Cin = 197; Din = 225; Carryin = 0; op = 11;
  		#10 Ain = 63;  Bin = 92;  Cin = 33;  Din = 194; Carryin = 0; op = 11;
  		#10 Ain = 204; Bin = 189; Cin = 203; Din = 129; Carryin = 1; op = 11;
  
		#10 Ain = 142; Bin = 192; Cin = 105; Din = 238; Carryin = 1; op = 12;
  		#10 Ain = 188; Bin = 228; Cin = 142; Din = 10;  Carryin = 0; op = 12;
  		#10 Ain = 50;  Bin = 35;  Cin = 171; Din = 197; Carryin = 0; op = 12;
  		#10 Ain = 119; Bin = 26;  Cin = 148; Din = 47;  Carryin = 0; op = 12;
  
		#10 Ain = 13;  Bin = 181; Cin = 52;  Din = 139; Carryin = 1; op = 13;
  		#10 Ain = 198; Bin = 2;   Cin = 129; Din = 86;  Carryin = 0; op = 13;
  		#10 Ain = 230; Bin = 158; Cin = 157; Din = 55;  Carryin = 0; op = 13;
  		#10 Ain = 233; Bin = 54;  Cin = 57;  Din = 168; Carryin = 0; op = 13;
  
		#10 Ain = 187; Bin = 149; Cin = 107; Din = 212; Carryin = 0; op = 14;
  		#10 Ain = 52;  Bin = 143; Cin = 90;  Din = 29;  Carryin = 0; op = 14;
  		#10 Ain = 53;  Bin = 177; Cin = 220; Din = 40;  Carryin = 0; op = 14;
  		#10 Ain = 206; Bin = 85;  Cin = 238; Din = 41;  Carryin = 0; op = 14;

		#10 Ain = 23;  Bin = 76;  Cin = 32;  Din = 246; Carryin = 0; op = 15;
  		#10 Ain = 248; Bin = 197; Cin = 56;  Din = 252; Carryin = 1; op = 15;
  		#10 Ain = 206; Bin = 31;  Cin = 55;  Din = 115; Carryin = 0; op = 15;
  		#10 Ain = 218; Bin = 235; Cin = 93;  Din = 29;  Carryin = 0; op = 15;
		
		#10 $finish;
		// Add stimulus here

	end
      
endmodule
