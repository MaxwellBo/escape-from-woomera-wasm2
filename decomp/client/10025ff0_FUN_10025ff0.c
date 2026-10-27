
undefined4 __fastcall FUN_10025ff0(int param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_100a5054)(s_GAMETITLE_100795ac);
  *(int *)(param_1 + 0xdc) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = DAT_100a3a64;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    }
  }
  return 1;
}

