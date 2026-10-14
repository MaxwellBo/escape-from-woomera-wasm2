
void __thiscall FUN_1008da90(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    FUN_1008e5f0((int)param_1);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      FUN_1009a890(param_1,param_2);
      return;
    }
    uVar2 = *(uint *)(*(int *)((int)param_1 + 4) + 0x114) & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)((int)param_1 + 4) + 0x114) = uVar2;
    return;
  }
  uVar2 = *(uint *)(*(int *)((int)param_1 + 4) + 0x114) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(uint *)(*(int *)((int)param_1 + 4) + 0x114) = uVar2 + 4;
  return;
}

