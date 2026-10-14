
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_10073a20(void *this,float *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar1 = param_2;
  local_1c = param_1[2];
  local_24 = *param_1;
  fVar7 = param_1[1];
  local_20 = fVar7;
  if (_DAT_100dd5f8 <= param_2) {
    if (_DAT_100dd5f8 < param_2) {
      do {
        iVar6 = param_3;
        iVar5 = FUN_10073950((int)this);
        iVar6 = FUN_10073820(iVar5,iVar6);
        if (iVar6 == 0) {
          if (param_3 != 0) {
            return 0;
          }
          iVar6 = FUN_10073980((int)this);
          FUN_10073850(iVar6,(int)this,param_1,param_2);
          return 0;
        }
        iVar6 = FUN_10073950((int)this);
        iVar6 = *(int *)(iVar6 + 4);
        fVar7 = *(float *)(iVar6 + 8) - local_24;
        fVar2 = *(float *)(iVar6 + 0xc) - local_20;
        fVar4 = *(float *)(iVar6 + 0x10) - local_1c;
        fVar3 = SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar4 * fVar4);
        if (fVar3 == _DAT_100dd5f8) {
          iVar6 = param_3;
          iVar5 = FUN_10073950((int)this);
          iVar5 = FUN_10073950(iVar5);
          iVar6 = FUN_10073820(iVar5,iVar6);
          if (iVar6 == 0) {
            if (param_2 == fVar1) {
              return 0;
            }
            return (int)this;
          }
        }
        if (param_2 < fVar3) {
          fVar3 = param_2 / fVar3;
          *param_1 = fVar7 * fVar3 + local_24;
          param_1[1] = fVar2 * fVar3 + local_20;
          param_1[2] = fVar3 * fVar4 + local_1c;
          return (int)this;
        }
        param_2 = param_2 - fVar3;
        iVar6 = FUN_10073950((int)this);
        iVar6 = *(int *)(iVar6 + 4);
        local_24 = *(float *)(iVar6 + 8);
        fVar7 = *(float *)(iVar6 + 0xc);
        local_1c = *(float *)(iVar6 + 0x10);
        this = (void *)FUN_10073950((int)this);
        fVar2 = _DAT_100dd5f8;
        *param_1 = local_24;
        param_1[1] = fVar7;
        param_1[2] = local_1c;
        local_20 = fVar7;
      } while (fVar2 < param_2);
    }
    *param_1 = local_24;
    param_1[1] = fVar7;
    param_1[2] = local_1c;
    return (int)this;
  }
  param_2 = -param_2;
  if (_DAT_100dd5f8 < param_2) {
    do {
      iVar6 = *(int *)((int)this + 4);
      fVar1 = *(float *)(iVar6 + 8) - local_24;
      fVar2 = *(float *)(iVar6 + 0xc) - local_20;
      fVar3 = *(float *)(iVar6 + 0x10) - local_1c;
      fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
      if (fVar4 == _DAT_100dd5f8) {
        iVar6 = param_3;
        iVar5 = FUN_10073980((int)this);
        iVar6 = FUN_10073820(iVar5,iVar6);
        if (iVar6 == 0) {
          if (param_3 != 0) {
            return 0;
          }
          iVar6 = FUN_10073950((int)this);
          FUN_10073850(iVar6,(int)this,param_1,param_2);
          return 0;
        }
      }
      else {
        if (param_2 < fVar4) {
          fVar4 = param_2 / fVar4;
          *param_1 = fVar1 * fVar4 + local_24;
          param_1[1] = fVar2 * fVar4 + local_20;
          param_1[2] = fVar4 * fVar3 + local_1c;
          return (int)this;
        }
        local_24 = *(float *)(iVar6 + 8);
        fVar7 = *(float *)(iVar6 + 0xc);
        local_1c = *(float *)(iVar6 + 0x10);
        param_2 = param_2 - fVar4;
        *param_1 = local_24;
        param_1[1] = fVar7;
        param_1[2] = local_1c;
        iVar6 = param_3;
        iVar5 = FUN_10073980((int)this);
        iVar6 = FUN_10073820(iVar5,iVar6);
        local_20 = fVar7;
        if (iVar6 == 0) {
          return 0;
        }
      }
      this = (void *)FUN_10073980((int)this);
    } while (_DAT_100dd5f8 < param_2);
  }
  *param_1 = local_24;
  param_1[1] = fVar7;
  param_1[2] = local_1c;
  return (int)this;
}

