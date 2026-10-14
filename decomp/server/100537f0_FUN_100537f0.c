
void __fastcall FUN_100537f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1cc);
  if ((iVar1 != 1) && (iVar1 != 3)) {
    if (iVar1 != 4) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42b40000;
      return;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x428c0000;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42480000;
  return;
}

