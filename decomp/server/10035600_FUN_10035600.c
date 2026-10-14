
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10035600(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 uVar6;
  int iVar7;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(param_1[1] + 0xb8) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  iVar7 = param_1[1];
  if (*(int *)(iVar7 + 0x1c8) == 0) {
    pfVar4 = (float *)(iVar7 + 8);
  }
  else {
    pfVar4 = FUN_10058750(&fStack_44,(int)param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar7 + 0x1c8)));
  }
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  fStack_48 = fVar3 - _DAT_100ddac8;
  fStack_3c = fVar3 + _DAT_100de45c;
  fStack_50 = fVar1;
  fStack_4c = fVar2;
  fStack_44 = fVar1;
  fStack_40 = fVar2;
  FUN_100afc60(&fStack_44,&fStack_50,1,*(undefined4 *)(param_1[1] + 0x208),auStack_38);
  if (fStack_28 == (float)_DAT_100dd628) {
    iVar7 = param_1[1];
    *(float *)(iVar7 + 8) = fVar1;
    *(float *)(iVar7 + 0xc) = fVar2;
    *(float *)(iVar7 + 0x10) = fVar3;
  }
  else {
    iVar7 = param_1[1];
    fVar1 = (float)(param_1[0xc2] + -0x18);
    fStack_44 = fVar1 * fStack_14;
    fStack_40 = fStack_10 * fVar1;
    fStack_50 = fStack_44 * _DAT_100e4374;
    fStack_4c = fStack_40 * _DAT_100e4374;
    fVar1 = fVar1 * fStack_c * _DAT_100e4374;
    *(float *)(iVar7 + 8) = fStack_50 + fStack_24;
    *(float *)(iVar7 + 0xc) = fStack_20 + fStack_4c;
    *(float *)(iVar7 + 0x10) = fStack_1c + fVar1;
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) == 0) {
    fVar5 = (float10)(*DAT_10121f74)(0,0x3f800000);
    if ((float10)_DAT_100dd648 <= fVar5) {
      iVar7 = 0xc;
    }
    else {
      iVar7 = 0xb;
    }
    FUN_100b0450((int)auStack_38,iVar7);
  }
  iVar7 = param_1[1];
  if ((*(byte *)(iVar7 + 0x1a0) & 4) == 0) {
    (*DAT_10121ec0)(5,0x17,iVar7 + 8);
    (*DAT_10121ec8)(3);
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0x10));
    (*DAT_10121ed0)((int)DAT_10131d04);
    uVar6 = (undefined1)param_1[0xc3];
  }
  else {
    (*DAT_10121ec0)(5,0x17,iVar7 + 8,0);
    (*DAT_10121ec8)(3);
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 8));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0xc));
    (*DAT_10121edc)(*(undefined4 *)(param_1[1] + 0x10));
    (*DAT_10121ed0)((int)DAT_10131d04);
    uVar6 = 0;
  }
  (*DAT_10121ec8)(uVar6);
  (*DAT_10121ec8)(0xf);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec4)();
  fVar1 = (float)param_1[1];
  if ((*(byte *)((int)fVar1 + 0x1a0) & 1) == 0) {
    FUN_1001fe50(param_1,fVar1,fVar1,(float)param_1[0xc2],0,0x40);
  }
  param_1[0x1d] = (int)CEnvExplosion::Smoke;
  (**(code **)(*param_1 + 8))(0x3e99999a);
  if (((*(byte *)(param_1[1] + 0x1a0) & 0x20) == 0) && (iVar7 = (*DAT_10121f70)(0,3), 0 < iVar7)) {
    do {
      FUN_1001a1f0(0x10108740,(undefined4 *)(param_1[1] + 8),&uStack_18,0);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

