
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10052600(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  double dVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_a0;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar1 = param_1[1];
  fVar10 = *(float *)(iVar1 + 8);
  fVar9 = *(float *)(iVar1 + 0xc);
  fVar2 = *(float *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
    *(undefined4 *)(iVar1 + 0x50) = 0;
    iVar1 = param_1[1];
    fVar8 = (float10)(*DAT_10121f74)(0xc2340000,0x42340000);
    *(float *)(iVar1 + 0x54) = (float)(fVar8 + (float10)*(float *)(iVar1 + 0x54));
    *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) & 0xfffffdff;
    iVar1 = param_1[1];
    fStack_78 = -*(float *)(iVar1 + 0x50);
    fStack_74 = *(float *)(iVar1 + 0x54);
    fStack_70 = *(float *)(iVar1 + 0x58);
    (*DAT_10121e58)(&fStack_78,&fStack_6c,&fStack_30,&fStack_3c);
    fStack_38 = fStack_38 * _DAT_100de484;
    iVar1 = param_1[1];
    fStack_34 = fStack_34 * _DAT_100de484;
    fStack_68 = fStack_68 * _DAT_100de484;
    fStack_64 = fStack_64 * _DAT_100de484;
    *(float *)(iVar1 + 0x20) = fStack_6c * _DAT_100de484 + fStack_3c * _DAT_100de484;
    *(float *)(iVar1 + 0x24) = fStack_68 + fStack_38;
    *(float *)(iVar1 + 0x28) = fStack_64 + fStack_34;
    return;
  }
  if ((param_1[0xcf] != 0) && ((float)param_1[0xc5] < (float)param_1[0xd0])) {
    param_1[0xc5] = (int)((float)param_1[0xc5] + _DAT_100e113c);
  }
  if (_DAT_100ddaec <= (float)param_1[0xc5]) {
    if (param_1[0x74] == 3) {
      (**(code **)(*param_1 + 0x1a8))(4);
    }
    if (param_1[0x74] != 4) goto LAB_100527df;
  }
  else {
    if (param_1[0x74] == 4) {
      (**(code **)(*param_1 + 0x1a8))(3);
    }
    if (param_1[0x74] != 3) goto LAB_100527df;
  }
  *(float *)(param_1[1] + 0x138) = (float)param_1[0xc5] * (float)_DAT_100e9ab8;
