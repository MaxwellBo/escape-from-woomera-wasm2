
undefined4 __cdecl FUN_100cfb2c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100d41bf(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100d41bf(2);
      iVar2 = FUN_100d41bf(1);
      if (iVar2 == iVar1) goto LAB_100cfb7a;
    }
    hObject = (HANDLE)FUN_100d41bf(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_100cfb7c;
    }
  }
LAB_100cfb7a:
  DVar4 = 0;
LAB_100cfb7c:
  FUN_100d4140(param_1);
  *(undefined1 *)((&DAT_101350c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_100d3f1c(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

