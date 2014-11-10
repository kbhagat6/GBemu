#include "z80.h"

class Ops{
public:
   z80 reg;
   MMU mmu;
   void LDrr_bb(void){  reg._r.b= reg._r.b;	 reg._r.m=1; }
   void LDrr_bc(void){	reg._r.b= reg._r.c;  reg._r.m=1; }
   void LDrr_bd(void){	reg._r.b=reg._r.d; reg._r.m=1; }
   void LDrr_be(void){ reg._r.b=reg._r.e; reg._r.m=1; }
   void LDrr_bh(void){ reg._r.b=reg._r.h; reg._r.m=1; }
   void LDrr_bl(void){ reg._r.b=reg._r.l; reg._r.m=1; }
   void LDrr_ba(void){ reg._r.b=reg._r.a; reg._r.m=1; }
   void LDrr_cb(void){ reg._r.c=reg._r.b; reg._r.m=1; }
   void LDrr_cc(void){ reg._r.c=reg._r.c; reg._r.m=1; }
   void LDrr_cd(void){ reg._r.c=reg._r.d; reg._r.m=1; }
   void LDrr_ce(void){ reg._r.c=reg._r.e; reg._r.m=1; }
   void LDrr_ch(void){ reg._r.c=reg._r.h; reg._r.m=1; }
   void LDrr_cl(void){ reg._r.c=reg._r.l; reg._r.m=1; }
   void LDrr_ca(void){ reg._r.c=reg._r.a; reg._r.m=1; }
   void LDrr_db(void){ reg._r.d=reg._r.b; reg._r.m=1; }
   void LDrr_dc(void){ reg._r.d=reg._r.c; reg._r.m=1; }
   void LDrr_dd(void){ reg._r.d=reg._r.d; reg._r.m=1; }
   void LDrr_de(void){ reg._r.d=reg._r.e; reg._r.m=1; }
   void LDrr_dh(void){ reg._r.d=reg._r.h; reg._r.m=1; }
   void LDrr_dl(void){ reg._r.d=reg._r.l; reg._r.m=1; }
   void LDrr_da(void){ reg._r.d=reg._r.a; reg._r.m=1; }
   void LDrr_eb(void){ reg._r.e=reg._r.b; reg._r.m=1; }
   void LDrr_ec(void){ reg._r.e=reg._r.c; reg._r.m=1; }
   void LDrr_ed(void){ reg._r.e=reg._r.d; reg._r.m=1; }
   void LDrr_ee(void){ reg._r.e=reg._r.e; reg._r.m=1; }
   void LDrr_eh(void){ reg._r.e=reg._r.h; reg._r.m=1; }
   void LDrr_el(void){ reg._r.e=reg._r.l; reg._r.m=1; }
   void LDrr_ea(void){ reg._r.e=reg._r.a; reg._r.m=1; }
   void LDrr_hb(void){ reg._r.h=reg._r.b; reg._r.m=1; }
   void LDrr_hc(void){ reg._r.h=reg._r.c; reg._r.m=1; }
   void LDrr_hd(void){ reg._r.h=reg._r.d; reg._r.m=1; }
   void LDrr_he(void){ reg._r.h=reg._r.e; reg._r.m=1; }
   void LDrr_hh(void){ reg._r.h=reg._r.h; reg._r.m=1; }
   void LDrr_hl(void){ reg._r.h=reg._r.l; reg._r.m=1; }
   void LDrr_ha(void){ reg._r.h=reg._r.a; reg._r.m=1; }
   void LDrr_lb(void){ reg._r.l=reg._r.b; reg._r.m=1; }
   void LDrr_lc(void){ reg._r.l=reg._r.c; reg._r.m=1; }
   void LDrr_ld(void){ reg._r.l=reg._r.d; reg._r.m=1; }
   void LDrr_le(void){ reg._r.l=reg._r.e; reg._r.m=1; }
   void LDrr_lh(void){ reg._r.l=reg._r.h; reg._r.m=1; }
   void LDrr_ll(void){ reg._r.l=reg._r.l; reg._r.m=1; }
   void LDrr_la(void){ reg._r.l=reg._r.a; reg._r.m=1; }
   void LDrr_ab(void){ reg._r.a=reg._r.b; reg._r.m=1; }
   void LDrr_ac(void){ reg._r.a=reg._r.c; reg._r.m=1; }
   void LDrr_ad(void){ reg._r.a=reg._r.d; reg._r.m=1; }
   void LDrr_ae(void){ reg._r.a=reg._r.e; reg._r.m=1; }
   void LDrr_ah(void){ reg._r.a=reg._r.h; reg._r.m=1; }
   void LDrr_al(void){ reg._r.a=reg._r.l; reg._r.m=1; }
   void LDrr_aa(void){ reg._r.a=reg._r.a; reg._r.m=1; }
   
   void LDrHLm_b(void){ reg._r.b=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_c(void){ reg._r.c=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_d(void){ reg._r.d=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_e(void){ reg._r.e=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_h(void){ reg._r.h=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_l(void){ reg._r.l=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
   void LDrHLm_a(void){ reg._r.a=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.m=2; }
    
   void LDHLmr_b(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.b); reg._r.m=2; }
   void LDHLmr_c(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.c); reg._r.m=2; }
   void LDHLmr_d(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.d); reg._r.m=2; }
   void LDHLmr_e(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.e); reg._r.m=2; }
   void LDHLmr_h(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.h); reg._r.m=2; }
   void LDHLmr_l(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.l); reg._r.m=2; }
   void LDHLmr_a(void){ mmu.wb((reg._r.h<<8)+reg._r.l,reg._r.a); reg._r.m=2; }
     
