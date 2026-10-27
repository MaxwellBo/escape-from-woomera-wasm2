
uint __cdecl FUN_100d4201(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  DWORD *pDVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_100d3f1c(DVar1);
  }
  else {
    if (DVar1 == 2) {
      bVar4 = bVar4 | 0x40;
    }
    else if (DVar1 == 3) {
      bVar4 = bVar4 | 8;
    }
    uVar2 = FUN_100d3fa1();
    if (uVar2 != 0xffffffff) {
      FUN_100d40c4(uVar2,param_1);
      *(byte *)((&DAT_101350c0)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = bVar4 | 1;
      FUN_100d4307(uVar2);
      return uVar2;
    }
    pDVar3 = FUN_100d3f8f();
    *pDVar3 = 0x18;
    pDVar3 = FUN_100d3f98();
    *pDVar3 = 0;
  }
  return 0xffffffff;
}

