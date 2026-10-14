
undefined4 __fastcall FUN_100b4060(int *param_1)

{
  int iVar1;
  
  if (param_1[0x43] < 1) {
    iVar1 = (**(code **)(*param_1 + 0x150))();
    if ((*(int *)(param_1[0x37] + 0x534 + iVar1 * 4) < 1) &&
       ((&DAT_10131e24)[param_1[0x39] * 0xb] != -1)) {
      return 0;
    }
  }
  return 1;
}

