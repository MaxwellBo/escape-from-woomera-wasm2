
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100771a0(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_8;
  float fStack_4;
  
  iVar1 = param_2[1];
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    if (*(int *)(iVar1 + 0x19c) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar1 + 0x19c) + 0x80;
    }
    if (iVar4 == *(int *)(param_1 + 4)) {
      fVar3 = ABS(*(float *)(*(int *)(param_1 + 4) + 0x1f8));
      if (_DAT_100ddaf8 < fVar3) {
        fVar3 = _DAT_100ddaf8;
      }
      if (*(float *)(iVar1 + 0x28) != _DAT_100dd5f8) {
        return;
      }
      *(float *)(iVar1 + 0x28) = fVar3 + *(float *)(iVar1 + 0x28);
      return;
    }
  }
  iVar4 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar4 + 8);
  fStack_8 = *(float *)(iVar1 + 0xc) - *(float *)(iVar4 + 0xc);
  fStack_4 = *(float *)(iVar1 + 0x10) - *(float *)(iVar4 + 0x10);
  fVar2 = SQRT(fStack_8 * fStack_8 + fVar3 * fVar3 + fStack_4 * fStack_4);
  if (fVar2 == _DAT_100dd5f8) {
    fStack_8 = 0.0;
    fStack_4 = 1.0;
    fVar3 = _DAT_100dd5f8;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    fVar3 = fVar3 * fVar2;
    fStack_8 = fVar2 * fStack_8;
    fStack_4 = fStack_4 * fVar2;
  }
  fVar2 = *(float *)(iVar4 + 0x1e0);
  *(float *)(iVar1 + 0x20) = fVar3 * fVar2;
  *(float *)(iVar1 + 0x24) = fStack_8 * fVar2;
  *(float *)(iVar1 + 0x28) = fStack_4 * fVar2;
  (*DAT_10121efc)(2,s_TRAIN__s___Blocked_by__s__dmg____1011409c,
                  *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                  *(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98),
                  (double)*(float *)(*(int *)(param_1 + 4) + 0x1e0));
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x1e0) <= _DAT_100dd5f8) {
    return;
  }
  (**(code **)(*param_2 + 0x60))(iVar1,iVar1,*(float *)(iVar1 + 0x1e0),1);
  return;
}

