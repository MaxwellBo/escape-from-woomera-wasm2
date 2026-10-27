
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_100dbe73(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == _DAT_100fa5b4) || (param_2 == _DAT_100fa5b8)) {
    if (param_1[0xc] < 0) {
      FUN_100db550((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
    if ((param_1[0x13] == -1) || (iVar1 = (**(code **)(*param_1 + 4))(), iVar1 == -1)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_100d8cf1(param_1[0x13],param_2);
    }
    if (param_1[0xc] < 0) {
      FUN_100db55b((LPCRITICAL_SECTION)(param_1 + 0xd));
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

