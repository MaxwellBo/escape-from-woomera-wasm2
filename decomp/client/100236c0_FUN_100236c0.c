
uint __cdecl FUN_100236c0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  uVar2 = (uint)((DAT_100a9818 & 3) != 0);
  if ((DAT_100a9868 & 3) != 0) {
    uVar2 = uVar2 | 4;
  }
  if ((DAT_100a9900 & 3) != 0) {
    uVar2 = uVar2 | 2;
  }
  if ((DAT_100a98a0 & 3) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((DAT_100a9950 & 3) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  if ((DAT_100a9838 & 3) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  if (DAT_100a9990 != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if ((DAT_100a98b0 & 3) != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if ((DAT_100a98c0 & 3) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((DAT_100a98e0 & 3) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  if ((DAT_100a9930 & 3) != 0) {
    uVar2 = uVar2 | 0x400;
  }
  if ((DAT_100a97d0 & 3) != 0) {
    uVar2 = uVar2 | 0x800;
  }
  if ((DAT_100a9890 & 3) != 0) {
    uVar2 = uVar2 | 0x2000;
  }
  if ((DAT_100a9970 & 3) != 0) {
    uVar2 = uVar2 | 0x4000;
  }
  if ((DAT_100a98d0 & 3) != 0) {
    uVar2 = uVar2 | 0x8000;
  }
  bVar1 = FUN_100236b0();
  if ((CONCAT31(extraout_var,bVar1) != 0) || (DAT_100a4fe4 != 0)) {
    uVar2 = uVar2 | 0x8000;
  }
  if (param_1 != 0) {
    DAT_100a9818 = DAT_100a9818 & 0xfffffffd;
    DAT_100a9868 = DAT_100a9868 & 0xfffffffd;
    DAT_100a9900 = DAT_100a9900 & 0xfffffffd;
    DAT_100a98a0 = DAT_100a98a0 & 0xfffffffd;
    DAT_100a9950 = DAT_100a9950 & 0xfffffffd;
    DAT_100a9838 = DAT_100a9838 & 0xfffffffd;
    DAT_100a98b0 = DAT_100a98b0 & 0xfffffffd;
    DAT_100a98c0 = DAT_100a98c0 & 0xfffffffd;
    DAT_100a98e0 = DAT_100a98e0 & 0xfffffffd;
    DAT_100a9930 = DAT_100a9930 & 0xfffffffd;
    DAT_100a97d0 = DAT_100a97d0 & 0xfffffffd;
    DAT_100a9890 = DAT_100a9890 & 0xfffffffd;
    DAT_100a9970 = DAT_100a9970 & 0xfffffffd;
    DAT_100a98d0 = DAT_100a98d0 & 0xfffffffd;
  }
  return uVar2;
}

