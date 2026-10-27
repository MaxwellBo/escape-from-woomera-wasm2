
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10013850(int param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_10019460((uint *)(param_1 + 0x160));
  if (((*(float *)(*(int *)(iVar1 + 4) + 0x160) <= _DAT_10126a7c) && (param_3 <= _DAT_100ddac4)) &&
     ((float)_DAT_100df298 <= param_2)) {
    return 1;
  }
  return 0;
}

