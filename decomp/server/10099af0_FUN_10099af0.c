
void __fastcall FUN_10099af0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c8);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1d0);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if ((*(byte *)(iVar1 + 0x1a0) & 2) != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 5;
  }
  return;
}

