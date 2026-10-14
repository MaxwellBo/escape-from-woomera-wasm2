
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a3d50(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_2 + 4);
  uVar5 = *(uint *)(iVar4 + 0x1a4);
  if ((uVar5 & 0x20) != 0) {
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) + _DAT_100dd618;
    if ((uVar5 & 0x200) != 0) {
      *(uint *)(iVar4 + 0x1a4) = uVar5 & 0xfffffdff;
    }
    iVar6 = param_1[1];
    fVar1 = *(float *)(iVar6 + 0x1f8);
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    *(float *)(iVar4 + 0x20) = fVar1 * *(float *)(iVar6 + 0x44);
    *(float *)(iVar4 + 0x24) = fVar1 * fVar2;
    *(float *)(iVar4 + 0x28) = fVar1 * fVar3;
    *(float *)(iVar4 + 0x28) = (float)param_1[0x4b] + *(float *)(iVar4 + 0x28);
    (**(code **)(*param_1 + 8))(0);
  }
  return;
}

