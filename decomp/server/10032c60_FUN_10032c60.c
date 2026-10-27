
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10032c60(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  float10 fVar6;
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
  undefined1 auStack_38 [16];
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_8;
  
  iVar3 = 0;
  switch(*(undefined4 *)(*(int *)(param_1 + 4) + 0x184)) {
  case 1:
    iVar3 = (*DAT_10121f70)(0,4);
    break;
  case 2:
    iVar3 = (*DAT_10121f70)(0,5);
    iVar3 = iVar3 + 0xd;
    break;
  case 3:
    iVar3 = (*DAT_10121f70)(0,5);
    iVar3 = iVar3 + 0x13;
    break;
  case 4:
    iVar3 = (*DAT_10121f70)(0,2);
    iVar3 = iVar3 + 0x19;
    break;
  case 5:
    iVar3 = (*DAT_10121f70)(0,4);
    iVar3 = iVar3 + 0x1c;
    break;
  case 6:
    iVar3 = (*DAT_10121f70)(0,1);
    iVar3 = iVar3 + 0xb;
    break;
  case 7:
    iVar3 = (*DAT_10121f70)(0,1);
    iVar3 = iVar3 + 0x21;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x184) == 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x110);
  }
  else {
    uVar5 = (&DAT_1011bb7c)[iVar3 * 2];
  }
  if (*(int *)(iVar1 + 0x1c8) == 0) {
    fStack_5c = *(float *)(iVar1 + 8);
    fStack_58 = *(float *)(iVar1 + 0xc);
    fStack_54 = *(float *)(iVar1 + 0x10);
  }
  else {
    pfVar4 = FUN_10058750(&fStack_44,param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x1c8)));
    fStack_5c = *pfVar4;
    fStack_58 = pfVar4[1];
    fStack_54 = pfVar4[2];
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x1d0) == 0) {
    FUN_100af200(iVar3 + 0x50);
    fStack_68 = *(float *)(DAT_10122044 + 0x28);
    fStack_64 = *(float *)(DAT_10122044 + 0x2c);
    fStack_60 = *(float *)(DAT_10122044 + 0x30);
  }
  else {
    pfVar4 = FUN_10058820(&fStack_44,param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar3 + 0x1d0)));
    fStack_68 = *pfVar4;
    fStack_64 = pfVar4[1];
    fStack_60 = pfVar4[2];
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
  if (iVar3 == 0) {
    fStack_48 = SQRT(fStack_68 * fStack_68 + fStack_60 * fStack_60 + fStack_64 * fStack_64);
    if (fStack_48 == _DAT_100dd5f8) {
      fStack_4c = 0.0;
      fStack_48 = 1.0;
      fStack_68 = _DAT_100dd5f8;
    }
    else {
      fStack_48 = _DAT_100dd618 / fStack_48;
      fStack_68 = fStack_48 * fStack_68;
      fStack_4c = fStack_64 * fStack_48;
      fStack_48 = fStack_60 * fStack_48;
    }
    fStack_68 = fStack_68 * _DAT_100e3b10;
    fStack_64 = fStack_4c * _DAT_100e3b10;
    fStack_3c = fStack_48 * _DAT_100e3b10;
  }
  else {
    fVar6 = FUN_100588f0(DAT_10122044,param_2,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar3));
    fStack_68 = (float)((float10)fStack_68 * fVar6);
    fStack_64 = (float)((float10)fStack_64 * fVar6);
    fStack_3c = (float)((float10)fStack_60 * fVar6);
    fStack_50 = fStack_68;
    fStack_4c = fStack_64;
    fStack_48 = fStack_3c;
  }
  fStack_44 = fStack_5c + fStack_68;
  fStack_40 = fStack_58 + fStack_64;
  fStack_3c = fStack_54 + fStack_3c;
  FUN_100afc60(&fStack_5c,&fStack_44,1,0,auStack_38);
  if (fStack_28 != (float)_DAT_100dd628) {
    sVar2 = (*DAT_10121f24)(iStack_8);
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0xd);
    (*DAT_10121edc)(uStack_24);
    (*DAT_10121edc)(uStack_20);
    (*DAT_10121edc)(uStack_1c);
    (*DAT_10121ed0)(uVar5);
    (*DAT_10121ed0)((int)sVar2);
    if (sVar2 != 0) {
      if (iStack_8 != 0) {
        iStack_8 = iStack_8 + 0x80;
      }
      (*DAT_10121ed0)(*(undefined4 *)(iStack_8 + 0xb4));
    }
    (*DAT_10121ec4)();
  }
  return;
}

