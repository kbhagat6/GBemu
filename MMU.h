#include <iostream>


class MMU{
public:
  MMU(void);
  ~MMU(void);

 // int _bios[];
  int sizeR,sizeW,sizeE, sizeZ;
  int _inbios;  //flag indicating BIOS is mapped in
  int _rom[];    //ROM0+1
  int _wram[sizeW];    // Working RAM
  int _eram[sizeE];   //External Ram
  int _zram[sizeZ];	//Z ram

private:


}
