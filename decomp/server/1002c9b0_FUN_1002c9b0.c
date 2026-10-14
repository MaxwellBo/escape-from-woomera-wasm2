
void __fastcall FUN_1002c9b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x194);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x114);
    uVar4 = (*DAT_10121f24)(iVar2);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = uVar4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = uVar3;
    *(int *)(*(int *)(param_1 + 4) + 0x194) = iVar2;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0xc;
    return;
  }
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x114) = 0;
  return;
}

