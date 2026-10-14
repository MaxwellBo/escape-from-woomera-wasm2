
void __fastcall FUN_1002e570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 != 0) {
    uVar2 = (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + iVar1);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
  }
  FUN_10036c90(*(undefined4 *)(param_1 + 0xd0));
  return;
}

