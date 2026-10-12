
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10040260(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined3 extraout_var;
  float *pfVar10;
  float *pfVar11;
  undefined3 extraout_var_00;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float10 fVar15;
  longlong lVar16;
  float fStack_68;
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
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (1 < (int)param_1[0x2b]) {
    *(undefined4 *)(DAT_100b7810 + 0xc) = 0;
    *(undefined4 *)(DAT_100b7818 + 0xc) = 0;
    *(undefined4 *)(DAT_100b7814 + 0xc) = 0;
  }
  FUN_1003fe00((int)param_1);
  iVar7 = (*DAT_100a50bc)();
  iVar8 = (*DAT_100a50c0)();
  *(undefined4 *)(iVar8 + 0x2f8) = *(undefined4 *)(iVar7 + 0x2f8);
  *(undefined4 *)(iVar8 + 0x304) = *(undefined4 *)(iVar7 + 0x304);
  *(undefined1 *)(iVar8 + 0x300) = *(undefined1 *)(iVar7 + 0x300);
  *(undefined1 *)(iVar8 + 0x301) = *(undefined1 *)(iVar7 + 0x301);
  *(undefined1 *)(iVar8 + 0x302) = *(undefined1 *)(iVar7 + 0x302);
  *(undefined4 *)(iVar8 + 0x2fc) = *(undefined4 *)(iVar7 + 0x2fc);
  fVar15 = FUN_1003fb80((int)param_1);
  fVar3 = (float)fVar15;
  if (DAT_100b6ff0 != 0) {
    *param_1 = DAT_100b6f88;
    param_1[1] = DAT_100b6f8c;
    param_1[2] = DAT_100b6f90;
    param_1[0x19] = DAT_100b6f88;
    param_1[0x1a] = DAT_100b6f8c;
    param_1[0x1b] = DAT_100b6f90;
  }
  *param_1 = param_1[0x19] + param_1[0x1c];
  param_1[1] = param_1[0x1d] + param_1[0x1a];
  param_1[2] = param_1[0x1e] + param_1[0x1b] + fVar3;
  if (DAT_100b6fc8 != 0) {
    param_1[0x20] = DAT_100b6764;
    param_1[0x21] = DAT_100b6768;
    param_1[0x22] = DAT_100b676c;
  }
  fStack_48 = param_1[0x20] - _DAT_100b6774;
  fStack_44 = param_1[0x21] - _DAT_100b6778;
  fStack_40 = param_1[0x22] - _DAT_100b677c;
  fVar15 = FUN_100264c0(&fStack_48);
  if (fVar15 != (float10)_DAT_1005d2a8) {
    *(float *)(&DAT_100b73f8 + (DAT_100b77fc & 0x3f) * 0xc) = param_1[0x20];
    *(float *)(&DAT_100b73fc + (DAT_100b77fc & 0x3f) * 0xc) = param_1[0x21];
    *(float *)(&DAT_100b7400 + (DAT_100b77fc & 0x3f) * 0xc) = param_1[0x22];
    *(float *)(&DAT_100b76f8 + (DAT_100b77fc & 0x3f) * 4) = param_1[0x10];
    DAT_100b77fc = DAT_100b77fc + 1;
    _DAT_100b6774 = param_1[0x20];
    _DAT_100b6778 = param_1[0x21];
    _DAT_100b677c = param_1[0x22];
  }
  if (((DAT_100a9854 != 0) && (*(float *)(DAT_100a9854 + 0xc) != _DAT_10059a18)) &&
     (((byte)DAT_100b6fec & 2) != 0)) {
    if (*(float *)(DAT_100a9854 + 0xc) < (float)_DAT_1005d2a8) {
      (*DAT_100a5084)(s_cl_vsmoothing_10078fec,0);
    }
    fVar4 = param_1[0x10] - *(float *)(DAT_100a9854 + 0xc);
    iVar12 = 1;
    uVar14 = DAT_100b77fc - 2;
    do {
      if (*(float *)(&DAT_100b76f8 + (uVar14 & 0x3f) * 4) <= fVar4) {
        if ((iVar12 < 0x3f) &&
           (uVar13 = uVar14 & 0x3f, *(float *)(&DAT_100b76f8 + uVar13 * 4) != (float)_DAT_1005d2a8))
        {
          uVar14 = uVar14 + 1 & 0x3f;
          if ((float)_DAT_1005d2a8 <
              *(float *)(&DAT_100b76f8 + uVar14 * 4) - *(float *)(&DAT_100b76f8 + uVar13 * 4)) {
            fVar4 = (fVar4 - *(float *)(&DAT_100b76f8 + uVar13 * 4)) /
                    (*(float *)(&DAT_100b76f8 + uVar14 * 4) - *(float *)(&DAT_100b76f8 + uVar13 * 4)
                    );
            if ((float)_DAT_10059a10 < fVar4) {
              fVar4 = (float)_DAT_10059a10;
            }
            FUN_10026370((float *)(&DAT_100b73f8 + uVar13 * 0xc),
                         (float *)(&DAT_100b73f8 + uVar14 * 0xc),param_1 + 0x20,fVar4);
            DAT_100b6764 = param_1[0x20];
            DAT_100b6768 = param_1[0x21];
            DAT_100b676c = param_1[0x22];
          }
        }
        break;
      }
      iVar12 = iVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (iVar12 < 0x3f);
  }
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  param_1[3] = param_1[0x20];
  (*DAT_100a50cc)();
  (*DAT_100a50d0)(param_1,param_1 + 3,0x3f800000);
  fStack_68 = 0.0;
  *param_1 = *param_1 + (float)_DAT_10064d10;
  param_1[1] = param_1[1] + (float)_DAT_10064d10;
  param_1[2] = param_1[2] + (float)_DAT_10064d10;
  if (1 < (int)param_1[0x15]) {
    lVar16 = __ftol();
    fStack_68 = (float)lVar16;
    if (((param_1[0x30] != 0.0) && (iVar12 = (*DAT_100a50d8)(param_1 + 0x19), -1 < iVar12)) &&
       ((iVar12 < (int)param_1[0x2e] &&
        ((iVar12 = (*DAT_100a50c4)(iVar12), iVar12 != 0 && (*(int *)(iVar12 + 0xb94) != 0)))))) {
      lVar16 = __ftol();
      fStack_68 = (float)lVar16;
    }
    fVar4 = (float)(int)fStack_68;
    fStack_60 = *param_1;
    fStack_5c = param_1[1];
    if (param_1[0x15] == 2.8026e-45) {
      fStack_58 = param_1[2] - fVar4;
      iVar12 = 0;
      if (0 < (int)fStack_68) {
        do {
          iVar9 = (*DAT_100a50d4)(&fStack_60,0);
          if (-3 < iVar9) break;
          fStack_58 = fStack_58 + _DAT_10059eb0;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)fStack_68);
      }
      fVar4 = fStack_58 + fVar4;
    }
    else {
      fStack_58 = param_1[2] + fVar4;
      iVar12 = 0;
      if (0 < (int)fStack_68) {
        do {
          iVar9 = (*DAT_100a50d4)(&fStack_60,0);
          if (iVar9 < -2) break;
          fStack_58 = fStack_58 - _DAT_10059eb0;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)fStack_68);
      }
      fVar4 = fStack_58 - fVar4;
    }
    fStack_68 = fVar4 - param_1[2];
  }
  param_1[2] = fStack_68 + param_1[2];
  FUN_100400e0((int)param_1);
  FUN_10040080((int)param_1);
  fStack_3c = param_1[0x20];
  fStack_38 = param_1[0x21];
  fStack_34 = param_1[0x22];
  (*DAT_100a5050)(&fStack_3c,param_1 + 6,param_1 + 9,param_1 + 0xc);
  iVar12 = 3;
  pfVar10 = param_1 + 9;
  do {
    iVar12 = iVar12 + -1;
    pfVar10[-9] = *(float *)(DAT_100b7818 + 0xc) * *pfVar10 +
                  pfVar10[-3] * *(float *)(DAT_100b7810 + 0xc) +
                  pfVar10[3] * *(float *)(DAT_100b7814 + 0xc) + pfVar10[-9];
    pfVar10 = pfVar10 + 1;
  } while (iVar12 != 0);
  bVar6 = CL_IsThirdPerson();
  if (CONCAT31(extraout_var,bVar6) != 0) {
    fStack_58 = 0.0;
    fStack_5c = 0.0;
    fStack_60 = 0.0;
    CL_CameraOffset(&fStack_60);
    fStack_54 = fStack_60;
    fStack_50 = fStack_5c;
    fStack_4c = 0.0;
    (*DAT_100a5050)(&fStack_54,afStack_24,auStack_c,auStack_18);
    iVar12 = 3;
    pfVar10 = param_1;
    do {
      iVar12 = iVar12 + -1;
      *pfVar10 = *pfVar10 - fStack_58 * *(float *)(((int)afStack_24 - (int)param_1) + (int)pfVar10);
      pfVar10 = pfVar10 + 1;
    } while (iVar12 != 0);
  }
  pfVar1 = (float *)(iVar8 + 0xb54);
  *pfVar1 = param_1[0x20];
  *(float *)(iVar8 + 0xb58) = param_1[0x21];
  *(float *)(iVar8 + 0xb5c) = param_1[0x22];
  FUN_1003ff80((int)param_1);
  pfVar2 = (float *)(iVar8 + 0xb48);
  *pfVar2 = param_1[0x19];
  *(float *)(iVar8 + 0xb4c) = param_1[0x1a];
  *(float *)(iVar8 + 0xb50) = param_1[0x1b];
  *(float *)(iVar8 + 0xb50) = fStack_68 + *(float *)(iVar8 + 0xb50);
  *pfVar2 = *pfVar2 + param_1[0x1c];
  *(float *)(iVar8 + 0xb4c) = param_1[0x1d] + *(float *)(iVar8 + 0xb4c);
  *(float *)(iVar8 + 0xb50) = param_1[0x1e] + *(float *)(iVar8 + 0xb50);
  (*DAT_100a50d0)(pfVar2,pfVar1,0x3f666666);
  pfVar10 = param_1 + 6;
  iVar12 = 3;
  pfVar11 = pfVar2;
  do {
    fVar4 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    iVar12 = iVar12 + -1;
    *pfVar11 = fVar4 * fVar3 * (float)_DAT_1005fa60 + *pfVar11;
    pfVar11 = pfVar11 + 1;
  } while (iVar12 != 0);
  *(float *)(iVar8 + 0xb50) = fVar3 + *(float *)(iVar8 + 0xb50);
  *(float *)(iVar8 + 0xb58) = *(float *)(iVar8 + 0xb58) - fVar3 * (float)_DAT_100599f0;
  *(float *)(iVar8 + 0xb5c) = *(float *)(iVar8 + 0xb5c) - fVar3;
  *pfVar1 = *pfVar1 - fVar3 * (float)_DAT_1005ac70;
  fVar3 = *(float *)(iVar8 + 0xb50) - _DAT_10059eb0;
  *(float *)(iVar8 + 0xb50) = fVar3;
  if (param_1[0x27] == 110.0) {
    *(float *)(iVar8 + 0xb50) = fVar3 + _DAT_10059eb0;
  }
  else if (param_1[0x27] == 100.0) {
    *(float *)(iVar8 + 0xb50) = fVar3 + _DAT_10059ea0;
  }
  else if (param_1[0x27] == 90.0) {
    *(float *)(iVar8 + 0xb50) = fVar3 + _DAT_10059eb0;
  }
  else if (param_1[0x27] == 80.0) {
    *(float *)(iVar8 + 0xb50) = fVar3 + (float)_DAT_100599f0;
  }
  fVar3 = param_1[3];
  param_1[3] = param_1[0x28] + fVar3;
  fVar4 = param_1[4];
  param_1[4] = param_1[0x29] + fVar4;
  fVar5 = param_1[5];
  param_1[5] = param_1[0x2a] + fVar5;
  param_1[3] = param_1[0x28] + fVar3 + _DAT_100b6fb8;
  param_1[4] = param_1[0x29] + fVar4 + _DAT_100b6fbc;
  param_1[5] = param_1[0x2a] + fVar5 + _DAT_100b6fc0;
  FUN_100417a0(param_1[0xf],(float *)&DAT_100b6fb8);
  if (((param_1[0x31] != 0.0) || (param_1[0x14] == 0.0)) ||
     (param_1[0x1b] - _DAT_100b7820 <= _DAT_10059a18)) {
    _DAT_100b7820 = param_1[0x1b];
  }
  else {
    fVar3 = param_1[0x10] - _DAT_100b6f98;
    if (param_1[0x10] - _DAT_100b6f98 < _DAT_10059a18) {
      fVar3 = _DAT_10059a18;
    }
    _DAT_100b7820 = fVar3 * _DAT_1005ace4 + _DAT_100b7820;
    if (param_1[0x1b] < _DAT_100b7820) {
      _DAT_100b7820 = param_1[0x1b];
    }
    if (_DAT_1006023c < param_1[0x1b] - _DAT_100b7820) {
      _DAT_100b7820 = param_1[0x1b] - _DAT_1006023c;
    }
    param_1[2] = (_DAT_100b7820 - param_1[0x1b]) + param_1[2];
    *(float *)(iVar8 + 0xb50) = (_DAT_100b7820 - param_1[0x1b]) + *(float *)(iVar8 + 0xb50);
  }
  fStack_60 = param_1[0x19] - _DAT_100b7800;
  fStack_5c = param_1[0x1a] - _DAT_100b7804;
  fStack_58 = param_1[0x1b] - _DAT_100b7808;
  fVar15 = FUN_100264c0(&fStack_60);
  if (fVar15 != (float10)_DAT_1005d2a8) {
    *(float *)(&DAT_100b6ff8 + (DAT_100b77f8 & 0x3f) * 0xc) = param_1[0x19];
    *(float *)(&DAT_100b6ffc + (DAT_100b77f8 & 0x3f) * 0xc) = param_1[0x1a];
    *(float *)(&DAT_100b7000 + (DAT_100b77f8 & 0x3f) * 0xc) = param_1[0x1b];
    *(float *)(&DAT_100b72f8 + (DAT_100b77f8 & 0x3f) * 4) = param_1[0x10];
    DAT_100b77f8 = DAT_100b77f8 + 1;
    _DAT_100b7800 = param_1[0x19];
    _DAT_100b7804 = param_1[0x1a];
    _DAT_100b7808 = param_1[0x1b];
  }
  if (((DAT_100a9854 != 0) && (*(float *)(DAT_100a9854 + 0xc) != _DAT_10059a18)) &&
     ((((byte)DAT_100b6fec & 4) != 0 || ((param_1[0x31] != 0.0 && (1 < (int)param_1[0x2b])))))) {
    if (*(float *)(DAT_100a9854 + 0xc) < (float)_DAT_1005d2a8) {
      (*DAT_100a5084)(s_cl_vsmoothing_10078fec,0);
    }
    fVar3 = param_1[0x10] - *(float *)(DAT_100a9854 + 0xc);
    iVar12 = 1;
    uVar14 = DAT_100b77f8 - 2;
    do {
      if (*(float *)(&DAT_100b72f8 + (uVar14 & 0x3f) * 4) <= fVar3) {
        if ((iVar12 < 0x3f) &&
           (uVar13 = uVar14 & 0x3f, *(float *)(&DAT_100b72f8 + uVar13 * 4) != (float)_DAT_1005d2a8))
        {
          uVar14 = uVar14 + 1 & 0x3f;
          if ((float)_DAT_1005d2a8 <
              *(float *)(&DAT_100b72f8 + uVar14 * 4) - *(float *)(&DAT_100b72f8 + uVar13 * 4)) {
            fVar3 = (fVar3 - *(float *)(&DAT_100b72f8 + uVar13 * 4)) /
                    (*(float *)(&DAT_100b72f8 + uVar14 * 4) - *(float *)(&DAT_100b72f8 + uVar13 * 4)
                    );
            if ((float)_DAT_10059a10 < fVar3) {
              fVar3 = (float)_DAT_10059a10;
            }
            iVar9 = uVar13 * 0xc;
            iVar12 = uVar14 * 0xc;
            fStack_60 = *(float *)(&DAT_100b6ff8 + iVar12) - *(float *)(&DAT_100b6ff8 + iVar9);
            fStack_5c = *(float *)(&DAT_100b6ffc + iVar12) - *(float *)(&DAT_100b6ffc + iVar9);
            fStack_58 = *(float *)(&DAT_100b7000 + iVar12) - *(float *)(&DAT_100b7000 + iVar9);
            FUN_100312c0((float *)(&DAT_100b6ff8 + iVar9),fVar3,&fStack_60,&fStack_30);
            fVar15 = FUN_100264c0(&fStack_60);
            if (fVar15 < (float10)_DAT_1005acb0) {
              fStack_30 = fStack_30 - param_1[0x19];
              fStack_2c = fStack_2c - param_1[0x1a];
              fStack_28 = fStack_28 - param_1[0x1b];
              param_1[0x19] = fStack_30 + param_1[0x19];
              param_1[0x1a] = fStack_2c + param_1[0x1a];
              param_1[0x1b] = fStack_28 + param_1[0x1b];
              *param_1 = fStack_30 + *param_1;
              param_1[1] = fStack_2c + param_1[1];
              param_1[2] = fStack_28 + param_1[2];
              *pfVar2 = fStack_30 + *pfVar2;
              *(float *)(iVar8 + 0xb4c) = fStack_2c + *(float *)(iVar8 + 0xb4c);
              *(float *)(iVar8 + 0xb50) = fStack_28 + *(float *)(iVar8 + 0xb50);
              DAT_100b6f88 = param_1[0x19];
              DAT_100b6f8c = param_1[0x1a];
              DAT_100b6f90 = param_1[0x1b];
            }
          }
        }
        break;
      }
      iVar12 = iVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (iVar12 < 0x3f);
  }
  DAT_100b6fd8 = param_1[3];
  DAT_100b6fdc = param_1[4];
  DAT_100b6fe0 = param_1[5];
  fStack_60 = DAT_100b6fd8;
  fStack_5c = DAT_100b6fdc;
  fStack_58 = DAT_100b6fe0;
  bVar6 = CL_IsThirdPerson();
  fVar3 = _DAT_100601f4;
  if (CONCAT31(extraout_var_00,bVar6) != 0) {
    param_1[4] = fStack_50;
    param_1[3] = fStack_54;
    param_1[5] = fStack_4c;
    if (fStack_54 <= fVar3) {
      fVar3 = fStack_54;
      if (fStack_54 < _DAT_100601f0) {
        fVar3 = fStack_54 + _DAT_1006015c;
      }
    }
    else {
      fVar3 = fStack_54 - (float)_DAT_10060160;
    }
    fVar3 = fVar3 * (float)_DAT_10064d08;
    *(float *)(iVar7 + 0xb54) = fVar3;
    *(float *)(iVar7 + 0x2cc) = fVar3;
    *(float *)(iVar7 + 0x178) = fVar3;
    *(float *)(iVar7 + 0xb28) = fVar3;
  }
  if (((int)param_1[0x2b] < (int)param_1[0x2c]) &&
     (iVar7 = (*DAT_100a50c4)(param_1[0x2c]), iVar7 != 0)) {
    *param_1 = *(float *)(iVar7 + 0xb48);
    param_1[1] = *(float *)(iVar7 + 0xb4c);
    param_1[2] = *(float *)(iVar7 + 0xb50);
    DAT_100b6fd8 = *(float *)(iVar7 + 0xb54);
    param_1[3] = DAT_100b6fd8;
    DAT_100b6fdc = *(float *)(iVar7 + 0xb58);
    param_1[4] = DAT_100b6fdc;
    DAT_100b6fe0 = *(float *)(iVar7 + 0xb5c);
    param_1[5] = DAT_100b6fe0;
  }
  _DAT_100b6f98 = param_1[0x10];
  _DAT_100b6738 = *param_1;
  _DAT_100b673c = param_1[1];
  _DAT_100b6740 = param_1[2];
  return;
}

