
undefined4 __fastcall FUN_10061ec0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x1a0) & 0x200) != 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x198);
  if ((iVar1 != 0) && (iVar1 = (*DAT_10121f20)(iVar1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

