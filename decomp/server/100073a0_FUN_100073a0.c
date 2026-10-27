
void __fastcall FUN_100073a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    *(undefined4 *)(iVar1 + 0x1d4) = *(undefined4 *)(iVar1 + 0x1d0);
    return;
  }
  *(undefined4 *)(iVar1 + 0x1d4) = *(undefined4 *)(iVar1 + 0x1c8);
  return;
}

