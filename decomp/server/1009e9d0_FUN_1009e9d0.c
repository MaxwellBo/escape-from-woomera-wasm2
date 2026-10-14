
undefined4 __thiscall FUN_1009e9d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x160) < param_4) {
    *(undefined4 *)(iVar1 + 0x160) = 0x3f800000;
    return 1;
  }
  *(float *)(iVar1 + 0x160) = *(float *)(iVar1 + 0x160) - param_4;
  return 1;
}

