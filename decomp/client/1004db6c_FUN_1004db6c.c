
undefined4 __cdecl FUN_1004db6c(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_10053e8c(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10053e8c(2);
      iVar2 = FUN_10053e8c(1);
      if (iVar2 == iVar1) goto LAB_1004dbba;
    }
    hObject = (HANDLE)FUN_10053e8c(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1004dbbc;
    }
  }
LAB_1004dbba:
  DVar4 = 0;
LAB_1004dbbc:
  FUN_10053e0d(param_1);
  *(undefined1 *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1004dd51(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

