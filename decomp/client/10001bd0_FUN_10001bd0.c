
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10001bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  if ((iVar1 != 0) && (*(float *)(param_1[1] + 0x16c) == _DAT_10059a18)) {
    return 1;
  }
  return 0;
}

