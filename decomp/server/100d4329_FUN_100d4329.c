
undefined4 __cdecl FUN_100d4329(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_101351c0 <= param_1) {
LAB_100d43aa:
    pDVar3 = FUN_100d3f8f();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_100d43aa;
  FUN_100d42a8(param_1);
  if ((*(byte *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100d41bf(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_100d439f;
    pDVar3 = FUN_100d3f98();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_100d3f8f();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_100d439f:
  FUN_100d4307(param_1);
  return uVar5;
}

