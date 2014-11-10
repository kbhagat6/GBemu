#include <iostream>
#include "MMU.h"


using namespace std;


class z80{
public:
	z80(void);
	~z80(void);
	 struct clk{
		int m;
		int t;
	} _clock;
	 struct reg{
		int a,b,c,d,e; //standard regs;
		int h,l;	//high register, low register
		int f;  //flag register
		int pc;  //program counter.  16 bit
		int sp;  //stack pointer  16 bit
		int m,t;  //clock for last instruction
	} _r;
	
	MMU mmu;
	void  ADDr_e(void);
	void  CPr_b(void);
	void  NOP(void);
	void  PUSHBC(void);
	void  POPHL(void);
	void  reset(void);

private:
     MMU mmu;
}


