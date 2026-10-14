
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10001b00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) == _DAT_1007f110) && (*(float *)(iVar1 + 0x24) == DAT_1007f114)) &&
     (*(float *)(iVar1 + 0x28) == DAT_1007f118)) {
    return 0;
  }
  return 1;
}

