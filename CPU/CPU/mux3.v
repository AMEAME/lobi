`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:15 06/18/2016 
// Design Name: 
// Module Name:    mux3 
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
module mux3(Ain, Bin, Cin, Din, reg_sel, Bout);
	input[7:0] Ain, Bin, Cin, Din;
	input[1:0] reg_sel;

	output[7:0] Bout;
	
	function [7:0] select;
		input [7:0] Ain, Bin, Cin, Din;
		input [1:0] reg_sel;
		begin
			case (reg_sel)
				2'b11: select = Ain;
				2'b00: select = Cin;
				2'b01: select = Din;
				2'b10: select = Bin;
			endcase
		end
	endfunction

	assign Bout = select(Ain, Bin, Cin, Din, reg_sel);
endmodule
