
DWORD __thiscall FUN_100db3b7(int param_1,LONG param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  
  DVar2 = 0;
  if (param_3 != 0) {
    if (param_3 == 1) {
      DVar2 = 1;
    }
    else {
      if (param_3 != 2) {
        return 0xffffffff;
      }
      DVar2 = 2;
    }
  }
  iVar1 = FUN_100db3fb(param_1);
  if ((iVar1 != -1) &&
     (DVar2 = FUN_100d2f81(*(uint *)(param_1 + 0x4c),param_2,DVar2), DVar2 != 0xffffffff)) {
    return DVar2;
  }
  return 0xffffffff;
}

