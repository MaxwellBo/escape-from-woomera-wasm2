
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __thiscall FUN_10061590(void *this,void *param_1,float *param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  undefined3 extraout_var_00;
  int *piVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if (*(int *)((int)this + 0x2fc) != 0) {
    puVar1 = (uint *)((int)this + 0x168);
    bVar2 = FUN_10019450(puVar1);
    if ((CONCAT31(extraout_var,bVar2) != 0) && (*(int *)(*(int *)((int)this + 0x2fc) + 0x328) == 1))
    {
      iVar3 = FUN_10019460(puVar1);
      iVar3 = *(int *)(iVar3 + 4);
      iVar4 = FUN_10019460(puVar1);
      iVar4 = *(int *)(iVar4 + 4);
      local_20 = (*(float *)(iVar4 + 0xd4) + *(float *)(iVar3 + 200)) * _DAT_100dd614;
      local_1c = (*(float *)(iVar4 + 0xd8) + *(float *)(iVar3 + 0xcc)) * _DAT_100dd614;
      fVar7 = ((float10)*(float *)(iVar4 + 0xd0) + (float10)*(float *)(iVar3 + 0xc4)) *
              (float10)_DAT_100dd614 - (float10)*param_2;
      local_2c = local_20 - param_2[1];
      local_28 = (float)((float10)local_1c - (float10)param_2[2]);
      fVar8 = SQRT(fVar7 * fVar7 +
                   (float10)local_2c * (float10)local_2c +
                   ((float10)local_1c - (float10)param_2[2]) * (float10)local_28);
      if (fVar8 == (float10)_DAT_100dd5f8) {
        FUN_10001d60(param_1,0,0,0x3f800000);
        return param_1;
      }
      fVar8 = (float10)_DAT_100dd618 / fVar8;
      fVar9 = (float10)local_28 * fVar8;
      fVar10 = (float10)local_2c * fVar8;
      goto LAB_10061797;
    }
  }
  puVar1 = (uint *)((int)this + 0x160);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    FUN_10003850(param_1,(undefined4 *)(DAT_10122044 + 0x28));
    return param_1;
  }
  piVar5 = (int *)FUN_10019460(puVar1);
  pfVar6 = (float *)(**(code **)(*piVar5 + 0x104))(local_c,param_2);
  iVar3 = FUN_10019460(puVar1);
  iVar3 = *(int *)(iVar3 + 4);
  local_20 = pfVar6[1] - *(float *)(iVar3 + 0xc);
  local_1c = pfVar6[2] - *(float *)(iVar3 + 0x10);
  fStack_14 = local_20 + *(float *)((int)this + 0x2ac);
  fStack_10 = local_1c + *(float *)((int)this + 0x2b0);
  fStack_30 = ((*pfVar6 - *(float *)(iVar3 + 8)) + *(float *)((int)this + 0x2a8)) - *param_2;
  local_2c = fStack_14 - param_2[1];
  local_28 = fStack_10 - param_2[2];
  fVar8 = FUN_1000a9b0(&fStack_30);
  if (fVar8 == (float10)_DAT_100dd5f8) {
    FUN_10001d60(param_1,0,0,0x3f800000);
    return param_1;
  }
  fVar8 = (float10)_DAT_100dd618 / fVar8;
  fVar9 = (float10)local_28 * fVar8;
  fVar10 = (float10)local_2c * fVar8;
  fVar7 = (float10)fStack_30;
LAB_10061797:
  FUN_10001d60(param_1,(float)(fVar7 * fVar8),(float)fVar10,(float)fVar9);
  return param_1;
}

