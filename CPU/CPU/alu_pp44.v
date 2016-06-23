`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:45 06/17/2016 
// Design Name: 
// Module Name:    alu_pp44 
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
module alu_pp44(Ain, Bin, Carryin, op, alu_enabled, Carryout, alu_out);
	input [7:0] Ain, Bin;
	input Carryin;
	input [2:0] op;
	input alu_enabled;

	output Carryout;
	output [7:0] alu_out;

	function [7:0] operate;
		input [7:0] Ain;
		input [7:0] Bin;
		input [2:0] op;
		input Carryin;
		input alu_enabled;

		begin
			if (alu_enabled == 1) begin
				case(op)
					3'b000: operate = Ain + Bin;
					3'b001: operate = Ain + Bin + Carryin;
					3'b010: operate = Ain - Bin;
					3'b011: operate = Ain * Bin;
					3'b100: operate = Ain & Bin;
					3'b101: operate = Ain | Bin;
					3'b110: operate = ~Ain;
					3'b111: operate = Ain ^ Bin;
				endcase
			end else
				operate = Ain;
		end
	endfunction

	function carry;
		input [7:0] Ain;
		input [7:0] Bin;
		input Carryin;
		input [2:0] op;
		begin
			if (alu_enabled == 1 && op == 3'b001) carry = (Ain + Bin + Carryin > 8'h80) ? 0 : 1;
		end
	endfunction

	assign alu_out = operate(Ain, Bin, op, Carryin, alu_enabled);
	assign Carryout = carry(Ain, Bin, Carryin, op);
endmodule
