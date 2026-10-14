
void __thiscall FUN_100285d0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x124);
    FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x118);
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  return;
}

