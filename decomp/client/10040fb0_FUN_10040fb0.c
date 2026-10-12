
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10040fb0(float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  (*DAT_100a50bc)();
  iVar2 = (*DAT_100a50c0)();
  *param_1 = param_1[0x19];
  param_1[1] = param_1[0x1a];
  param_1[2] = param_1[0x1b];
  if (DAT_100b6ff0 == 0) {
    DAT_100b6f8c = param_1[1];
    DAT_100b6f90 = param_1[2];
    DAT_100b6f88 = param_1[0x19];
  }
  else {
    *param_1 = DAT_100b6f88;
    param_1[1] = DAT_100b6f8c;
    param_1[2] = DAT_100b6f90;
  }
  param_1[3] = param_1[0x20];
  param_1[4] = param_1[0x21];
  param_1[5] = param_1[0x22];
  if (DAT_100b6fc8 == 0) {
    DAT_100b6768 = param_1[4];
    DAT_100b676c = param_1[5];
    DAT_100b6764 = param_1[0x20];
  }
  else {
    param_1[3] = DAT_100b6764;
    param_1[4] = DAT_100b6768;
    param_1[5] = DAT_100b676c;
  }
  if (param_1[0x38] == 0.0) {
    fStack_18 = param_1[3] - _DAT_100b674c;
    fStack_14 = param_1[4] - _DAT_100b6750;
    fStack_10 = param_1[5] - _DAT_100b6754;
    fVar7 = FUN_100264c0(&fStack_18);
    if (fVar7 != (float10)_DAT_10059a18) {
      *(float *)(&DAT_100b6b80 + (DAT_100b6f84 & 0x3f) * 0xc) = param_1[3];
      *(float *)(&DAT_100b6b84 + (DAT_100b6f84 & 0x3f) * 0xc) = param_1[4];
      *(float *)(&DAT_100b6b88 + (DAT_100b6f84 & 0x3f) * 0xc) = param_1[5];
      *(float *)(&DAT_100b6e80 + (DAT_100b6f84 & 0x3f) * 4) = param_1[0x10];
      DAT_100b6f84 = DAT_100b6f84 + 1;
      _DAT_100b674c = param_1[3];
      _DAT_100b6750 = param_1[4];
      _DAT_100b6754 = param_1[5];
    }
    if (((DAT_100a9854 != 0) && (*(float *)(DAT_100a9854 + 0xc) != _DAT_10059a18)) &&
       (((byte)DAT_100b6fec & 2) != 0)) {
      fVar1 = param_1[0x10] - *(float *)(DAT_100a9854 + 0xc);
      iVar3 = 1;
      uVar6 = DAT_100b6f84 - 2;
      do {
        if (*(float *)(&DAT_100b6e80 + (uVar6 & 0x3f) * 4) <= fVar1) {
          if ((iVar3 < 0x3f) &&
             (uVar4 = uVar6 & 0x3f, *(float *)(&DAT_100b6e80 + uVar4 * 4) != (float)_DAT_1005d2a8))
          {
            (*DAT_100a5050)(&DAT_100b6b80 + uVar4 * 0xc,&fStack_24,0,0);
            uVar6 = uVar6 + 1 & 0x3f;
            (*DAT_100a5050)(&DAT_100b6b80 + uVar6 * 0xc,&fStack_c,0,0);
            fVar7 = FUN_100263f0(&fStack_24,&fStack_c);
            if (((float)_DAT_1005d2a8 <
                 *(float *)(&DAT_100b6e80 + uVar6 * 4) - *(float *)(&DAT_100b6e80 + uVar4 * 4)) &&
               ((float)fVar7 < _DAT_10060248)) {
              fVar1 = (fVar1 - *(float *)(&DAT_100b6e80 + uVar4 * 4)) /
                      (*(float *)(&DAT_100b6e80 + uVar6 * 4) - *(float *)(&DAT_100b6e80 + uVar4 * 4)
                      );
              if ((float)_DAT_10059a10 < fVar1) {
                fVar1 = (float)_DAT_10059a10;
              }
              FUN_10026370((float *)(&DAT_100b6b80 + uVar4 * 0xc),
                           (float *)(&DAT_100b6b80 + uVar6 * 0xc),&DAT_100b6764,fVar1);
              param_1[3] = DAT_100b6764;
              param_1[4] = DAT_100b6768;
              param_1[5] = DAT_100b676c;
            }
          }
          break;
        }
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (iVar3 < 0x3f);
    }
    fStack_18 = *param_1 - _DAT_100b6758;
    fStack_14 = param_1[1] - _DAT_100b675c;
    fStack_10 = param_1[2] - _DAT_100b6760;
    fVar7 = FUN_100264c0(&fStack_18);
    if (fVar7 != (float10)_DAT_1005d2a8) {
      *(float *)(&DAT_100b6780 + (DAT_100b6f80 & 0x3f) * 0xc) = *param_1;
      *(float *)(&DAT_100b6784 + (DAT_100b6f80 & 0x3f) * 0xc) = param_1[1];
      *(float *)(&DAT_100b6788 + (DAT_100b6f80 & 0x3f) * 0xc) = param_1[2];
      *(float *)(&DAT_100b6a80 + (DAT_100b6f80 & 0x3f) * 4) = param_1[0x10];
      DAT_100b6f80 = DAT_100b6f80 + 1;
      _DAT_100b6758 = *param_1;
      _DAT_100b675c = param_1[1];
      _DAT_100b6760 = param_1[2];
    }
    if (((DAT_100a9854 != 0) && (*(float *)(DAT_100a9854 + 0xc) != _DAT_10059a18)) &&
       (((byte)DAT_100b6fec & 4) != 0)) {
      fVar1 = param_1[0x10] - *(float *)(DAT_100a9854 + 0xc);
      iVar3 = 1;
      uVar6 = DAT_100b6f80 - 2;
      do {
        if (*(float *)(&DAT_100b6a80 + (uVar6 & 0x3f) * 4) <= fVar1) {
          if ((iVar3 < 0x3f) &&
             (uVar4 = uVar6 & 0x3f, *(float *)(&DAT_100b6a80 + uVar4 * 4) != (float)_DAT_1005d2a8))
          {
            uVar6 = uVar6 + 1 & 0x3f;
            if ((float)_DAT_1005d2a8 <
                *(float *)(&DAT_100b6a80 + uVar6 * 4) - *(float *)(&DAT_100b6a80 + uVar4 * 4)) {
              fVar1 = (fVar1 - *(float *)(&DAT_100b6a80 + uVar4 * 4)) /
                      (*(float *)(&DAT_100b6a80 + uVar6 * 4) - *(float *)(&DAT_100b6a80 + uVar4 * 4)
                      );
              if ((float)_DAT_10059a10 < fVar1) {
                fVar1 = (float)_DAT_10059a10;
              }
              iVar5 = uVar4 * 0xc;
              iVar3 = uVar6 * 0xc;
              fStack_24 = *(float *)(&DAT_100b6780 + iVar3) - *(float *)(&DAT_100b6780 + iVar5);
              fStack_20 = *(float *)(&DAT_100b6784 + iVar3) - *(float *)(&DAT_100b6784 + iVar5);
              fStack_1c = *(float *)(&DAT_100b6788 + iVar3) - *(float *)(&DAT_100b6788 + iVar5);
              FUN_100312c0((float *)(&DAT_100b6780 + iVar5),fVar1,&fStack_24,&fStack_c);
              fVar7 = FUN_100264c0(&fStack_24);
              if (fVar7 < (float10)_DAT_1005acb0) {
                fStack_20 = fStack_8 - param_1[0x1a];
                fStack_1c = fStack_4 - param_1[0x1b];
                DAT_100b6f88 = (fStack_c - param_1[0x19]) + *param_1;
                *param_1 = DAT_100b6f88;
                param_1[1] = fStack_20 + param_1[1];
                param_1[2] = fStack_1c + param_1[2];
                DAT_100b6f8c = param_1[1];
                DAT_100b6f90 = param_1[2];
              }
            }
          }
          break;
        }
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (iVar3 < 0x3f);
    }
  }
  _DAT_100b6fe4 = param_1[0x10];
  *(undefined4 *)(iVar2 + 0xb94) = 0;
  if (param_1[0x38] == 0.0) {
    if (DAT_100a412c == 4) {
      FUN_10040ef0(DAT_100a4a68,param_1,param_1 + 3);
    }
    else if (DAT_100a412c == 5) {
      param_1[0x39] = 1.4013e-45;
      fStack_c = param_1[0x20];
      _DAT_100a4a80 = param_1[0x21];
      _DAT_100a4a84 = param_1[0x22];
      _DAT_100a4a7c = fStack_c * _DAT_10060158 * _DAT_10064d24 + _DAT_10064d20;
      fStack_24 = _DAT_100a4a7c;
      fStack_20 = _DAT_100a4a80;
      fStack_1c = _DAT_100a4a84;
      fStack_8 = _DAT_100a4a80;
      fStack_4 = _DAT_100a4a84;
      FUN_10021200(&DAT_100a4118,param_1);
      param_1[3] = fStack_24;
      param_1[4] = fStack_20;
      param_1[5] = fStack_1c;
    }
    else {
      param_1[0x39] = 0.0;
    }
    if (DAT_100a4130 != 0) {
      param_1[0x38] = 1.4013e-45;
    }
    _DAT_100a4134 = 0;
  }
  else {
    lVar8 = __ftol();
    param_1[0x34] = (float)lVar8;
    lVar8 = __ftol();
    param_1[0x35] = (float)lVar8;
    lVar8 = __ftol();
    param_1[0x36] = (float)lVar8;
    lVar8 = __ftol();
    param_1[0x37] = (float)lVar8;
    param_1[0x38] = 0.0;
    param_1[0x39] = 0.0;
    if (DAT_100a4130 == 2) {
      FUN_10040ef0(DAT_100a4a68,param_1,param_1 + 3);
    }
    else if (DAT_100a4130 == 3) {
      param_1[0x39] = 1.4013e-45;
      fStack_c = param_1[0x20];
      _DAT_100a4a80 = param_1[0x21];
      _DAT_100a4a84 = param_1[0x22];
      _DAT_100a4a7c = fStack_c * _DAT_10060158 * _DAT_10064d24 + _DAT_10064d20;
      fStack_24 = _DAT_100a4a7c;
      fStack_20 = _DAT_100a4a80;
      fStack_1c = _DAT_100a4a84;
      fStack_8 = _DAT_100a4a80;
      fStack_4 = _DAT_100a4a84;
      FUN_10021200(&DAT_100a4118,param_1);
      param_1[3] = fStack_24;
      param_1[4] = fStack_20;
      param_1[5] = fStack_1c;
    }
    _DAT_100a4134 = 1;
  }
  DAT_100b6fd8 = param_1[3];
  DAT_100b6fdc = param_1[4];
  DAT_100b6fe0 = param_1[5];
  _DAT_100b6738 = *param_1;
  _DAT_100b673c = param_1[1];
  _DAT_100b6740 = param_1[2];
  return;
}

