
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100a67e0(void *this,int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_44 [4];
  float local_40;
  float fStack_2c;
  int iStack_c;
  
  iVar7 = *(int *)((int)this + 4);
  if (*(float *)(iVar7 + 0x164) != _DAT_100dd5f8) {
    iVar10 = param_1[1];
    iVar3 = *(int *)(param_2 + 4);
    fVar4 = *(float *)(iVar10 + 8) - *(float *)(iVar3 + 8);
    fVar5 = *(float *)(iVar10 + 0xc) - *(float *)(iVar3 + 0xc);
    fVar1 = *(float *)(iVar10 + 0x10) - *(float *)(iVar3 + 0x10);
    if (*(float *)(iVar7 + 0x164) < SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar1 * fVar1)) {
      return 0;
    }
  }
  if (*(float *)(iVar7 + 0x1b0) < _DAT_100ddae8) {
    fVar4 = *(float *)(iVar7 + 0x160);
    FUN_100af200(param_1[1] + 0x50);
    fVar1 = *(float *)(*(int *)(param_2 + 4) + 8) - *(float *)(param_1[1] + 8);
    local_40 = *(float *)(*(int *)(param_2 + 4) + 0xc) - *(float *)(param_1[1] + 0xc);
    fVar2 = SQRT(fVar1 * fVar1 + local_40 * local_40);
    fVar5 = _DAT_100dd5f8;
    fVar6 = _DAT_100dd5f8;
    if (fVar2 != _DAT_100dd5f8) {
      fVar2 = _DAT_100dd618 / fVar2;
      fVar5 = fVar1 * fVar2;
      fVar6 = local_40 * fVar2;
    }
    fVar1 = *(float *)(DAT_10122044 + 0x28);
    fVar2 = *(float *)(DAT_10122044 + 0x2c);
    if (*(float *)(*(int *)((int)this + 4) + 0x1b0) == _DAT_100df2b0) {
      iVar7 = (**(code **)(*param_1 + 0x74))();
      if (iVar7 == 0) {
        return 0;
      }
      fVar4 = *(float *)(iVar7 + 0x1c0);
    }
    if (fVar1 * fVar5 + fVar6 * fVar2 <= fVar4) {
      return 0;
    }
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0) {
    puVar9 = local_44;
    uVar12 = *(undefined4 *)(param_1[1] + 0x208);
    uVar11 = 1;
    iVar7 = *(int *)(param_2 + 4) + 8;
    iVar10 = 1;
    uVar8 = (**(code **)(*param_1 + 0xfc))();
    FUN_100afc20(uVar8,puVar9,iVar7,iVar10,uVar11,uVar12);
    if ((fStack_2c < (float)_DAT_100dd628) && (iStack_c != *(int *)(*(int *)(param_2 + 4) + 0x208)))
    {
      return 0;
    }
  }
  return 1;
}

