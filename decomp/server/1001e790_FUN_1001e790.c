
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_1001e790(int *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [16];
  float fStack_2c;
  
  if (*(int *)(param_1[1] + 0x170) != 0) {
    return param_1[0x74];
  }
  pfVar3 = (float *)(**(code **)(*param_1 + 0xf8))(&fStack_44);
  fStack_60 = *pfVar3;
  bVar2 = false;
  fStack_5c = pfVar3[1];
  fStack_58 = pfVar3[2];
  iVar5 = 0x24;
  FUN_100af200(param_1[1] + 0x50);
  iVar4 = param_1[0x75];
  fVar1 = _DAT_10121df8 * _DAT_100df2b0 * *(float *)(DAT_10122044 + 0x28) +
          _DAT_10121dfc * _DAT_100df2b0 * *(float *)(DAT_10122044 + 0x2c) +
          _DAT_10121e00 * _DAT_100df2b0 * *(float *)(DAT_10122044 + 0x30);
  if (iVar4 == 0) {
    bVar2 = true;
    if ((float)_DAT_100e0eb8 < fVar1) {
      iVar5 = 0x26;
      goto LAB_1001e8aa;
    }
  }
  else {
    if (iVar4 == 1) {
      iVar5 = 0x42;
      goto LAB_1001e8aa;
    }
    if (iVar4 == 3) {
      iVar5 = 0x44;
      goto LAB_1001e8aa;
    }
    bVar2 = true;
    if ((float)_DAT_100e0eb8 < fVar1) {
      iVar5 = 0x26;
      goto LAB_1001e8aa;
    }
  }
  bVar2 = true;
  if (fVar1 <= (float)_DAT_100e0eb0) {
    bVar2 = true;
    iVar5 = 0x25;
  }
LAB_1001e8aa:
  iVar4 = FUN_10008100(param_1,iVar5);
  if (iVar4 == -1) {
    if (bVar2) {
      iVar5 = 0x24;
    }
    else if (fVar1 <= (float)_DAT_100e0eb8) {
      if (fVar1 <= (float)_DAT_100e0eb0) {
        iVar5 = 0x25;
      }
    }
    else {
      iVar5 = 0x26;
    }
  }
  iVar4 = FUN_10008100(param_1,iVar5);
  if (iVar4 != -1) {
    if (iVar5 == 0x26) {
      fStack_50 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10;
      fStack_4c = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10;
      fStack_48 = fStack_60 + *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10;
      fStack_44 = fStack_5c + fStack_50;
      fStack_40 = fStack_58 + fStack_4c;
      FUN_100afc90(&fStack_60,&fStack_48,0,3,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
      if (fStack_2c == (float)_DAT_100dd628) {
        return 0x26;
      }
      return 0x24;
    }
    if (iVar5 != 0x25) {
      return iVar5;
    }
    fStack_44 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddb10;
    fStack_40 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddb10;
    fStack_54 = fStack_60 - *(float *)(DAT_10122044 + 0x28) * _DAT_100ddb10;
    fStack_50 = fStack_5c - fStack_44;
    fStack_4c = fStack_58 - fStack_40;
    FUN_100afc90(&fStack_60,&fStack_54,0,3,*(undefined4 *)(param_1[1] + 0x208),auStack_3c);
    if (fStack_2c == (float)_DAT_100dd628) {
      return 0x25;
    }
  }
  return 0x24;
}

