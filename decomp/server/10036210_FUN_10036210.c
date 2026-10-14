
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10036210(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = FUN_100b01e0(param_1);
  if ((((byte)*(undefined4 *)(*(int *)((int)this + 4) + 0x1a4) & 2) == 2) != (iVar6 == -3)) {
    *param_3 = 0.0;
    return 1;
  }
  iVar7 = FUN_100b01e0(param_2);
  if (iVar7 != iVar6) {
    fVar2 = *param_2 - *param_1;
    fVar1 = param_2[1] - param_1[1];
    fVar4 = param_2[2] - param_1[2];
    local_1c = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4);
    if (local_1c == _DAT_100dd5f8) {
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 1.0;
    }
    else {
      local_1c = _DAT_100dd618 / local_1c;
      local_24 = fVar2 * local_1c;
      local_20 = fVar1 * local_1c;
      local_1c = fVar4 * local_1c;
    }
    param_2 = (float *)0x0;
    pfVar3 = (float *)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4);
    local_28 = pfVar3;
    pfVar5 = pfVar3;
    if ((float)_DAT_100dd628 < (float)pfVar3) {
      do {
        pfVar5 = (float *)((float)pfVar5 * (float)_DAT_100dd648 + (float)param_2);
        local_c = local_24 * (float)pfVar5 + *param_1;
        local_8 = local_20 * (float)pfVar5 + param_1[1];
        local_4 = local_1c * (float)pfVar5 + param_1[2];
        iVar7 = FUN_100b01e0(&local_c);
        if (iVar7 == iVar6) {
          param_2 = pfVar5;
          pfVar5 = local_28;
        }
        local_28 = pfVar5;
        pfVar5 = (float *)((float)local_28 - (float)param_2);
      } while ((float)_DAT_100dd628 < (float)pfVar5);
    }
    *param_3 = (float)param_2 / (float)pfVar3;
    return 1;
  }
  *param_3 = 1.0;
  return 0;
}

