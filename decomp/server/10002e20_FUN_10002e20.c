
undefined4 __fastcall FUN_10002e20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(float *)(iVar1 + 0x20) == DAT_10121dd8) && (*(float *)(iVar1 + 0x24) == DAT_10121ddc)) &&
     (*(float *)(iVar1 + 0x28) == DAT_10121de0)) {
    return 0;
  }
  return 1;
}

