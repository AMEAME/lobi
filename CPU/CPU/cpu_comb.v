`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:10:16 06/19/2016 
// Design Name: 
// Module Name:    cpu_comb 
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
module cpu_comb(Ain,  Bin,  Cin,  Din,  Carryin, op,
					 Aout, Bout, Cout, Dout, Carryout);
	
	input [7:0] Ain, Bin, Cin, Din;
	input Carryin;
	input [3:0] op;
	
	output [7:0] Aout, Bout, Cout, Dout;
	output Carryout;

	wire [2:0] op_sel;
	wire [1:0] reg_sel1, reg_sel2;
	wire [7:0] alu_out;

	wire alu_enabled;

	op_decode decoder (op, op_sel, reg_sel1, reg_sel2, alu_enabled);
	alu_pp44 alu (.Ain(Ain), .Bin(Bin), .Carryin(Carryin), .op(op), .alu_enabled(alu_enabled), .Carryout(Carryout), .alu_out(alu_out));
	mux4 m4 (.Ain(alu_out), .Bin(Bin), .Cin(Cin), .Din(Din), .reg_sel(reg_sel1), .Aout(Aout));
	mux3 m3 (.Ain(alu_out), .Bin(Bin), .Cin(Cin), .Din(Din), .reg_sel(reg_sel2), .Bout(Bout));
	
	assign Cout = (op == 4'b1110) ? Ain : Cin;
	assign Dout = (op == 4'b1111) ? Ain : Din;
endmodule