   void LDrn_b(void){ reg._r.b=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_c(void){ reg._r.c=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_d(void){ reg._r.d=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_e(void){ reg._r.e=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_h(void){ reg._r.h=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_l(void){ reg._r.l=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
   void LDrn_a(void){ reg._r.a=mmu.rb(reg._r.pc); reg._r.pc++; reg._r.m=2; }
 
   void LDHLmn(void){ mmu.wb((reg._r.h<<8)+reg._r.l, mmu.rb(reg._r.pc)); reg._r.pc++; reg._r.m=3; }
   
   void LDBCmA(void){ mmu.wb((reg._r.b<<8)+reg._r.c, reg._r.a); reg._r.m=2; }
   void LDDEmA(void){ mmu.wb((reg._r.d<<8)+reg._r.e, reg._r.a); reg._r.m=2; }
   
   void LDmmA(void){ mmu.wb(mmu.rw(reg._r.pc), reg._r.a); reg._r.pc+=2; reg._r.m=4; }
   
   void LDABCm(void){ reg._r.a=mmu.rb((reg._r.b<<8)+reg._r.c); reg._r.m=2; }
   void LDADEm(void){ reg._r.a=mmu.rb((reg._r.d<<8)+reg._r.e); reg._r.m=2; }
   
   void LDAmm(void){ reg._r.a=mmu.rb(mmu.rw(reg._r.pc)); reg._r.pc+=2; reg._r.m=4; }
   
   void LDBCnn(void){ reg._r.c=mmu.rb(reg._r.pc); reg._r.b=mmu.rb(reg._r.pc+1); reg._r.pc+=2; reg._r.m=3; }
   void LDDEnn(void){ reg._r.e=mmu.rb(reg._r.pc); reg._r.d=mmu.rb(reg._r.pc+1); reg._r.pc+=2; reg._r.m=3; }
   void LDHLnn(void){ reg._r.l=mmu.rb(reg._r.pc); reg._r.h=mmu.rb(reg._r.pc+1); reg._r.pc+=2; reg._r.m=3; }
   void LDSPnn(void){ reg._r.sp=mmu.rw(reg._r.pc); reg._r.pc+=2; reg._r.m=3; }
   
   void LDHLmm(void){ int i=mmu.rw(reg._r.pc); reg._r.pc+=2; reg._r.l=mmu.rb(i); reg._r.h=mmu.rb(i+1); reg._r.m=5; }
   void LDmmHL(void){ int i=mmu.rw(reg._r.pc); reg._r.pc+=2; mmu.ww(i,(reg._r.h<<8)+reg._r.l); reg._r.m=5; }
  
   void LDHLIA(void){ mmu.wb((reg._r.h<<8)+reg._r.l, reg._r.a); reg._r.l=(reg._r.l+1)&255; if(!reg._r.l) reg._r.h=(reg._r.h+1)&255; reg._r.m=2; }
   void LDAHLI(void){ reg._r.a=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.l=(reg._r.l+1)&255; if(!reg._r.l) reg._r.h=(reg._r.h+1)&255; reg._r.m=2; }
   
   void LDHLDA(void){ mmu.wb((reg._r.h<<8)+reg._r.l, reg._r.a); reg._r.l=(reg._r.l-1)&255; if(reg._r.l==255) reg._r.h=(reg._r.h-1)&255; reg._r.m=2; }
   void LDAHLD(void){ reg._r.a=mmu.rb((reg._r.h<<8)+reg._r.l); reg._r.l=(reg._r.l-1)&255; if(reg._r.l==255) reg._r.h=(reg._r.h-1)&255; reg._r.m=2; }
   
   void LDAIOn(void){ reg._r.a=mmu.rb(0xFF00+mmu.rb(reg._r.pc)); reg._r.pc++; reg._r.m=3; }
   void LDIOnA(void){ mmu.wb(0xFF00+mmu.rb(reg._r.pc),reg._r.a); reg._r.pc++; reg._r.m=3; }
   void LDAIOC(void){ reg._r.a=mmu.rb(0xFF00+reg._r.c); reg._r.m=2; }
   void LDIOCA(void){ mmu.wb(0xFF00+reg._r.c,reg._r.a); reg._r.m=2; }
   
   void LDHLSPn(void){ int i=mmu.rb(reg._r.pc); if(i>127) i=-((~i+1)&255); reg._r.pc++; i+=reg._r.sp; reg._r.h=(i>>8)&255; reg._r.l=i&255; reg._r.m=3; }
  
   void	SWAPr_b(void){ int tr=_r.b;reg._r.b=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.b?0:0x80;reg._r.m=1; }
   void SWAPr_c(void){ int tr=_r.c;reg._r.c=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.c?0:0x80;reg._r.m=1; }
   void SWAPr_d(void){ int tr=_r.d;reg._r.d=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.d?0:0x80;reg._r.m=1; }
   void SWAPr_e(void){ int tr=_r.e;reg._r.e=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.e?0:0x80;reg._r.m=1; }
   void SWAPr_h(void){ int tr=_r.h;reg._r.h=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.h?0:0x80;reg._r.m=1; }
   void SWAPr_l(void){ int tr=_r.l;reg._r.l=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.l?0:0x80;reg._r.m=1; }
   void SWAPr_a(void){ int tr=_r.a;reg._r.a=((tr&0xF)<<4)|((tr&0xF0)>>4);reg._r.f=_r.a?0:0x80;reg._r.m=1; }
   
        /*--- Data processing ---*/
   void ADDr_b(void){ int a=_r.a;reg._r.a+=_r.b;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.b^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_c(void){ int a=_r.a;reg._r.a+=_r.c;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.c^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_d(void){ int a=_r.a;reg._r.a+=_r.d;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.d^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_e(void){ int a=_r.a;reg._r.a+=_r.e;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.e^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_h(void){ int a=_r.a;reg._r.a+=_r.h;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.h^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_l(void){ int a=_r.a;reg._r.a+=_r.l;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.l^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDr_a(void){ int a=_r.a;reg._r.a+=_r.a;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.a^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADDHL(void){ int a=_r.a; int m=mmu.rb((_r.h<<8)+_r.l);reg._r.a+=m;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^a^m)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void ADDn(void){ int a=_r.a; int m=mmu.rb(_r.pc);reg._r.a+=m;reg._r.pc++;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^a^m)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void ADDHLBC(void){ int hl=(_r.h<<8)+_r.l; hl+=(_r.b<<8)+_r.c; if(hl>65535)reg._r.f|=0x10; elsereg._r.f&=0xEF;reg._r.h=(hl>>8)&255;reg._r.l=hl&255;reg._r.m=3; }
   void ADDHLDE(void){ int hl=(_r.h<<8)+_r.l; hl+=(_r.d<<8)+_r.e; if(hl>65535)reg._r.f|=0x10; elsereg._r.f&=0xEF;reg._r.h=(hl>>8)&255;reg._r.l=hl&255;reg._r.m=3; }
   void ADDHLHL(void){ int hl=(_r.h<<8)+_r.l; hl+=(_r.h<<8)+_r.l; if(hl>65535)reg._r.f|=0x10; elsereg._r.f&=0xEF;reg._r.h=(hl>>8)&255;reg._r.l=hl&255;reg._r.m=3; }
   void ADDHLSP(void){ int hl=(_r.h<<8)+_r.l; hl+=_r.sp; if(hl>65535)reg._r.f|=0x10; elsereg._r.f&=0xEF;reg._r.h=(hl>>8)&255;reg._r.l=hl&255;reg._r.m=3; }
   void ADDSPn(void){ int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);reg._r.pc++;reg._r.sp+=i;reg._r.m=4; }
   
   void ADCr_b(void){ int a=_r.a;reg._r.a+=_r.b;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.b^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_c(void){ int a=_r.a;reg._r.a+=_r.c;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.c^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_d(void){ int a=_r.a;reg._r.a+=_r.d;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.d^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_e(void){ int a=_r.a;reg._r.a+=_r.e;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.e^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_h(void){ int a=_r.a;reg._r.a+=_r.h;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.h^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_l(void){ int a=_r.a;reg._r.a+=_r.l;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.l^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCr_a(void){ int a=_r.a;reg._r.a+=_r.a;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.a^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void ADCHL(void){ int a=_r.a; int m=mmu.rb((_r.h<<8)+_r.l);reg._r.a+=m;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void ADCn(void){ int a=_r.a; int m=mmu.rb(_r.pc);reg._r.a+=m;reg._r.pc++;reg._r.a+=(_r.f&0x10)?1:0;reg._r.f=(_r.a>255)?0x10:0;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   
   void SUBr_b(void){ int a=_r.a;reg._r.a-=_r.b;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.b^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_c(void){ int a=_r.a;reg._r.a-=_r.c;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.c^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_d(void){ int a=_r.a;reg._r.a-=_r.d;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.d^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_e(void){ int a=_r.a;reg._r.a-=_r.e;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.e^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_h(void){ int a=_r.a;reg._r.a-=_r.h;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.h^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_l(void){ int a=_r.a;reg._r.a-=_r.l;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.l^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBr_a(void){ int a=_r.a;reg._r.a-=_r.a;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.a^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SUBHL(void){ int a=_r.a; int m=mmu.rb((_r.h<<8)+_r.l);reg._r.a-=m;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void SUBn(void){ int a=_r.a; int m=mmu.rb(_r.pc);reg._r.a-=m;reg._r.pc++;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
  
   void SBCr_b(void){ int a=_r.a;reg._r.a-=_r.b;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.b^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_c(void){ int a=_r.a;reg._r.a-=_r.c;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.c^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_d(void){ int a=_r.a;reg._r.a-=_r.d;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.d^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_e(void){ int a=_r.a;reg._r.a-=_r.e;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.e^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_h(void){ int a=_r.a;reg._r.a-=_r.h;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.h^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_l(void){ int a=_r.a;reg._r.a-=_r.l;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.l^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCr_a(void){ int a=_r.a;reg._r.a-=_r.a;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^_r.a^a)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void SBCHL(void){ int a=_r.a; int m=mmu.rb((_r.h<<8)+_r.l);reg._r.a-=m;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void SBCn(void){ int a=_r.a; int m=mmu.rb(_r.pc);reg._r.a-=m;reg._r.pc++;reg._r.a-=(_r.f&0x10)?1:0;reg._r.f=(_r.a<0)?0x50:0x40;reg._r.a&=255; if(!_r.a)reg._r.f|=0x80; if((_r.a^m^a)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   
   void CPr_b(void){ int i=_r.a; i-=_r.b;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.b^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_c(void){ int i=_r.a; i-=_r.c;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.c^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_d(void){ int i=_r.a; i-=_r.d;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.d^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_e(void){ int i=_r.a; i-=_r.e;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.e^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_h(void){ int i=_r.a; i-=_r.h;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.h^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_l(void){ int i=_r.a; i-=_r.l;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.l^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPr_a(void){ int i=_r.a; i-=_r.a;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^_r.a^i)&0x10)reg._r.f|=0x20;reg._r.m=1; }
   void CPHL(void){ int i=_r.a; int m=mmu.rb((_r.h<<8)+_r.l); i-=m;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^i^m)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   void CPn(void){ int i=_r.a; int m=mmu.rb(_r.pc); i-=m;reg._r.pc++;reg._r.f=(i<0)?0x50:0x40; i&=255; if(!i)reg._r.f|=0x80; if((_r.a^i^m)&0x10)reg._r.f|=0x20;reg._r.m=2; }
   
   void DAA(void){ int a=_r.a; if((_r.f&0x20)||((_r.a&15)>9))reg._r.a+=6;reg._r.f&=0xEF; if((_r.f&0x20)||(a>0x99)) {reg._r.a+=0x60;reg._r.f|=0x10; }reg._r.m=1; }
  
   void ANDr_b (void) {_r.a&=_r.b;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_c (void) {_r.a&=_r.c;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_d (void) {_r.a&=_r.d;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_e (void) {_r.a&=_r.e;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_h (void) {_r.a&=_r.h;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_l (void) {_r.a&=_r.l;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDr_a (void) {_r.a&=_r.a;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ANDHL (void) {_r.a&=mmu.rb((_r.h<<8)+_r.l);_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }
   void ANDn (void) {_r.a&=mmu.rb(_r.pc);_r.pc++;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }

   void ORr_b (void) {_r.a|=_r.b;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_c (void) {_r.a|=_r.c;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_d (void) {_r.a|=_r.d;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_e (void) {_r.a|=_r.e;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_h (void) {_r.a|=_r.h;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_l (void) {_r.a|=_r.l;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORr_a (void) {_r.a|=_r.a;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void ORHL (void) {_r.a|=mmu.rb((_r.h<<8)+_r.l);_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }
   void ORn (void) {_r.a|=mmu.rb(_r.pc);_r.pc++;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }

   void XORr_b (void) {_r.a^=_r.b;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_c (void) {_r.a^=_r.c;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_d (void) {_r.a^=_r.d;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_e (void) {_r.a^=_r.e;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_h (void) {_r.a^=_r.h;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_l (void) {_r.a^=_r.l;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORr_a (void) {_r.a^=_r.a;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void XORHL (void) {_r.a^=mmu.rb((_r.h<<8)+_r.l);_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }
   void XORn (void) {_r.a^=mmu.rb(_r.pc);_r.pc++;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=2; }

   void INCr_b (void) {_r.b++;_r.b&=255;_r.f=_r.b?0:0x80;_r.m=1; }
   void INCr_c (void) {_r.c++;_r.c&=255;_r.f=_r.c?0:0x80;_r.m=1; }
   void INCr_d (void) {_r.d++;_r.d&=255;_r.f=_r.d?0:0x80;_r.m=1; }
   void INCr_e (void) {_r.e++;_r.e&=255;_r.f=_r.e?0:0x80;_r.m=1; }
   void INCr_h (void) {_r.h++;_r.h&=255;_r.f=_r.h?0:0x80;_r.m=1; }
   void INCr_l (void) {_r.l++;_r.l&=255;_r.f=_r.l?0:0x80;_r.m=1; }
   void INCr_a (void) {_r.a++;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void INCHLm (void) { int i=mmu.rb((_r.h<<8)+_r.l)+1; i&=255; mmu.wb((_r.h<<8)+_r.l,i);_r.f=i?0:0x80;_r.m=3; }

   void DECr_b (void) {_r.b--;_r.b&=255;_r.f=_r.b?0:0x80;_r.m=1; }
   void DECr_c (void) {_r.c--;_r.c&=255;_r.f=_r.c?0:0x80;_r.m=1; }
   void DECr_d (void) {_r.d--;_r.d&=255;_r.f=_r.d?0:0x80;_r.m=1; }
   void DECr_e (void) {_r.e--;_r.e&=255;_r.f=_r.e?0:0x80;_r.m=1; }
   void DECr_h (void) {_r.h--;_r.h&=255;_r.f=_r.h?0:0x80;_r.m=1; }
   void DECr_l (void) {_r.l--;_r.l&=255;_r.f=_r.l?0:0x80;_r.m=1; }
   void DECr_a (void) {_r.a--;_r.a&=255;_r.f=_r.a?0:0x80;_r.m=1; }
   void DECHLm (void) { int i=mmu.rb((_r.h<<8)+_r.l)-1; i&=255; mmu.wb((_r.h<<8)+_r.l,i);_r.f=i?0:0x80;_r.m=3; }

   void INCBC (void) {_r.c=(_r.c+1)&255; if(!_r.c)_r.b=(_r.b+1)&255;_r.m=1; }
   void INCDE (void) {_r.e=(_r.e+1)&255; if(!_r.e)_r.d=(_r.d+1)&255;_r.m=1; }
   void INCHL (void) {_r.l=(_r.l+1)&255; if(!_r.l)_r.h=(_r.h+1)&255;_r.m=1; }
   void INCSP (void) {_r.sp=(_r.sp+1)&65535;_r.m=1; }

   void DECBC (void) {_r.c=(_r.c-1)&255; if(_r.c==255)_r.b=(_r.b-1)&255;_r.m=1; }
   void DECDE (void) {_r.e=(_r.e-1)&255; if(_r.e==255)_r.d=(_r.d-1)&255;_r.m=1; }
   void DECHL (void) {_r.l=(_r.l-1)&255; if(_r.l==255)_r.h=(_r.h-1)&255;_r.m=1; }
   void DECSP (void) {_r.sp=(_r.sp-1)&65535;_r.m=1; }

       /*--- Bit manipulation ---*/
   void BIT0b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x01)?0:0x80;_r.m=2; }
   void BIT0c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x01)?0:0x80;_r.m=2; }
   void BIT0d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x01)?0:0x80;_r.m=2; }
   void BIT0e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x01)?0:0x80;_r.m=2; }
   void BIT0h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x01)?0:0x80;_r.m=2; }
   void BIT0l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x01)?0:0x80;_r.m=2; }
   void BIT0a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x01)?0:0x80;_r.m=2; }
   void BIT0m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x01)?0:0x80;_r.m=3; }

   void RES0b (void) {_r.b&=0xFE;_r.m=2; }
   void RES0c (void) {_r.c&=0xFE;_r.m=2; }
   void RES0d (void) {_r.d&=0xFE;_r.m=2; }
   void RES0e (void) {_r.e&=0xFE;_r.m=2; }
   void RES0h (void) {_r.h&=0xFE;_r.m=2; }
   void RES0l (void) {_r.l&=0xFE;_r.m=2; }
   void RES0a (void) {_r.a&=0xFE;_r.m=2; }
   void RES0m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xFE; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET0b (void) {_r.b|=0x01;_r.m=2; }
   void SET0c (void) {_r.b|=0x01;_r.m=2; }
   void SET0d (void) {_r.b|=0x01;_r.m=2; }
   void SET0e (void) {_r.b|=0x01;_r.m=2; }
   void SET0h (void) {_r.b|=0x01;_r.m=2; }
   void SET0l (void) {_r.b|=0x01;_r.m=2; }
   void SET0a (void) {_r.b|=0x01;_r.m=2; }
   void SET0m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x01; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT1b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x02)?0:0x80;_r.m=2; }
   void BIT1c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x02)?0:0x80;_r.m=2; }
   void BIT1d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x02)?0:0x80;_r.m=2; }
   void BIT1e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x02)?0:0x80;_r.m=2; }
   void BIT1h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x02)?0:0x80;_r.m=2; }
   void BIT1l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x02)?0:0x80;_r.m=2; }
   void BIT1a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x02)?0:0x80;_r.m=2; }
   void BIT1m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x02)?0:0x80;_r.m=3; }

   void RES1b (void) {_r.b&=0xFD;_r.m=2; }
   void RES1c (void) {_r.c&=0xFD;_r.m=2; }
   void RES1d (void) {_r.d&=0xFD;_r.m=2; }
   void RES1e (void) {_r.e&=0xFD;_r.m=2; }
   void RES1h (void) {_r.h&=0xFD;_r.m=2; }
   void RES1l (void) {_r.l&=0xFD;_r.m=2; }
   void RES1a (void) {_r.a&=0xFD;_r.m=2; }
   void RES1m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xFD; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET1b (void) {_r.b|=0x02;_r.m=2; }
   void SET1c (void) {_r.b|=0x02;_r.m=2; }
   void SET1d (void) {_r.b|=0x02;_r.m=2; }
   void SET1e (void) {_r.b|=0x02;_r.m=2; }
   void SET1h (void) {_r.b|=0x02;_r.m=2; }
   void SET1l (void) {_r.b|=0x02;_r.m=2; }
   void SET1a (void) {_r.b|=0x02;_r.m=2; }
   void SET1m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x02; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT2b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x04)?0:0x80;_r.m=2; }
   void BIT2c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x04)?0:0x80;_r.m=2; }
   void BIT2d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x04)?0:0x80;_r.m=2; }
   void BIT2e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x04)?0:0x80;_r.m=2; }
   void BIT2h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x04)?0:0x80;_r.m=2; }
   void BIT2l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x04)?0:0x80;_r.m=2; }
   void BIT2a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x04)?0:0x80;_r.m=2; }
   void BIT2m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x04)?0:0x80;_r.m=3; }

   void RES2b (void) {_r.b&=0xFB;_r.m=2; }
   void RES2c (void) {_r.c&=0xFB;_r.m=2; }
   void RES2d (void) {_r.d&=0xFB;_r.m=2; }
   void RES2e (void) {_r.e&=0xFB;_r.m=2; }
   void RES2h (void) {_r.h&=0xFB;_r.m=2; }
   void RES2l (void) {_r.l&=0xFB;_r.m=2; }
   void RES2a (void) {_r.a&=0xFB;_r.m=2; }
   void RES2m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xFB; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET2b (void) {_r.b|=0x04;_r.m=2; }
   void SET2c (void) {_r.b|=0x04;_r.m=2; }
   void SET2d (void) {_r.b|=0x04;_r.m=2; }
   void SET2e (void) {_r.b|=0x04;_r.m=2; }
   void SET2h (void) {_r.b|=0x04;_r.m=2; }
   void SET2l (void) {_r.b|=0x04;_r.m=2; }
   void SET2a (void) {_r.b|=0x04;_r.m=2; }
   void SET2m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x04; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT3b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x08)?0:0x80;_r.m=2; }
   void BIT3c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x08)?0:0x80;_r.m=2; }
   void BIT3d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x08)?0:0x80;_r.m=2; }
   void BIT3e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x08)?0:0x80;_r.m=2; }
   void BIT3h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x08)?0:0x80;_r.m=2; }
   void BIT3l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x08)?0:0x80;_r.m=2; }
   void BIT3a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x08)?0:0x80;_r.m=2; }
   void BIT3m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x08)?0:0x80;_r.m=3; }

   void RES3b (void) {_r.b&=0xF7;_r.m=2; }
   void RES3c (void) {_r.c&=0xF7;_r.m=2; }
   void RES3d (void) {_r.d&=0xF7;_r.m=2; }
   void RES3e (void) {_r.e&=0xF7;_r.m=2; }
   void RES3h (void) {_r.h&=0xF7;_r.m=2; }
   void RES3l (void) {_r.l&=0xF7;_r.m=2; }
   void RES3a (void) {_r.a&=0xF7;_r.m=2; }
   void RES3m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xF7; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET3b (void) {_r.b|=0x08;_r.m=2; }
   void SET3c (void) {_r.b|=0x08;_r.m=2; }
   void SET3d (void) {_r.b|=0x08;_r.m=2; }
   void SET3e (void) {_r.b|=0x08;_r.m=2; }
   void SET3h (void) {_r.b|=0x08;_r.m=2; }
   void SET3l (void) {_r.b|=0x08;_r.m=2; }
   void SET3a (void) {_r.b|=0x08;_r.m=2; }
   void SET3m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x08; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT4b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x10)?0:0x80;_r.m=2; }
   void BIT4c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x10)?0:0x80;_r.m=2; }
   void BIT4d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x10)?0:0x80;_r.m=2; }
   void BIT4e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x10)?0:0x80;_r.m=2; }
   void BIT4h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x10)?0:0x80;_r.m=2; }
   void BIT4l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x10)?0:0x80;_r.m=2; }
   void BIT4a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x10)?0:0x80;_r.m=2; }
   void BIT4m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x10)?0:0x80;_r.m=3; }

   void RES4b (void) {_r.b&=0xEF;_r.m=2; }
   void RES4c (void) {_r.c&=0xEF;_r.m=2; }
   void RES4d (void) {_r.d&=0xEF;_r.m=2; }
   void RES4e (void) {_r.e&=0xEF;_r.m=2; }
   void RES4h (void) {_r.h&=0xEF;_r.m=2; }
   void RES4l (void) {_r.l&=0xEF;_r.m=2; }
   void RES4a (void) {_r.a&=0xEF;_r.m=2; }
   void RES4m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xEF; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET4b (void) {_r.b|=0x10;_r.m=2; }
   void SET4c (void) {_r.b|=0x10;_r.m=2; }
   void SET4d (void) {_r.b|=0x10;_r.m=2; }
   void SET4e (void) {_r.b|=0x10;_r.m=2; }
   void SET4h (void) {_r.b|=0x10;_r.m=2; }
   void SET4l (void) {_r.b|=0x10;_r.m=2; }
   void SET4a (void) {_r.b|=0x10;_r.m=2; }
   void SET4m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x10; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT5b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x20)?0:0x80;_r.m=2; }
   void BIT5c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x20)?0:0x80;_r.m=2; }
   void BIT5d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x20)?0:0x80;_r.m=2; }
   void BIT5e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x20)?0:0x80;_r.m=2; }
   void BIT5h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x20)?0:0x80;_r.m=2; }
   void BIT5l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x20)?0:0x80;_r.m=2; }
   void BIT5a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x20)?0:0x80;_r.m=2; }
   void BIT5m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x20)?0:0x80;_r.m=3; }

   void RES5b (void) {_r.b&=0xDF;_r.m=2; }
   void RES5c (void) {_r.c&=0xDF;_r.m=2; }
   void RES5d (void) {_r.d&=0xDF;_r.m=2; }
   void RES5e (void) {_r.e&=0xDF;_r.m=2; }
   void RES5h (void) {_r.h&=0xDF;_r.m=2; }
   void RES5l (void) {_r.l&=0xDF;_r.m=2; }
   void RES5a (void) {_r.a&=0xDF;_r.m=2; }
   void RES5m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xDF; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET5b (void) {_r.b|=0x20;_r.m=2; }
   void SET5c (void) {_r.b|=0x20;_r.m=2; }
   void SET5d (void) {_r.b|=0x20;_r.m=2; }
   void SET5e (void) {_r.b|=0x20;_r.m=2; }
   void SET5h (void) {_r.b|=0x20;_r.m=2; }
   void SET5l (void) {_r.b|=0x20;_r.m=2; }
   void SET5a (void) {_r.b|=0x20;_r.m=2; }
   void SET5m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x20; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT6b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x40)?0:0x80;_r.m=2; }
   void BIT6c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x40)?0:0x80;_r.m=2; }
   void BIT6d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x40)?0:0x80;_r.m=2; }
   void BIT6e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x40)?0:0x80;_r.m=2; }
   void BIT6h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x40)?0:0x80;_r.m=2; }
   void BIT6l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x40)?0:0x80;_r.m=2; }
   void BIT6a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x40)?0:0x80;_r.m=2; }
   void BIT6m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x40)?0:0x80;_r.m=3; }

   void RES6b (void) {_r.b&=0xBF;_r.m=2; }
   void RES6c (void) {_r.c&=0xBF;_r.m=2; }
   void RES6d (void) {_r.d&=0xBF;_r.m=2; }
   void RES6e (void) {_r.e&=0xBF;_r.m=2; }
   void RES6h (void) {_r.h&=0xBF;_r.m=2; }
   void RES6l (void) {_r.l&=0xBF;_r.m=2; }
   void RES6a (void) {_r.a&=0xBF;_r.m=2; }
   void RES6m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0xBF; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET6b (void) {_r.b|=0x40;_r.m=2; }
   void SET6c (void) {_r.b|=0x40;_r.m=2; }
   void SET6d (void) {_r.b|=0x40;_r.m=2; }
   void SET6e (void) {_r.b|=0x40;_r.m=2; }
   void SET6h (void) {_r.b|=0x40;_r.m=2; }
   void SET6l (void) {_r.b|=0x40;_r.m=2; }
   void SET6a (void) {_r.b|=0x40;_r.m=2; }
   void SET6m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x40; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void BIT7b (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.b&0x80)?0:0x80;_r.m=2; }
   void BIT7c (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.c&0x80)?0:0x80;_r.m=2; }
   void BIT7d (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.d&0x80)?0:0x80;_r.m=2; }
   void BIT7e (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.e&0x80)?0:0x80;_r.m=2; }
   void BIT7h (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.h&0x80)?0:0x80;_r.m=2; }
   void BIT7l (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.l&0x80)?0:0x80;_r.m=2; }
   void BIT7a (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(_r.a&0x80)?0:0x80;_r.m=2; }
   void BIT7m (void) {_r.f&=0x1F;_r.f|=0x20;_r.f=(mmu.rb((_r.h<<8)+_r.l)&0x80)?0:0x80;_r.m=3; }

   void RES7b (void) {_r.b&=0x7F;_r.m=2; }
   void RES7c (void) {_r.c&=0x7F;_r.m=2; }
   void RES7d (void) {_r.d&=0x7F;_r.m=2; }
   void RES7e (void) {_r.e&=0x7F;_r.m=2; }
   void RES7h (void) {_r.h&=0x7F;_r.m=2; }
   void RES7l (void) {_r.l&=0x7F;_r.m=2; }
   void RES7a (void) {_r.a&=0x7F;_r.m=2; }
   void RES7m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i&=0x7F; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void SET7b (void) {_r.b|=0x80;_r.m=2; }
   void SET7c (void) {_r.b|=0x80;_r.m=2; }
   void SET7d (void) {_r.b|=0x80;_r.m=2; }
   void SET7e (void) {_r.b|=0x80;_r.m=2; }
   void SET7h (void) {_r.b|=0x80;_r.m=2; }
   void SET7l (void) {_r.b|=0x80;_r.m=2; }
   void SET7a (void) {_r.b|=0x80;_r.m=2; }
   void SET7m (void) { int i=mmu.rb((_r.h<<8)+_r.l); i|=0x80; mmu.wb((_r.h<<8)+_r.l,i);_r.m=4; }

   void RLA (void) { int ci=_r.f&0x10?1:0; int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)+ci;_r.a&=255;_r.f=(_r.f&0xEF)+co;_r.m=1; }
   void RLCA (void) { int ci=_r.a&0x80?1:0; int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)+ci;_r.a&=255;_r.f=(_r.f&0xEF)+co;_r.m=1; }
   void RRA (void) { int ci=_r.f&0x10?0x80:0; int co=_r.a&1?0x10:0;_r.a=(_r.a>>1)+ci;_r.a&=255;_r.f=(_r.f&0xEF)+co;_r.m=1; }
   void RRCA (void) { int ci=_r.a&1?0x80:0; int co=_r.a&1?0x10:0;_r.a=(_r.a>>1)+ci;_r.a&=255;_r.f=(_r.f&0xEF)+co;_r.m=1; }

   void RLr_b (void) { int ci=_r.f&0x10?1:0; int co=_r.b&0x80?0x10:0;_r.b=(_r.b<<1)+ci;_r.b&=255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_c (void) { int ci=_r.f&0x10?1:0; int co=_r.c&0x80?0x10:0;_r.c=(_r.c<<1)+ci;_r.c&=255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_d (void) { int ci=_r.f&0x10?1:0; int co=_r.d&0x80?0x10:0;_r.d=(_r.d<<1)+ci;_r.d&=255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_e (void) { int ci=_r.f&0x10?1:0; int co=_r.e&0x80?0x10:0;_r.e=(_r.e<<1)+ci;_r.e&=255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_h (void) { int ci=_r.f&0x10?1:0; int co=_r.h&0x80?0x10:0;_r.h=(_r.h<<1)+ci;_r.h&=255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_l (void) { int ci=_r.f&0x10?1:0; int co=_r.l&0x80?0x10:0;_r.l=(_r.l<<1)+ci;_r.l&=255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLr_a (void) { int ci=_r.f&0x10?1:0; int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)+ci;_r.a&=255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLHL (void) { int i=mmu.rb((_r.h<<8)+_r.l); int ci=_r.f&0x10?1:0; int co=i&0x80?0x10:0; i=(i<<1)+ci; i&=255;_r.f=(i)?0:0x80; mmu.wb((_r.h<<8)+_r.l,i);_r.f=(_r.f&0xEF)+co;_r.m=4; }

   void RLCr_b (void) { int ci=_r.b&0x80?1:0; int co=_r.b&0x80?0x10:0;_r.b=(_r.b<<1)+ci;_r.b&=255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_c (void) { int ci=_r.c&0x80?1:0; int co=_r.c&0x80?0x10:0;_r.c=(_r.c<<1)+ci;_r.c&=255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_d (void) { int ci=_r.d&0x80?1:0; int co=_r.d&0x80?0x10:0;_r.d=(_r.d<<1)+ci;_r.d&=255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_e (void) { int ci=_r.e&0x80?1:0; int co=_r.e&0x80?0x10:0;_r.e=(_r.e<<1)+ci;_r.e&=255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_h (void) { int ci=_r.h&0x80?1:0; int co=_r.h&0x80?0x10:0;_r.h=(_r.h<<1)+ci;_r.h&=255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_l (void) { int ci=_r.l&0x80?1:0; int co=_r.l&0x80?0x10:0;_r.l=(_r.l<<1)+ci;_r.l&=255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCr_a (void) { int ci=_r.a&0x80?1:0; int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)+ci;_r.a&=255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RLCHL (void) { int i=mmu.rb((_r.h<<8)+_r.l); int ci=i&0x80?1:0; int co=i&0x80?0x10:0; i=(i<<1)+ci; i&=255;_r.f=(i)?0:0x80; mmu.wb((_r.h<<8)+_r.l,i);_r.f=(_r.f&0xEF)+co;_r.m=4; }

   void RRr_b (void) { int ci=_r.f&0x10?0x80:0; int co=_r.b&1?0x10:0;_r.b=(_r.b>>1)+ci;_r.b&=255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_c (void) { int ci=_r.f&0x10?0x80:0; int co=_r.c&1?0x10:0;_r.c=(_r.c>>1)+ci;_r.c&=255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_d (void) { int ci=_r.f&0x10?0x80:0; int co=_r.d&1?0x10:0;_r.d=(_r.d>>1)+ci;_r.d&=255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_e (void) { int ci=_r.f&0x10?0x80:0; int co=_r.e&1?0x10:0;_r.e=(_r.e>>1)+ci;_r.e&=255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_h (void) { int ci=_r.f&0x10?0x80:0; int co=_r.h&1?0x10:0;_r.h=(_r.h>>1)+ci;_r.h&=255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_l (void) { int ci=_r.f&0x10?0x80:0; int co=_r.l&1?0x10:0;_r.l=(_r.l>>1)+ci;_r.l&=255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRr_a (void) { int ci=_r.f&0x10?0x80:0; int co=_r.a&1?0x10:0;_r.a=(_r.a>>1)+ci;_r.a&=255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRHL (void) { int i=mmu.rb((_r.h<<8)+_r.l); int ci=_r.f&0x10?0x80:0; int co=i&1?0x10:0; i=(i>>1)+ci; i&=255; mmu.wb((_r.h<<8)+_r.l,i);_r.f=(i)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=4; }

   void RRCr_b (void) { int ci=_r.b&1?0x80:0; int co=_r.b&1?0x10:0;_r.b=(_r.b>>1)+ci;_r.b&=255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_c (void) { int ci=_r.c&1?0x80:0; int co=_r.c&1?0x10:0;_r.c=(_r.c>>1)+ci;_r.c&=255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_d (void) { int ci=_r.d&1?0x80:0; int co=_r.d&1?0x10:0;_r.d=(_r.d>>1)+ci;_r.d&=255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_e (void) { int ci=_r.e&1?0x80:0; int co=_r.e&1?0x10:0;_r.e=(_r.e>>1)+ci;_r.e&=255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_h (void) { int ci=_r.h&1?0x80:0; int co=_r.h&1?0x10:0;_r.h=(_r.h>>1)+ci;_r.h&=255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_l (void) { int ci=_r.l&1?0x80:0; int co=_r.l&1?0x10:0;_r.l=(_r.l>>1)+ci;_r.l&=255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCr_a (void) { int ci=_r.a&1?0x80:0; int co=_r.a&1?0x10:0;_r.a=(_r.a>>1)+ci;_r.a&=255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void RRCHL (void) { int i=mmu.rb((_r.h<<8)+_r.l); int ci=i&1?0x80:0; int co=i&1?0x10:0; i=(i>>1)+ci; i&=255; mmu.wb((_r.h<<8)+_r.l,i);_r.f=(i)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=4; }

   void SLAr_b (void) { int co=_r.b&0x80?0x10:0;_r.b=(_r.b<<1)&255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_c (void) { int co=_r.c&0x80?0x10:0;_r.c=(_r.c<<1)&255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_d (void) { int co=_r.d&0x80?0x10:0;_r.d=(_r.d<<1)&255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_e (void) { int co=_r.e&0x80?0x10:0;_r.e=(_r.e<<1)&255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_h (void) { int co=_r.h&0x80?0x10:0;_r.h=(_r.h<<1)&255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_l (void) { int co=_r.l&0x80?0x10:0;_r.l=(_r.l<<1)&255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLAr_a (void) { int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)&255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }

   void SLLr_b (void) { int co=_r.b&0x80?0x10:0;_r.b=(_r.b<<1)&255+1;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_c (void) { int co=_r.c&0x80?0x10:0;_r.c=(_r.c<<1)&255+1;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_d (void) { int co=_r.d&0x80?0x10:0;_r.d=(_r.d<<1)&255+1;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_e (void) { int co=_r.e&0x80?0x10:0;_r.e=(_r.e<<1)&255+1;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_h (void) { int co=_r.h&0x80?0x10:0;_r.h=(_r.h<<1)&255+1;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_l (void) { int co=_r.l&0x80?0x10:0;_r.l=(_r.l<<1)&255+1;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SLLr_a (void) { int co=_r.a&0x80?0x10:0;_r.a=(_r.a<<1)&255+1;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }

   void SRAr_b (void) { int ci=_r.b&0x80; int co=_r.b&1?0x10:0;_r.b=((_r.b>>1)+ci)&255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_c (void) { int ci=_r.c&0x80; int co=_r.c&1?0x10:0;_r.c=((_r.c>>1)+ci)&255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_d (void) { int ci=_r.d&0x80; int co=_r.d&1?0x10:0;_r.d=((_r.d>>1)+ci)&255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_e (void) { int ci=_r.e&0x80; int co=_r.e&1?0x10:0;_r.e=((_r.e>>1)+ci)&255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_h (void) { int ci=_r.h&0x80; int co=_r.h&1?0x10:0;_r.h=((_r.h>>1)+ci)&255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_l (void) { int ci=_r.l&0x80; int co=_r.l&1?0x10:0;_r.l=((_r.l>>1)+ci)&255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRAr_a (void) { int ci=_r.a&0x80; int co=_r.a&1?0x10:0;_r.a=((_r.a>>1)+ci)&255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }

   void SRLr_b (void) { int co=_r.b&1?0x10:0;_r.b=(_r.b>>1)&255;_r.f=(_r.b)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_c (void) { int co=_r.c&1?0x10:0;_r.c=(_r.c>>1)&255;_r.f=(_r.c)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_d (void) { int co=_r.d&1?0x10:0;_r.d=(_r.d>>1)&255;_r.f=(_r.d)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_e (void) { int co=_r.e&1?0x10:0;_r.e=(_r.e>>1)&255;_r.f=(_r.e)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_h (void) { int co=_r.h&1?0x10:0;_r.h=(_r.h>>1)&255;_r.f=(_r.h)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_l (void) { int co=_r.l&1?0x10:0;_r.l=(_r.l>>1)&255;_r.f=(_r.l)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }
   void SRLr_a (void) { int co=_r.a&1?0x10:0;_r.a=(_r.a>>1)&255;_r.f=(_r.a)?0:0x80;_r.f=(_r.f&0xEF)+co;_r.m=2; }

   void CPL (void) {_r.a ^= 255;_r.f=_r.a?0:0x80;_r.m=1; }
   void NEG (void) {_r.a=0-_r.a;_r.f=(_r.a<0)?0x10:0;_r.a&=255; if(!_r.a)_r.f|=0x80;_r.m=2; }

   void CCF (void) { int ci=_r.f&0x10?0:0x10;_r.f=(_r.f&0xEF)+ci;_r.m=1; }
   void SCF (void) {_r.f|=0x10;_r.m=1; }

       /*--- Stack ---*/
   void PUSHBC (void) {_r.sp--; mmu.wb(_r.sp,_r.b);_r.sp--; mmu.wb(_r.sp,_r.c);_r.m=3; }
   void PUSHDE (void) {_r.sp--; mmu.wb(_r.sp,_r.d);_r.sp--; mmu.wb(_r.sp,_r.e);_r.m=3; }
   void PUSHHL (void) {_r.sp--; mmu.wb(_r.sp,_r.h);_r.sp--; mmu.wb(_r.sp,_r.l);_r.m=3; }
   void PUSHAF (void) {_r.sp--; mmu.wb(_r.sp,_r.a);_r.sp--; mmu.wb(_r.sp,_r.f);_r.m=3; }

   void POPBC (void) {_r.c=mmu.rb(_r.sp);_r.sp++;_r.b=mmu.rb(_r.sp);_r.sp++;_r.m=3; }
   void POPDE (void) {_r.e=mmu.rb(_r.sp);_r.sp++;_r.d=mmu.rb(_r.sp);_r.sp++;_r.m=3; }
   void POPHL (void) {_r.l=mmu.rb(_r.sp);_r.sp++;_r.h=mmu.rb(_r.sp);_r.sp++;_r.m=3; }
   void POPAF (void) {_r.f=mmu.rb(_r.sp);_r.sp++;_r.a=mmu.rb(_r.sp);_r.sp++;_r.m=3; }

       /*--- Jump ---*/
   void JPnn (void) {_r.pc = mmu.rw(_r.pc);_r.m=3; }
   void JPHL (void) {_r.pc=(_r.h<<8)+_r.l;_r.m=1; }
   void JPNZnn (void) {_r.m=3; if((_r.f&0x80)==0x00) {_r.pc=mmu.rw(_r.pc);_r.m++; } else_r.pc+=2; }
   void JPZnn (void)  {_r.m=3; if((_r.f&0x80)==0x80) {_r.pc=mmu.rw(_r.pc);_r.m++; } else_r.pc+=2; }
   void JPNCnn (void) {_r.m=3; if((_r.f&0x10)==0x00) {_r.pc=mmu.rw(_r.pc);_r.m++; } else_r.pc+=2; }
   void JPCnn (void)  {_r.m=3; if((_r.f&0x10)==0x10) {_r.pc=mmu.rw(_r.pc);_r.m++; } else_r.pc+=2; }

   void JRn (void) { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2;_r.pc+=i;_r.m++; }
   void JRNZn (void) { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2; if((_r.f&0x80)==0x00) {_r.pc+=i;_r.m++; } }
   void JRZn (void)  { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2; if((_r.f&0x80)==0x80) {_r.pc+=i;_r.m++; } }
   void JRNCn (void) { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2; if((_r.f&0x10)==0x00) {_r.pc+=i;_r.m++; } }
   void JRCn (void)  { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2; if((_r.f&0x10)==0x10) {_r.pc+=i;_r.m++; } }

   void DJNZn (void) { int i=mmu.rb(_r.pc); if(i>127) i=-((~i+1)&255);_r.pc++;_r.m=2;_r.b--; if(_r.b) {_r.pc+=i;_r.m++; } }

   void CALLnn (void) {_r.sp-=2; mmu.ww(_r.sp,_r.pc+2);_r.pc=mmu.rw(_r.pc);_r.m=5; }
   void CALLNZnn (void) {_r.m=3; if((_r.f&0x80)==0x00) {_r.sp-=2; mmu.ww(_r.sp,_r.pc+2);_r.pc=mmu.rw(_r.pc);_r.m+=2; } else_r.pc+=2; }
   void CALLZnn (void) {_r.m=3; if((_r.f&0x80)==0x80) {_r.sp-=2; mmu.ww(_r.sp,_r.pc+2);_r.pc=mmu.rw(_r.pc);_r.m+=2; } else_r.pc+=2; }
   void CALLNCnn (void) {_r.m=3; if((_r.f&0x10)==0x00) {_r.sp-=2; mmu.ww(_r.sp,_r.pc+2);_r.pc=mmu.rw(_r.pc);_r.m+=2; } else_r.pc+=2; }
   void CALLCnn (void) {_r.m=3; if((_r.f&0x10)==0x10) {_r.sp-=2; mmu.ww(_r.sp,_r.pc+2);_r.pc=mmu.rw(_r.pc);_r.m+=2; } else_r.pc+=2; }

   void RET (void) {_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m=3; }
   void RETI (void) {_r.ime=1;_ops.rrs();_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m=3; }
   void RETNZ (void) {_r.m=1; if((_r.f&0x80)==0x00) {_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m+=2; } }
   void RETZ (void) {_r.m=1; if((_r.f&0x80)==0x80) {_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m+=2; } }
   void RETNC (void) {_r.m=1; if((_r.f&0x10)==0x00) {_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m+=2; } }
   void RETC (void) {_r.m=1; if((_r.f&0x10)==0x10) {_r.pc=mmu.rw(_r.sp);_r.sp+=2;_r.m+=2; } }

   void RST00 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x00;_r.m=3; }
   void RST08 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x08;_r.m=3; }
   void RST10 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x10;_r.m=3; }
   void RST18 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x18;_r.m=3; }
   void RST20 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x20;_r.m=3; }
   void RST28 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x28;_r.m=3; }
   void RST30 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x30;_r.m=3; }
   void RST38 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x38;_r.m=3; }
   void RST40 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x40;_r.m=3; }
   void RST48 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x48;_r.m=3; }
   void RST50 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x50;_r.m=3; }
   void RST58 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x58;_r.m=3; }
   void RST60 (void) {_ops.rsv();_r.sp-=2; mmu.ww(_r.sp,_r.pc);_r.pc=0x60;_r.m=3; }

   void NOP (void) {_r.m=1; }
   void HALT (void) {_halt=1;_r.m=1; }

   void DI (void) {_r.ime=0;_r.m=1; }
   void EI (void) {_r.ime=1;_r.m=1; }

   private: 
	 
   };
