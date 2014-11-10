#include <iostream>
#include "z80.h"

using namespace std;


z80::z80(void){

}
	// +++ Instruction simulations +++
	// Add E to A, leaving result in A (ADD A, E)
void z80:: ADDr_e(void){  
	  _r.a += _r.e;    // Perform addition
	  _r.f =0;            // Clear flags
	  if(!(_r.a & 255)) _r.f |= (0x80);     // Check for zero
	  if((_r.a > 255)) _r.f  |= (0x10);   // Check for carry
	  _r.a &=255;                   // Mask to 8-bits
	  _r.m=1;							// 1 M-time taken
	  _r.t=4;
	}
	
	// Compare B to A, setting flags (CP A, B)
void z80::CPr_b(void){
		int i = _r.a;   // Temp copy of A
		i -=_r.b;        // Subtract B
		_r.f |=0x40;     // Set subtraction flag
		if(!(i & 255)) _r.f |= 0x80;    // Check for zero
		if(i < 0) _r.f |= 0x10;    // Check for underflow
		_r.m = 1;              // 1 M-time taken
		_r.t = 4;         // 4 T-time taken
	}
	//no operation
void z80::NOP(void){
		_r.m = 1;    // 1 M-time taken
		_r.t = 4;
	}
    // Push registers B and C to the stack (PUSH BC)
void z80::PUSHBC(void){
		_r.sp--;  // Drop through the stack
		mmu.wb(_r.sp, _r.b);    // Write B
		_r.sp--;			// Drop through the stack
		mmu.wb(_r.sp,_r.c);		// Write C
		_r.m=3;      // 3 M-times taken
		_r.t=12;	 //12 T-times taken
    }
	
	    // Pop registers H and L off the stack (POP HL)

void z80::POPHL(void){
		_r.l= mmu.rb(_r.sp);   // Read L
		_r.sp++;      // Move back up the stack
		_r.h= mmu.rb(_r.sp);   // Read H
		_r.sp++;      // Move back up the stack
		_r.m=3;       // 3 M-times taken
		_r.t=12; 	  // 12 T-times taken
	}
	
	// Read a byte from absolute location into A (LD A, addr)
void z80::LDAmm(void){
		int addr= mmu.rw(_r.pc)  // Get address from instr
		_r.pc += 2;               // Advance PC
		_r.a= mmu.rb(addr);       // Read from address
		_r.m = 4;                 // 4 M-times taken
		_r.t = 16;                 // 16 T-times taken
	}
	
void z80::reset(void){
		_r.a = 0;
		_r.b = 0; 
		_r.c = 0;
		_r.d = 0;
		_r.e = 0; _r.h = 0; _r.l = 0; _r.f = 0;
		_r.sp = 0;
		_r.pc = 0;      // Start execution at 0

		_clock.m = 0; _clock.t = 0;
		
	
}
   
