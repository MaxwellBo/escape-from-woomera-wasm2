
undefined4 __cdecl FUN_10053f4f(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_100bd160 <= param_1) {
LAB_10053fd0:
    pDVar3 = FUN_1004ddc4();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10053fd0;
  FUN_10053ece(param_1);
  if ((*(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_10053e8c(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10053fc5;
    pDVar3 = FUN_1004ddcd();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1004ddc4();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10053fc5:
  FUN_10053f2d(param_1);
  return uVar5;
}

