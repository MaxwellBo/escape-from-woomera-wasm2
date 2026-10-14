
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1000b580(void *param_1)

{
  void *this;
  float10 fVar1;
  float in_stack_ffffff58;
  float *pfVar2;
  float fVar3;
  float in_stack_ffffff70;
  float in_stack_ffffff74;
  undefined4 in_stack_ffffff78;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
  FUN_10008450(param_1,1,&local_3c,local_18);
  fVar6 = *(float *)((int)param_1 + 800) - local_3c;
  local_50 = *(float *)((int)param_1 + 0x324) - local_38;
  local_4c = *(float *)((int)param_1 + 0x328) - local_34;
  fVar3 = SQRT(fVar6 * fVar6 + local_50 * local_50 + local_4c * local_4c);
  if (fVar3 == _DAT_100dd5f8) {
    fVar10 = 1.0;
    fVar8 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar3 = _DAT_100dd618 / fVar3;
    fVar10 = local_4c * fVar3;
    fVar8 = local_50 * fVar3;
    fVar6 = fVar6 * fVar3;
  }
  FUN_10001d60(&local_60,fVar6,fVar8,fVar10);
  local_30 = local_60 * *(float *)(DAT_10122044 + 0x28) +
             local_5c * *(float *)(DAT_10122044 + 0x2c) + local_58 * *(float *)(DAT_10122044 + 0x30)
  ;
  local_2c = -(local_60 * *(float *)(DAT_10122044 + 0x40) +
              local_5c * *(float *)(DAT_10122044 + 0x44) +
              local_58 * *(float *)(DAT_10122044 + 0x48));
  local_28 = local_60 * *(float *)(DAT_10122044 + 0x34) +
             local_5c * *(float *)(DAT_10122044 + 0x38) + local_58 * *(float *)(DAT_10122044 + 0x3c)
  ;
  FUN_100ae830(&local_6c,&local_30);
  local_6c = -local_6c;
  if (_DAT_100ddaec < local_68) {
    local_68 = local_68 - _DAT_100ddae8;
  }
  if (local_68 < _DAT_100de530) {
    local_68 = local_68 + _DAT_100ddae8;
  }
  if (_DAT_100ddaec < local_6c) {
    local_6c = local_6c - _DAT_100ddae8;
  }
  if (local_6c < _DAT_100de530) {
    local_6c = local_6c + _DAT_100ddae8;
  }
  if (*(float *)((int)param_1 + 0x350) < local_6c) {
    fVar6 = *(float *)((int)param_1 + 0x350) + _DAT_100dd624;
    if (local_6c < fVar6) {
      fVar6 = local_6c;
    }
    *(float *)((int)param_1 + 0x350) = fVar6;
  }
  if (local_6c < *(float *)((int)param_1 + 0x350)) {
    fVar6 = *(float *)((int)param_1 + 0x350) - _DAT_100dd624;
    if (fVar6 < local_6c) {
      fVar6 = local_6c;
    }
    *(float *)((int)param_1 + 0x350) = fVar6;
  }
  if (*(float *)((int)param_1 + 0x354) < local_68) {
    fVar6 = *(float *)((int)param_1 + 0x354) + _DAT_100dd624;
    if (local_68 < fVar6) {
      fVar6 = local_68;
    }
    *(float *)((int)param_1 + 0x354) = fVar6;
  }
  if (local_68 < *(float *)((int)param_1 + 0x354)) {
    fVar6 = *(float *)((int)param_1 + 0x354) - _DAT_100dd624;
    if (fVar6 < local_68) {
      fVar6 = local_68;
    }
    *(float *)((int)param_1 + 0x354) = fVar6;
  }
  fVar1 = (float10)FUN_10008360(param_1,0,*(float *)((int)param_1 + 0x354));
  *(float *)((int)param_1 + 0x354) = (float)fVar1;
  fVar1 = (float10)FUN_10008360(param_1,1,*(float *)((int)param_1 + 0x350));
  *(float *)((int)param_1 + 0x350) = (float)fVar1;
  FUN_10008450(param_1,0,&local_24,local_c);
  local_24 = local_24 - local_3c;
  local_50 = local_20 - local_38;
  local_4c = local_1c - local_34;
  fVar6 = SQRT(local_24 * local_24 + local_50 * local_50 + local_4c * local_4c);
  if (fVar6 == _DAT_100dd5f8) {
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = 1.0;
  }
  else {
    fVar6 = _DAT_100dd618 / fVar6;
    FUN_10001d60(&local_48,local_24 * fVar6,local_50 * fVar6,local_4c * fVar6);
  }
  if ((float)_DAT_100de518 < local_48 * local_60 + local_44 * local_5c + local_40 * local_58) {
    fVar11 = 0.0;
    iVar9 = 0;
    iVar7 = 1;
    fVar5 = 1.12104e-44;
    fVar4 = 8192.0;
    fVar8 = 0.0349;
    fVar10 = 0.0349;
    fVar3 = 0.0349;
    FUN_10001d60(&stack0xffffff70,0x3d0ef34d,0x3d0ef34d,0x3d0ef34d);
    pfVar2 = &local_48;
    fVar6 = 2.5386182e-29;
    FUN_10003850(&stack0xffffff64,pfVar2);
    FUN_10003850(&stack0xffffff58,&local_3c);
    FUN_100204d0(param_1,1,in_stack_ffffff58,fVar6,(float)pfVar2,fVar3,fVar10,fVar8,
                 in_stack_ffffff70,in_stack_ffffff74,in_stack_ffffff78,fVar4,fVar5,iVar7,iVar9,
                 fVar11);
    this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
    FUN_10094b20(this,this,1,s_turret_tu_fire1_wav_10102c20,0x3f800000,0x3e99999a,0,100);
    return 1;
  }
  if (*(int *)((int)param_1 + 0x37c) != 0) {
    FUN_100b0ef0(*(int *)((int)param_1 + 0x37c));
    *(undefined4 *)((int)param_1 + 0x37c) = 0;
  }
  return 0;
}

