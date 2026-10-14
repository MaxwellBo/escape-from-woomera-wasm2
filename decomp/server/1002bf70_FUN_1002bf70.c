
void __fastcall FUN_1002bf70(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) & 0xffffff7f;
  if ((int *)param_1[0x2e] != (int *)0x0) {
    FUN_1002cd00((int *)param_1[0x2e]);
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    FUN_1002cd00((int *)param_1[0x2f]);
  }
  *(undefined4 *)(param_1[1] + 0x1e4) = *DAT_10122044;
  iVar1 = param_1[1];
  uVar2 = *(uint *)(iVar1 + 0x1a0);
  if ((uVar2 & 0x80) != 0) {
    *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) & 0xf | 0x40;
    (**(code **)(*param_1 + 8))(0);
    return;
  }
  if ((uVar2 & 0x100) != 0) {
    *(uint *)(iVar1 + 0x148) = (uint)((byte)*(undefined4 *)(iVar1 + 0x148) & 0xf | 0x80);
    (**(code **)(*param_1 + 8))(0);
    return;
  }
  if ((uVar2 & 0x200) != 0) {
    *(uint *)(iVar1 + 0x148) = *(uint *)(iVar1 + 0x148) & 0xf | 0x20;
  }
  (**(code **)(*param_1 + 8))(0);
  return;
}

