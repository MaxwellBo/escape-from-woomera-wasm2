
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000a9e0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = *(int *)(param_1 + 4);
  local_14 = *(float *)(iVar4 + 0x60) + *(float *)(iVar4 + 0x60) + *(float *)(iVar4 + 0x54);
  local_10 = *(float *)(iVar4 + 100) + *(float *)(iVar4 + 100) + *(float *)(iVar4 + 0x58);
  local_18 = *(float *)(iVar4 + 0x5c) + *(float *)(iVar4 + 0x5c) + *(float *)(iVar4 + 0x50) +
             _DAT_100dd5d8;
  FUN_100af210(&local_18);
  iVar4 = *(int *)(param_1 + 4);
  if (_DAT_100dd5f8 <=
      *(float *)(param_1 + 0x32c) * *(float *)(DAT_10122044 + 0x40) +
      *(float *)(param_1 + 0x330) * *(float *)(DAT_10122044 + 0x44) +
      *(float *)(param_1 + 0x334) * *(float *)(DAT_10122044 + 0x48)) {
    if (_DAT_100de520 < *(float *)(iVar4 + 0x60)) {
      fVar8 = *(float *)(iVar4 + 0x60) - _DAT_100de45c;
      goto LAB_1000aaa6;
    }
  }
  else if (*(float *)(iVar4 + 0x60) < _DAT_100de498) {
    fVar8 = *(float *)(iVar4 + 0x60) + _DAT_100de45c;
LAB_1000aaa6:
    *(float *)(iVar4 + 0x60) = fVar8;
  }
  *(float *)(*(int *)(param_1 + 4) + 0x60) =
       *(float *)(*(int *)(param_1 + 4) + 0x60) * (float)_DAT_100de518;
  iVar4 = *(int *)(param_1 + 4);
  local_14 = *(float *)(iVar4 + 0x60) + *(float *)(iVar4 + 0x54);
  local_10 = *(float *)(iVar4 + 100) + *(float *)(iVar4 + 0x58);
  local_18 = *(float *)(iVar4 + 0x5c) + *(float *)(iVar4 + 0x50) + _DAT_100dd5d8;
  FUN_100af210(&local_18);
  fVar8 = *(float *)(param_1 + 0x30c);
  iVar4 = *(int *)(param_1 + 4);
  local_10 = *(float *)(iVar4 + 0x28) + *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 0x20) + *(float *)(iVar4 + 8) +
          fVar8 * *(float *)(DAT_10122044 + 0x34) * _DAT_100ddacc;
  fVar7 = *(float *)(iVar4 + 0x24) + *(float *)(iVar4 + 0x24) + *(float *)(iVar4 + 0xc) +
          fVar8 * *(float *)(DAT_10122044 + 0x38) * _DAT_100ddacc;
  fVar8 = (fVar8 * *(float *)(DAT_10122044 + 0x3c) * _DAT_100ddacc +
          local_10 + *(float *)(iVar4 + 0x10)) - _DAT_100de510;
  local_4 = *(undefined4 *)(iVar4 + 0x58);
  local_8 = *(undefined4 *)(iVar4 + 0x54);
  local_c = *(float *)(iVar4 + 0x50) + _DAT_100dd5d8;
  local_18 = fVar2;
  local_14 = fVar7;
  FUN_100af210(&local_c);
  *(float *)(*(int *)(param_1 + 4) + 0x20) =
       *(float *)(DAT_10122044 + 0x34) * *(float *)(param_1 + 0x30c) +
       *(float *)(*(int *)(param_1 + 4) + 0x20);
  *(float *)(*(int *)(param_1 + 4) + 0x24) =
       *(float *)(DAT_10122044 + 0x38) * *(float *)(param_1 + 0x30c) +
       *(float *)(*(int *)(param_1 + 4) + 0x24);
  *(float *)(*(int *)(param_1 + 4) + 0x28) =
       *(float *)(DAT_10122044 + 0x3c) * *(float *)(param_1 + 0x30c) +
       *(float *)(*(int *)(param_1 + 4) + 0x28);
  *(float *)(*(int *)(param_1 + 4) + 0x28) =
       *(float *)(*(int *)(param_1 + 4) + 0x28) - (float)_DAT_100de508;
  iVar4 = *(int *)(param_1 + 4);
  fVar9 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
               *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
               *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20));
  if (*(float *)(DAT_10122044 + 0x28) * *(float *)(iVar4 + 0x20) +
      *(float *)(DAT_10122044 + 0x2c) * *(float *)(iVar4 + 0x24) < _DAT_100dd5f8) {
    fVar9 = -fVar9;
  }
  fVar3 = (*(float *)(param_1 + 0x338) - fVar2) * *(float *)(DAT_10122044 + 0x28) +
          (*(float *)(param_1 + 0x33c) - fVar7) * *(float *)(DAT_10122044 + 0x2c) +
          (*(float *)(param_1 + 0x340) - fVar8) * *(float *)(DAT_10122044 + 0x30);
  if (-((*(float *)(param_1 + 0x338) - fVar2) * *(float *)(DAT_10122044 + 0x40) +
       (*(float *)(param_1 + 0x33c) - fVar7) * *(float *)(DAT_10122044 + 0x44) +
       (*(float *)(param_1 + 0x340) - fVar8) * *(float *)(DAT_10122044 + 0x48)) <= _DAT_100dd5f8) {
    if ((_DAT_100de4f8 <= *(float *)(iVar4 + 0x58)) || (_DAT_100dd5d4 <= *(float *)(iVar4 + 100))) {
      fVar2 = *(float *)(iVar4 + 100) - _DAT_100de4ac;
    }
    else {
      fVar2 = *(float *)(iVar4 + 100) + _DAT_100de4fc;
    }
  }
  else if ((*(float *)(iVar4 + 0x58) <= _DAT_100de504) || (*(float *)(iVar4 + 100) <= _DAT_100de500)
          ) {
    fVar2 = *(float *)(iVar4 + 100) + _DAT_100de4ac;
  }
  else {
    fVar2 = *(float *)(iVar4 + 100) - _DAT_100de4fc;
  }
  *(float *)(iVar4 + 100) = fVar2;
  *(float *)(*(int *)(param_1 + 4) + 0x20) =
       ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x40)) * (float)_DAT_100de4f0) *
       *(float *)(*(int *)(param_1 + 4) + 0x20);
  *(float *)(*(int *)(param_1 + 4) + 0x24) =
       ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x44)) * (float)_DAT_100de4f0) *
       *(float *)(*(int *)(param_1 + 4) + 0x24);
  *(float *)(*(int *)(param_1 + 4) + 0x28) =
       ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x48)) * (float)_DAT_100de4f0) *
       *(float *)(*(int *)(param_1 + 4) + 0x28);
  iVar4 = *(int *)(param_1 + 4);
  local_18 = *(float *)(iVar4 + 0x20) * _DAT_100de4e8;
  local_14 = *(float *)(iVar4 + 0x24) * _DAT_100de4e8;
  local_10 = *(float *)(iVar4 + 0x28) * _DAT_100de4e8;
  *(float *)(iVar4 + 0x20) = local_18;
  *(float *)(iVar4 + 0x24) = local_14;
  *(float *)(iVar4 + 0x28) = local_10;
  if ((_DAT_100de4e4 <= *(float *)(param_1 + 0x30c)) || (*(float *)(param_1 + 0x340) <= fVar8)) {
    if ((_DAT_100de4f8 < *(float *)(param_1 + 0x30c)) && (*(float *)(param_1 + 0x340) < fVar8)) {
      fVar8 = *(float *)(param_1 + 0x30c) - _DAT_100de45c;
      goto LAB_1000ae59;
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x30c) + _DAT_100dd624;
LAB_1000ae59:
    *(float *)(param_1 + 0x30c) = fVar8;
  }
  if (((fVar3 <= _DAT_100dd5f8) || (*(float *)(param_1 + 0x374) <= fVar9)) ||
     (pvVar5 = *(void **)(param_1 + 4),
     *(float *)((int)pvVar5 + 0x50) + *(float *)((int)pvVar5 + 0x5c) <= _DAT_100de4e0)) {
    if (((_DAT_100dd5f8 <= fVar3) || (fVar9 <= _DAT_100de4d0)) ||
       (pvVar5 = *(void **)(param_1 + 4),
       _DAT_100ddacc <= *(float *)((int)pvVar5 + 0x50) + *(float *)((int)pvVar5 + 0x5c))) {
      pvVar5 = *(void **)(param_1 + 4);
      fVar8 = *(float *)((int)pvVar5 + 0x50) + *(float *)((int)pvVar5 + 0x5c);
      if (fVar8 <= _DAT_100dd5f8) {
        if (_DAT_100dd5f8 <= fVar8) goto LAB_1000af19;
        fVar8 = *(float *)((int)pvVar5 + 0x5c) + (float)_DAT_100de470;
      }
      else {
        fVar8 = *(float *)((int)pvVar5 + 0x5c) - (float)_DAT_100de470;
      }
    }
    else {
      fVar8 = *(float *)((int)pvVar5 + 0x5c) + (float)_DAT_100de4d8;
    }
  }
  else {
    fVar8 = *(float *)((int)pvVar5 + 0x5c) - (float)_DAT_100de4d8;
  }
  *(float *)((int)pvVar5 + 0x5c) = fVar8;
