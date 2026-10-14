
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002dcc0(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float afStack_18 [6];
  
  pfVar5 = (float *)&stack0xffffffe4;
  iVar9 = *(int *)(param_1 + 0x30);
  afStack_18[3] = *(float *)(iVar9 + 0xb48);
  afStack_18[4] = *(float *)(iVar9 + 0xb4c);
  afStack_18[5] = *(float *)(iVar9 + 0xb50);
  afStack_18[2] = (float)*(undefined4 *)(iVar9 + 0x2d4);
  afStack_18[0] = *(float *)(iVar9 + 0x2cc);
  afStack_18[1] = (float)*(undefined4 *)(iVar9 + 0x2d0);
  if (*(int *)(iVar9 + 0x308) == 4) {
    fVar2 = _DAT_10059a18;
    if (((float)*(double *)(param_1 + 8) < *(float *)(iVar9 + 0x30c) + _DAT_10059eb0) &&
       (*(float *)(iVar9 + 0x30c) != *(float *)(iVar9 + 0xb10))) {
      fVar2 = ((float)*(double *)(param_1 + 8) - *(float *)(iVar9 + 0x30c)) /
              (*(float *)(iVar9 + 0x30c) - *(float *)(iVar9 + 0xb10));
    }
    fVar3 = _DAT_10059a18;
    if (*(int *)(param_1 + 0x18) != 0) {
      fVar3 = fVar2 - (float)_DAT_10059a10;
    }
    pfVar6 = (float *)(iVar9 + 0xb1c);
    iVar8 = 3;
    pfVar4 = afStack_18 + 3;
    do {
      pfVar1 = pfVar6 + 0xb;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      iVar8 = iVar8 + -1;
      *pfVar4 = (*pfVar1 - fVar2) * fVar3 + *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (iVar8 != 0);
    pfVar6 = (float *)(iVar9 + 0xb28);
    iVar9 = 3;
    do {
      pfVar5 = pfVar5 + 1;
      fVar2 = pfVar6[0xb] - *pfVar6;
      if (fVar2 <= _DAT_100601f4) {
        if (fVar2 < _DAT_100601f0) {
          fVar2 = fVar2 + _DAT_1006015c;
        }
      }
      else {
        fVar2 = fVar2 - _DAT_1006015c;
      }
      pfVar6 = pfVar6 + 1;
      iVar9 = iVar9 + -1;
      *pfVar5 = fVar2 * fVar3 + *pfVar5;
    } while (iVar9 != 0);
  }
  else if (*(int *)(iVar9 + 0x308) != 0) {
    afStack_18[0] = *(float *)(iVar9 + 0xb54);
    afStack_18[1] = *(float *)(iVar9 + 0xb58);
    afStack_18[2] = *(float *)(iVar9 + 0xb5c);
  }
  afStack_18[0] = -afStack_18[0];
  FUN_1002cdb0(afStack_18,*(float **)(param_1 + 0x40a0));
  iVar9 = (*DAT_100b2198)();
  if (iVar9 == 0) {
    _DAT_100af4c8 = *(undefined4 *)(param_1 + 0x4074);
    _DAT_100af4cc = *(undefined4 *)(param_1 + 0x4078);
    _DAT_100af4d0 = *(undefined4 *)(param_1 + 0x407c);
    _DAT_100af4d8 = *(undefined4 *)(param_1 + 0x4068);
    _DAT_100af4dc = *(undefined4 *)(param_1 + 0x406c);
    _DAT_100af4e0 = *(undefined4 *)(param_1 + 0x4070);
    FUN_10031270((float *)&DAT_100af4d8);
    _DAT_100af4e8 = *(undefined4 *)(param_1 + 0x4080);
    _DAT_100af4ec = *(undefined4 *)(param_1 + 0x4084);
    _DAT_100af4f0 = *(undefined4 *)(param_1 + 0x4088);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0xc) = afStack_18[3] - *(float *)(param_1 + 0x408c);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0x1c) = afStack_18[4] - *(float *)(param_1 + 0x4090);
    *(float *)(*(int *)(param_1 + 0x40a0) + 0x2c) = afStack_18[5] - *(float *)(param_1 + 0x4094);
    FUN_1002cf20((float *)&DAT_100af4c8,*(float **)(param_1 + 0x40a0),*(float **)(param_1 + 0x40a4))
    ;
    if (param_2 != 0) {
      iVar9 = 0x20;
      do {
        *(float *)(iVar9 + -0x20 + *(int *)(param_1 + 0x40a4)) =
             *(float *)(param_1 + 0x4060) * *(float *)(iVar9 + -0x20 + *(int *)(param_1 + 0x40a4)) *
             (float)_DAT_10060340;
        *(float *)(iVar9 + -0x10 + *(int *)(param_1 + 0x40a4)) =
             *(float *)(iVar9 + -0x10 + *(int *)(param_1 + 0x40a4)) * *(float *)(param_1 + 0x4064) *
             (float)_DAT_10060340;
        pfVar5 = (float *)(iVar9 + *(int *)(param_1 + 0x40a4));
        pfVar6 = (float *)(iVar9 + *(int *)(param_1 + 0x40a4));
        iVar9 = iVar9 + 4;
        *pfVar6 = *pfVar5 * (float)_DAT_10060340;
      } while (iVar9 < 0x30);
    }
  }
  *(float *)(*(int *)(param_1 + 0x40a0) + 0xc) = afStack_18[3];
  *(float *)(*(int *)(param_1 + 0x40a0) + 0x1c) = afStack_18[4];
  *(float *)(*(int *)(param_1 + 0x40a0) + 0x2c) = afStack_18[5];
  if (*(float *)(*(int *)(param_1 + 0x30) + 0x2f0) != _DAT_10059a18) {
    iVar9 = 0;
    do {
      iVar7 = 3;
      iVar8 = iVar9;
      do {
        pfVar5 = (float *)(*(int *)(param_1 + 0x40a0) + iVar8);
        iVar8 = iVar8 + 4;
        iVar7 = iVar7 + -1;
        *pfVar5 = *(float *)(*(int *)(param_1 + 0x30) + 0x2f0) * *pfVar5;
      } while (iVar7 != 0);
      iVar9 = iVar9 + 0x10;
    } while (iVar9 < 0x30);
  }
  return;
}

