
void __fastcall FUN_10020db0(int param_1)

{
  undefined4 uVar1;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar1 = (*DAT_100a5154)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0xc98) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0xc98) = 0;
  return;
}