LAB_1000af19:
  if (*(int *)(param_1 + 0x364) == 0) {
    FUN_10094b20(pvVar5,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                 s_apache_ap_rotor2_wav_10102c90,0x3f800000,0x3e99999a,0,0x6e);
    *(undefined4 *)(param_1 + 0x364) = 0x80;
    return;
  }
  iVar4 = FUN_100aec40(0,s_player_10101c54);
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar4 + 4);
    iVar1 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar4 + 8) - *(float *)(iVar1 + 8);
    fVar8 = *(float *)(iVar4 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar9 = *(float *)(iVar4 + 0x10) - *(float *)(iVar1 + 0x10);
    fVar7 = SQRT(fVar2 * fVar2 + fVar8 * fVar8 + fVar9 * fVar9);
    if (fVar7 == _DAT_100dd5f8) {
      fVar9 = 1.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar7 = _DAT_100dd618 / fVar7;
      fVar9 = fVar9 * fVar7;
      fVar8 = fVar8 * fVar7;
      fVar7 = fVar7 * fVar2;
    }
    FUN_10001d60(&local_18,fVar7,fVar8,fVar9);
    iVar4 = *(int *)(param_1 + 4);
    __ftol();
    lVar6 = __ftol();
    pvVar5 = *(void **)(iVar4 + 0x208);
    FUN_10094b20(pvVar5,pvVar5,6,s_apache_ap_rotor2_wav_10102c90,0x3f800000,0x3e99999a,0xc0,
                 (int)lVar6);
  }
  return;
}

