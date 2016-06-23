`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:49 06/18/2016 
// Design Name: 
// Module Name:    mux4 
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
module mux4(Ain, Bin, Cin, Din, reg_sel, Aout);
	input[7:0] Ain, Bin, Cin, Din;
	input[1:0] reg_sel;

	output[7:0] Aout;
	
	function [7:0] select;
		input [7:0] Ain, Bin, Cin, Din;
		input [1:0] reg_sel;
		begin
			case (reg_sel)
				2'b00: select = Bin;
				2'b01: select = Cin;
				2'b10: select = Din;
				2'b11: select = Ain;
			endcase
		end
	endfunction
	
	assign Aout = select(Ain, Bin, Cin, Din, reg_sel);
endmodule
