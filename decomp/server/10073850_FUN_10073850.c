
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073850(int param_1,int param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float local_8;
  float local_4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_2 + 4);
    fVar5 = *(float *)(iVar4 + 8) - *(float *)(iVar3 + 8);
    local_8 = *(float *)(iVar4 + 0xc) - *(float *)(iVar3 + 0xc);
    local_4 = *(float *)(iVar4 + 0x10) - *(float *)(iVar3 + 0x10);
    fVar1 = SQRT(local_8 * local_8 + fVar5 * fVar5 + local_4 * local_4);
    if (fVar1 == _DAT_100dd5f8) {
      local_8 = 0.0;
      local_4 = 1.0;
      fVar5 = _DAT_100dd5f8;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fVar5 = fVar5 * fVar1;
      local_8 = fVar1 * local_8;
      local_4 = local_4 * fVar1;
    }
    fVar1 = *(float *)(iVar4 + 0xc);
    fVar2 = *(float *)(iVar4 + 0x10);
    *param_3 = fVar5 * param_4 + *(float *)(iVar4 + 8);
    param_3[1] = local_8 * param_4 + fVar1;
    param_3[2] = local_4 * param_4 + fVar2;
  }
  return;
}

