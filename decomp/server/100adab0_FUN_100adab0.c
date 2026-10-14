
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_100adab0(void *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int local_8;
  
  iVar4 = 0;
  if (*(float *)((int)param_1 + 0x358) != *(float *)((int)param_1 + 0x364)) {
    local_8 = 1;
    if (*(float *)((int)param_1 + 0x364) <= *(float *)((int)param_1 + 0x358)) {
      local_8 = -1;
    }
    fVar5 = *(float *)((int)param_1 + 0x328) * (float)local_8 * (float)_DAT_100dfb80 +
            *(float *)((int)param_1 + 0x358);
    *(float *)((int)param_1 + 0x358) = fVar5;
    if ((float)local_8 == _DAT_100dd618) {
      if (*(float *)((int)param_1 + 0x364) < fVar5) {
        *(undefined4 *)((int)param_1 + 0x358) = *(undefined4 *)((int)param_1 + 0x364);
      }
    }
    else if (fVar5 < *(float *)((int)param_1 + 0x364)) {
      *(undefined4 *)((int)param_1 + 0x358) = *(undefined4 *)((int)param_1 + 0x364);
    }
    if (*(int *)((int)param_1 + 0x32c) == 0) {
      fVar5 = -*(float *)((int)param_1 + 0x358);
    }
    else {
      fVar5 = *(float *)((int)param_1 + 0x358);
    }
    FUN_10008360(param_1,1,fVar5);
    iVar4 = 1;
  }
  if (*(float *)((int)param_1 + 0x35c) == *(float *)((int)param_1 + 0x368)) {
    if (iVar4 == 0) {
      *(float *)((int)param_1 + 0x328) = (float)*(int *)((int)param_1 + 0x324);
    }
    return iVar4;
  }
  local_8 = 1;
  if (*(float *)((int)param_1 + 0x368) <= *(float *)((int)param_1 + 0x35c)) {
    local_8 = -1;
  }
  fVar5 = (float)local_8;
  fVar3 = ABS(*(float *)((int)param_1 + 0x368) - *(float *)((int)param_1 + 0x35c));
  if (_DAT_100ddaec < fVar3) {
    fVar3 = _DAT_100ddae8 - fVar3;
    fVar5 = -fVar5;
  }
  if (fVar3 <= _DAT_100de4f8) {
    if (*(float *)((int)param_1 + 0x328) <= _DAT_100ddb08) {
      local_8 = *(int *)((int)param_1 + 0x324);
      goto LAB_100adc59;
    }
    local_8 = *(int *)((int)param_1 + 0x324);
    fVar2 = *(float *)((int)param_1 + 0x328) - (float)local_8;
  }
  else {
    local_8 = *(int *)((int)param_1 + 0x324);
    if ((float)(local_8 * 10) <= *(float *)((int)param_1 + 0x328)) goto LAB_100adc69;
LAB_100adc59:
    fVar2 = (float)local_8 + *(float *)((int)param_1 + 0x328);
  }
  *(float *)((int)param_1 + 0x328) = fVar2;
LAB_100adc69:
  fVar5 = fVar5 * *(float *)((int)param_1 + 0x328) * (float)_DAT_100dfb80 +
          *(float *)((int)param_1 + 0x35c);
  bVar1 = _DAT_100dd5f8 <= fVar5;
  *(float *)((int)param_1 + 0x35c) = fVar5;
  if (bVar1) {
    if (_DAT_100ddae8 <= fVar5) {
      *(float *)((int)param_1 + 0x35c) = fVar5 - _DAT_100ddae8;
    }
  }
  else {
    *(float *)((int)param_1 + 0x35c) = fVar5 + _DAT_100ddae8;
  }
  if (fVar3 < (float)local_8 * (float)_DAT_100de4f0) {
    *(undefined4 *)((int)param_1 + 0x35c) = *(undefined4 *)((int)param_1 + 0x368);
  }
  if (*(int *)((int)param_1 + 0x32c) == 0) {
    fVar5 = *(float *)((int)param_1 + 0x35c) - *(float *)(*(int *)((int)param_1 + 4) + 0x54);
  }
  else {
    fVar5 = (*(float *)(*(int *)((int)param_1 + 4) + 0x54) - _DAT_100ddaec) -
            *(float *)((int)param_1 + 0x35c);
  }
  FUN_10008360(param_1,0,fVar5);
  return 1;
}

