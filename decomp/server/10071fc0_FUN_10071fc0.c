
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10071fc0(void *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  void *this;
  float10 fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  fVar9 = *DAT_10122044 - *(float *)((int)param_1 + 0x354);
  fVar6 = FUN_100affb0(((float)_DAT_100dd628 / *(float *)((int)param_1 + 0x358)) * fVar9,1.0);
  fVar10 = (float)fVar6;
  fVar8 = *(float *)((int)param_1 + 0x358) - fVar9;
  local_3c = fVar8 * *(float *)((int)param_1 + 0x318);
  local_24 = (*(float *)((int)param_1 + 0x330) - local_3c) * fVar10;
  local_20 = (*(float *)((int)param_1 + 0x334) - fVar8 * *(float *)((int)param_1 + 0x31c)) * fVar10;
  local_28 = fVar9 * *(float *)((int)param_1 + 0x314);
  local_38 = fVar9 * *(float *)((int)param_1 + 0x310) + *(float *)((int)param_1 + 0x328);
  local_34 = local_28 + *(float *)((int)param_1 + 0x32c);
  fVar3 = (float)_DAT_100dd628 - fVar10;
  local_30 = (fVar9 * *(float *)((int)param_1 + 0x30c) + *(float *)((int)param_1 + 0x324)) * fVar3;
  local_2c = local_38 * fVar3;
  FUN_10001d60(local_c,local_30 + local_24,local_2c + local_20,
               local_34 * fVar3 +
               (*(float *)((int)param_1 + 0x338) - fVar8 * *(float *)((int)param_1 + 800)) * fVar10)
  ;
  FUN_10001d60(&local_24,fVar10 * *(float *)((int)param_1 + 0x348),
               fVar10 * *(float *)((int)param_1 + 0x34c),fVar10 * *(float *)((int)param_1 + 0x350));
  FUN_10001d60(&local_30,fVar3 * *(float *)((int)param_1 + 0x33c),
               fVar3 * *(float *)((int)param_1 + 0x340),fVar3 * *(float *)((int)param_1 + 0x344));
  FUN_10001d60(&local_18,local_24 + local_30,local_20 + local_2c,local_1c + local_28);
  FUN_10001d60(&local_24,fVar10 * *(float *)((int)param_1 + 0x318),
               fVar10 * *(float *)((int)param_1 + 0x31c),fVar10 * *(float *)((int)param_1 + 800));
  FUN_10001d60(&local_30,fVar3 * *(float *)((int)param_1 + 0x30c),
               fVar3 * *(float *)((int)param_1 + 0x310),fVar3 * *(float *)((int)param_1 + 0x314));
  FUN_10001d60(&local_3c,local_24 + local_30,local_20 + local_2c,local_1c + local_28);
  pfVar5 = (float *)((int)param_1 + 0x35c);
  *pfVar5 = local_3c;
  *(float *)((int)param_1 + 0x360) = local_38;
  *(float *)((int)param_1 + 0x364) = local_34;
  FUN_100afe10((int)param_1,local_c);
  iVar4 = *(int *)((int)param_1 + 4);
  *(undefined4 *)(iVar4 + 0x50) = local_18;
  *(undefined4 *)(iVar4 + 0x54) = local_14;
  *(undefined4 *)(iVar4 + 0x58) = local_10;
  FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
  fVar10 = (_DAT_100e81f0 -
           (DAT_10122044[10] * *pfVar5 +
           DAT_10122044[0xb] * *(float *)((int)param_1 + 0x360) +
           DAT_10122044[0xc] * *(float *)((int)param_1 + 0x364))) * (float)_DAT_100dfb80;
  if ((*(float *)((int)param_1 + 0x36c) < fVar10) &&
     (fVar9 = *(float *)((int)param_1 + 0x36c) + (float)_DAT_100dd648,
     *(float *)((int)param_1 + 0x36c) = fVar9, _DAT_100dd5f8 < fVar9)) {
    *(undefined4 *)((int)param_1 + 0x36c) = 0;
  }
  if ((fVar10 < *(float *)((int)param_1 + 0x36c)) &&
     (fVar10 = *(float *)((int)param_1 + 0x36c) - (float)_DAT_100dd648,
     *(float *)((int)param_1 + 0x36c) = fVar10, fVar10 < _DAT_100ed948)) {
    *(undefined4 *)((int)param_1 + 0x36c) = 0xc2b40000;
  }
  FUN_10008360(param_1,0,*(float *)((int)param_1 + 0x36c));
  if (*(int *)((int)param_1 + 0x57c) == 0) {
    FUN_10094b20(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                 s_apache_ap_rotor4_wav_10113680,0x3f800000,0x3e19999a,0,0x6e);
    *(undefined4 *)((int)param_1 + 0x57c) = 0x80;
    return;
  }
  iVar4 = FUN_100aec40(0,s_player_10101c54);
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 4);
    iVar2 = *(int *)((int)param_1 + 4);
    FUN_10001d60(&local_3c,*(float *)(iVar1 + 8) - *(float *)(iVar2 + 8),
                 *(float *)(iVar1 + 0xc) - *(float *)(iVar2 + 0xc),
                 *(float *)(iVar1 + 0x10) - *(float *)(iVar2 + 0x10));
    fVar6 = FUN_1000a9b0(&local_3c);
    if (fVar6 == (float10)_DAT_100dd5f8) {
      fVar10 = 1.0;
      fVar9 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar6 = (float10)_DAT_100dd618 / fVar6;
      fVar10 = (float)((float10)local_34 * fVar6);
      fVar9 = (float)((float10)local_38 * fVar6);
      fVar8 = (float)((float10)local_3c * fVar6);
    }
    FUN_10001d60(&local_24,fVar8,fVar9,fVar10);
    pfVar11 = &local_24;
    pfVar5 = (float *)FUN_10002250(pfVar5,&local_30,(float *)(*(int *)(iVar4 + 4) + 0x20));
    FUN_100724d0(pfVar5,pfVar11);
    lVar7 = __ftol();
    fVar10 = (float)(int)lVar7;
    fVar9 = _DAT_100dd640;
    if (((fVar10 <= _DAT_100dd640) && (fVar9 = _DAT_100ddaf8, _DAT_100ddaf8 <= fVar10)) &&
       (fVar9 = fVar10, fVar10 == _DAT_100dd61c)) {
      fVar9 = _DAT_100de4b8;
    }
    if (fVar9 != (float)*(int *)((int)param_1 + 0x584)) {
      lVar7 = __ftol();
      *(int *)((int)param_1 + 0x584) = (int)lVar7;
      FUN_10094b20(*(void **)((int)param_1 + 4),
                   *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),6,
                   s_apache_ap_rotor4_wav_10113680,0x3f800000,0x3e19999a,0xc0,(int)lVar7);
      return;
    }
  }
  return;
}

