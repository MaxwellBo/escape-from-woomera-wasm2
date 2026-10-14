
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10012cf0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  
  piVar5 = param_2;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = param_2[1];
  if ((_DAT_100dd5f8 < *(float *)(iVar1 + 0x1e0)) && (*(float *)(iVar2 + 0x16c) != _DAT_100dd5f8)) {
    param_2 = (int *)(*(float *)(iVar1 + 0x1f8) * *(float *)(iVar1 + 0x1e0) * (float)_DAT_100dfb88);
    if ((float)param_2 < _DAT_100dd5f8) {
      param_2 = (int *)-(float)param_2;
    }
    (**(code **)(*piVar5 + 0x60))(iVar1,iVar1,param_2,1);
    pfVar6 = (float *)FUN_10010f30(&fStack_1c,*(int *)(param_1 + 4));
    fVar3 = *(float *)(iVar2 + 8) - *pfVar6;
    fStack_18 = *(float *)(iVar2 + 0xc) - pfVar6[1];
    fStack_14 = *(float *)(iVar2 + 0x10) - pfVar6[2];
    fVar4 = SQRT(fVar3 * fVar3 + fStack_18 * fStack_18 + fStack_14 * fStack_14);
    if (fVar4 == _DAT_100dd5f8) {
      fStack_18 = 0.0;
      fStack_14 = 1.0;
      fVar3 = _DAT_100dd5f8;
    }
    else {
      fVar4 = _DAT_100dd618 / fVar4;
      fVar3 = fVar3 * fVar4;
      fStack_18 = fStack_18 * fVar4;
      fStack_14 = fStack_14 * fVar4;
    }
    *(float *)(iVar2 + 0x20) = fVar3 * fStack_c;
    *(float *)(iVar2 + 0x24) = fStack_18 * fStack_c;
    *(float *)(iVar2 + 0x28) = fStack_14 * fStack_c;
  }
  return;
}