LAB_100527df:
  pfVar7 = (float *)(param_1 + 0xc9);
  pfVar6 = (float *)FUN_100ae830(&local_84,pfVar7);
  fStack_74 = pfVar6[1];
  fStack_70 = pfVar6[2];
  fStack_78 = -*pfVar6;
  (*DAT_10121e58)(&fStack_78,&fStack_6c,&fStack_30,&fStack_3c);
  FUN_10001d60(&fStack_90,fStack_6c * _DAT_100df288,fStack_68 * _DAT_100df288,
               fStack_64 * _DAT_100df288);
  fStack_54 = fStack_90 + fVar10;
  fStack_50 = fVar9 + fStack_8c;
  fStack_4c = fVar2 + fStack_88;
  pfVar6 = FUN_100530a0(param_1,&local_84,&fStack_54);
  fStack_24 = *pfVar6;
  fStack_20 = pfVar6[1];
  fStack_1c = pfVar6[2];
  FUN_10001d60(&fStack_90,fStack_6c * _DAT_100ddaf8,fStack_68 * _DAT_100ddaf8,
               fStack_64 * _DAT_100ddaf8);
  fStack_50 = fVar9 + fStack_8c;
  fStack_4c = fVar2 + fStack_88;
  fStack_48 = fStack_90 + fVar10 + fStack_30;
  fStack_44 = fStack_2c + fStack_50;
  fStack_40 = fStack_28 + fStack_4c;
  pfVar6 = FUN_100530a0(param_1,&local_84,&fStack_48);
  fStack_18 = *pfVar6;
  fStack_14 = pfVar6[1];
  fStack_10 = pfVar6[2];
  FUN_10001d60(&fStack_48,fStack_6c * _DAT_100ddaf8,fStack_68 * _DAT_100ddaf8,
               fStack_64 * _DAT_100ddaf8);
  fStack_8c = fVar9 + fStack_44;
  fStack_88 = fVar2 + fStack_40;
  fStack_60 = (fStack_48 + fVar10) - fStack_30;
  fStack_5c = fStack_8c - fStack_2c;
  fStack_58 = fStack_88 - fStack_28;
  pfVar6 = FUN_100530a0(param_1,&local_84,&fStack_60);
  fStack_54 = *pfVar6;
  fStack_50 = pfVar6[1];
  fStack_4c = pfVar6[2];
  FUN_10001d60(&fStack_60,fStack_6c * _DAT_100ddaf8,fStack_68 * _DAT_100ddaf8,
               fStack_64 * _DAT_100ddaf8);
  fStack_44 = fVar9 + fStack_5c;
  fStack_40 = fVar2 + fStack_58;
  local_84 = fStack_60 + fVar10 + fStack_3c;
  fStack_80 = fStack_38 + fStack_44;
  fStack_7c = fStack_34 + fStack_40;
  pfVar6 = FUN_100530a0(param_1,afStack_c,&local_84);
  fStack_90 = *pfVar6;
  fStack_8c = pfVar6[1];
  fStack_88 = pfVar6[2];
  FUN_10001d60(&local_84,fStack_6c * _DAT_100ddaf8,fStack_68 * _DAT_100ddaf8,
               fStack_64 * _DAT_100ddaf8);
  fStack_5c = fVar9 + fStack_80;
  fStack_58 = fVar2 + fStack_7c;
  fStack_48 = (local_84 + fVar10) - fStack_3c;
  fStack_44 = fStack_5c - fStack_38;
  fStack_40 = fStack_58 - fStack_34;
  pfVar6 = FUN_100530a0(param_1,afStack_c,&fStack_48);
  fStack_5c = pfVar6[1] + fStack_8c + fStack_50 + fStack_20 + fStack_14;
  fStack_58 = pfVar6[2] + fStack_88 + fStack_4c + fStack_1c + fStack_10;
  fStack_80 = fStack_5c * _DAT_100dd614;
  fStack_7c = fStack_58 * _DAT_100dd614;
  fVar9 = (fStack_18 + fStack_24 + fStack_54 + fStack_90 + *pfVar6) * _DAT_100dd614 + *pfVar7;
  fVar10 = fStack_80 + (float)param_1[0xca];
  fVar11 = fStack_7c + (float)param_1[0xcb];
  fVar2 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
  if (fVar2 == _DAT_100dd5f8) {
    fVar11 = 1.0;
    fVar10 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    fVar11 = fVar11 * fVar2;
    fVar10 = fVar10 * fVar2;
    fVar9 = fVar9 * fVar2;
  }
  FUN_10001d60(&fStack_90,fVar9,fVar10,fVar11);
  *pfVar7 = fStack_90;
  param_1[0xca] = (int)fStack_8c;
  iVar1 = param_1[1];
  param_1[0xcb] = (int)fStack_88;
  fStack_90 = -*(float *)(iVar1 + 0x50);
  fStack_8c = *(float *)(iVar1 + 0x54);
  fStack_88 = *(float *)(iVar1 + 0x58);
  fStack_78 = fStack_90;
  fStack_74 = fStack_8c;
  fStack_70 = fStack_88;
  (*DAT_10121e58)(&fStack_78,&fStack_6c,&fStack_30,&fStack_3c);
  fStack_88 = fStack_6c * *pfVar7 +
              fStack_68 * (float)param_1[0xca] + fStack_64 * (float)param_1[0xcb];
  if (fStack_88 <= (float)_DAT_100dd648) {
    if (fStack_88 <= _DAT_100dd5f8) {
      fStack_90 = *pfVar7 * _DAT_100de4e4;
      fStack_8c = (float)param_1[0xca] * _DAT_100de4e4;
      fStack_88 = (float)param_1[0xcb] * _DAT_100de4e4;
      *pfVar7 = fStack_90;
      param_1[0xca] = (int)fStack_8c;
    }
    else {
      fVar10 = (float)param_1[0xc5];
      local_84 = fVar10 * *pfVar7;
      fStack_80 = fVar10 * (float)param_1[0xca];
      fStack_88 = fStack_88 + (float)_DAT_100dd648;
      fStack_90 = local_84 * fStack_88;
      fStack_8c = fStack_80 * fStack_88;
      *pfVar7 = fStack_90;
      fStack_88 = fVar10 * (float)param_1[0xcb] * fStack_88;
      param_1[0xca] = (int)fStack_8c;
    }
  }
  else {
    fStack_88 = (float)param_1[0xc5];
    fStack_90 = fStack_88 * *pfVar7;
    fStack_8c = fStack_88 * (float)param_1[0xca];
    fStack_88 = fStack_88 * (float)param_1[0xcb];
    *pfVar7 = fStack_90;
    param_1[0xca] = (int)fStack_8c;
  }
  param_1[0xcb] = (int)fStack_88;
  iVar1 = param_1[1];
  *(float *)(iVar1 + 0x20) = fStack_90;
  *(float *)(iVar1 + 0x24) = fStack_8c;
  *(float *)(iVar1 + 0x28) = fStack_88;
  pfVar7 = (float *)FUN_100ae830(afStack_c,pfVar7);
  fStack_78 = *pfVar7;
  fStack_74 = pfVar7[1];
  fStack_70 = pfVar7[2];
  if (_DAT_100ddaec < fStack_78) {
    fStack_78 = fStack_78 - _DAT_100ddae8;
  }
  fVar8 = FUN_100afe80(fStack_78,*(float *)(param_1[1] + 0x50),5.0);
  *(float *)(param_1[1] + 0x50) = (float)fVar8;
  if (*(float *)(param_1[1] + 0x50) < _DAT_100e9ab0) {
    *(undefined4 *)(param_1[1] + 0x50) = 0xc2a00000;
  }
  if (_DAT_100de4e4 < *(float *)(param_1[1] + 0x50)) {
    *(undefined4 *)(param_1[1] + 0x50) = 0x42a00000;
  }
  iVar1 = param_1[1];
  fStack_a0 = 360.0;
  fVar10 = fStack_74 - *(float *)(iVar1 + 0x54);
  dVar5 = ABS(_DAT_100de210);
  if (ABS(fVar10) < (float)dVar5) {
    fStack_a0 = fVar10;
  }
  if (ABS(fVar10 + _DAT_100ddae8) < ABS(fStack_a0)) {
    fStack_a0 = fVar10 + _DAT_100ddae8;
  }
  if (ABS(fVar10 - _DAT_100ddae8) < ABS(fStack_a0)) {
    fStack_a0 = fVar10 - _DAT_100ddae8;
  }
  fVar10 = (float)param_1[0xc5] * (float)_DAT_100dfb80;
  if ((fVar10 < ABS(fStack_a0)) &&
     (bVar4 = fStack_a0 < (float)_DAT_100de1e8, fStack_a0 = fVar10, bVar4)) {
    fStack_a0 = -fVar10;
  }
  *(float *)(iVar1 + 0x54) = fStack_a0 + *(float *)(iVar1 + 0x54);
  *(float *)(param_1[1] + 0x58) = *(float *)(param_1[1] + 0x58) - fStack_a0;
  iVar3 = param_1[1];
  fVar8 = (float10)FUN_100c8a0a(iVar1);
  *(float *)(iVar3 + 0x54) = (float)fVar8;
  _DAT_1012205c = _DAT_1012205c * (float)_DAT_100dd600 + fStack_a0;
  FUN_10008360(param_1,0,-_DAT_1012205c * (float)_DAT_100dd5f0);
  iVar1 = param_1[1];
  fVar10 = fStack_70 - *(float *)(iVar1 + 0x58);
  fVar9 = _DAT_100ddae8;
  if (ABS(fVar10) < (float)dVar5) {
    fVar9 = fVar10;
  }
  if (ABS(fVar10 + _DAT_100ddae8) < ABS(fVar9)) {
    fVar9 = fVar10 + _DAT_100ddae8;
  }
  if (ABS(fVar10 - _DAT_100ddae8) < ABS(fVar9)) {
    fVar9 = fVar10 - _DAT_100ddae8;
  }
  fVar2 = (float)param_1[0xc5] * _DAT_100dd614 * (float)_DAT_100dfb80;
  fVar10 = fVar9;
  if ((ABS(fVar9) < fVar2) || (fVar10 = fVar2, (float)_DAT_100de1e8 <= fVar9)) {
    fVar10 = fVar10 + *(float *)(iVar1 + 0x58);
  }
  else {
    fVar10 = *(float *)(iVar1 + 0x58) - fVar2;
  }
  *(float *)(iVar1 + 0x58) = fVar10;
  if (*(float *)(param_1[1] + 0x58) < _DAT_100e45b0) {
    *(undefined4 *)(param_1[1] + 0x58) = 0xc1a00000;
  }
  if (_DAT_100ddacc < *(float *)(param_1[1] + 0x58)) {
    *(undefined4 *)(param_1[1] + 0x58) = 0x41a00000;
  }
  local_84 = -fStack_78;
  fStack_80 = fStack_74;
  fStack_7c = fStack_70;
  (*DAT_10121e58)(&local_84,&fStack_6c,&fStack_30,&fStack_3c);
  return;
}

