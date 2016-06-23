`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:29:58 06/18/2016 
// Design Name: 
// Module Name:    op_decode 
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
module op_decode(op, op_sel, reg_sel1, reg_sel2, alu_enabled);
	input[3:0] op;
	
	output[2:0] op_sel;
	output[1:0] reg_sel1, reg_sel2;
	output alu_enabled;
	
	reg[2:0] op_sel;
	reg[1:0] reg_sel1, reg_sel2;
	reg alu_enabled;
	
	always @(op) begin
		if (op < 4'b1000) begin
				op_sel <= op;
				reg_sel1 <= 2'b11;
				reg_sel2 <= 2'b10;
				alu_enabled <= 1;
		end else begin
			op_sel <= 0;
			alu_enabled <= 0;
			if (op < 4'b1011) reg_sel1 <= op;
			else begin
				reg_sel1 <= 2'b11;
				if (op < 4'b1110) reg_sel2 <= op;
				else reg_sel2 <= 2'b10;
			end
		end
	end
	
endmodule
