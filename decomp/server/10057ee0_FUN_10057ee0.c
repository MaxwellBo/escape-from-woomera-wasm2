
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10057ee0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (*(float *)(iVar2 + 0x160) == _DAT_100dd5f8) {
    *(uint *)(iVar2 + 0x118) = *(uint *)(iVar2 + 0x118) & 0xffffffb3;
    return;
  }
  if (*(int *)(iVar2 + 0x164) == 0x40000000) {
    uVar3 = *(uint *)(iVar2 + 0x118) | 4;
  }
  else {
    if (*(float *)(iVar2 + 0x164) == _DAT_100dd5f8) goto LAB_10057f2d;
    uVar3 = *(uint *)(iVar2 + 0x118) | 8;
  }
  *(uint *)(iVar2 + 0x118) = uVar3;
LAB_10057f2d:
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
    return;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x118);
  *puVar1 = *puVar1 | 0x40;
  return;
}

