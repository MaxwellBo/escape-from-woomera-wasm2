
undefined4 __thiscall FUN_1000d720(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10009020();
  if (iVar1 != 0) {
    (*DAT_1007ef88)(1,DAT_1007f7fc,0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
    (*DAT_1007ef90)(*(undefined4 *)(param_1 + 0xe4));
    (*DAT_1007ef8c)();
    return 1;
  }
  return 0;
}

