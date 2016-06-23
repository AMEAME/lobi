`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:53:58 06/19/2016 
// Design Name: 
// Module Name:    test_module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test_module(Ain, Bin, Aout, Bout);
	input[7:0] Ain, Bin;
	output[7:0] Aout, Bout;
	reg[7:0] Aout, Bout;
	
	always @(Ain or Bin) begin
		Aout = Bin;
		Bout = Ain;
	end
endmodule
