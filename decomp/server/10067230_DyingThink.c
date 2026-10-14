
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNihilanth::DyingThink(void) */

void __thiscall CNihilanth::DyingThink(CNihilanth *this)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
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
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
                    /* 0x67230  85  ?DyingThink@CNihilanth@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10008240((int *)this);
  FUN_10007fc0((int)this,0.0);
  if (*(int *)(*(int *)(this + 4) + 0x170) == 0) {
    (**(code **)(*(int *)this + 0x218))();
    *(undefined4 *)(*(int *)(this + 4) + 0x170) = 1;
    *(undefined4 *)(this + 0x354) = *(undefined4 *)(this + 0x35c);
  }
  if (*(int *)(*(int *)(this + 4) + 0x170) == 1) {
    FUN_10068b70((int)this);
    iVar3 = *(int *)(this + 4);
    if (ABS(*(float *)(iVar3 + 0x10) - *(float *)(this + 0x35c)) < (float)_DAT_100df828) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0;
      FUN_10098c10((uint *)(this + 0x534),(int *)this,this,1,0x3f800000);
      *(undefined4 *)(*(int *)(this + 4) + 0x170) = 2;
    }
  }
  if (*(int *)(this + 0xd4) != 0) {
    iVar3 = *(int *)(this + 4);
    fVar5 = (float10)(*DAT_10121f74)(0xc2c80000,0x42c80000);
    *(float *)(iVar3 + 0x60) = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x60));
    if (*(float *)(*(int *)(this + 4) + 0x60) < _DAT_100de49c) {
      *(undefined4 *)(*(int *)(this + 4) + 0x60) = 0xc2c80000;
    }
    if (_DAT_100dd61c < *(float *)(*(int *)(this + 4) + 0x60)) {
      *(undefined4 *)(*(int *)(this + 4) + 0x60) = 0x42c80000;
    }
    uVar2 = FUN_10008160(this,&DAT_10112470);
    *(undefined4 *)(*(int *)(this + 4) + 0x128) = uVar2;
  }
  iVar3 = *(int *)(this + 0x430);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
    if (*(float *)(iVar4 + 0x14c) <= _DAT_100dd5f8) {
      FUN_100b0ef0(iVar3);
      *(undefined4 *)(this + 0x430) = 0;
    }
    else {
      fVar1 = *(float *)(iVar4 + 0x14c) - _DAT_100de4ac;
      if (fVar1 < _DAT_100dd5f8) {
        fVar1 = _DAT_100dd5f8;
      }
      *(float *)(iVar4 + 0x14c) = fVar1;
    }
  }
  FUN_100af210((float *)(*(int *)(this + 4) + 0x50));
  iVar3 = (*DAT_10121f70)(1,4);
  do {
    fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fStack_84 = (float)fVar5;
    fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fStack_88 = (float)fVar5;
    fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fStack_8c = (float)fVar5;
  } while ((float)_DAT_100dd628 <
           fStack_84 * fStack_84 + fStack_88 * fStack_88 + fStack_8c * fStack_8c);
  uVar2 = (*DAT_10121f70)(1,4);
  switch(uVar2) {
  case 1:
    fVar1 = (float)_DAT_100dd648;
    FUN_10001d60(&fStack_54,*(float *)(DAT_10122044 + 0x34) + *(float *)(DAT_10122044 + 0x34),
                 *(float *)(DAT_10122044 + 0x38) + *(float *)(DAT_10122044 + 0x38),
                 *(float *)(DAT_10122044 + 0x3c) + *(float *)(DAT_10122044 + 0x3c));
    fStack_8c = fStack_54 + fStack_8c;
    fStack_88 = fStack_50 + fStack_88;
    fStack_84 = fStack_4c + ABS(fStack_84) * fVar1;
    break;
  case 2:
    if (fStack_8c * *(float *)(DAT_10122044 + 0x28) +
        fStack_88 * *(float *)(DAT_10122044 + 0x2c) + fStack_84 * *(float *)(DAT_10122044 + 0x30) <
        _DAT_100dd5f8) {
      fStack_8c = fStack_8c * _DAT_100df2b0;
      fStack_88 = fStack_88 * _DAT_100df2b0;
      fStack_84 = fStack_84 * _DAT_100df2b0;
    }
    FUN_10001d60(&fStack_6c,*(float *)(DAT_10122044 + 0x28) + *(float *)(DAT_10122044 + 0x28),
                 *(float *)(DAT_10122044 + 0x2c) + *(float *)(DAT_10122044 + 0x2c),
                 *(float *)(DAT_10122044 + 0x30) + *(float *)(DAT_10122044 + 0x30));
    fStack_8c = fStack_6c + fStack_8c;
    fStack_88 = fStack_68 + fStack_88;
    fStack_84 = fStack_64 + fStack_84;
    break;
  case 3:
    if (_DAT_100dd5f8 <
        fStack_8c * *(float *)(DAT_10122044 + 0x40) +
        fStack_88 * *(float *)(DAT_10122044 + 0x44) + fStack_84 * *(float *)(DAT_10122044 + 0x48)) {
      fStack_8c = fStack_8c * _DAT_100df2b0;
      fStack_88 = fStack_88 * _DAT_100df2b0;
      fStack_84 = fStack_84 * _DAT_100df2b0;
    }
    FUN_10001d60(&fStack_78,*(float *)(DAT_10122044 + 0x40) + *(float *)(DAT_10122044 + 0x40),
                 *(float *)(DAT_10122044 + 0x44) + *(float *)(DAT_10122044 + 0x44),
                 *(float *)(DAT_10122044 + 0x48) + *(float *)(DAT_10122044 + 0x48));
    fStack_8c = fStack_8c - fStack_78;
    fStack_88 = fStack_88 - fStack_74;
    fStack_84 = fStack_84 - fStack_70;
    break;
  case 4:
    if (fStack_8c * *(float *)(DAT_10122044 + 0x40) +
        fStack_88 * *(float *)(DAT_10122044 + 0x44) + fStack_84 * *(float *)(DAT_10122044 + 0x48) <
        _DAT_100dd5f8) {
      fStack_8c = fStack_8c * _DAT_100df2b0;
      fStack_88 = fStack_88 * _DAT_100df2b0;
      fStack_84 = fStack_84 * _DAT_100df2b0;
    }
    fStack_8c = *(float *)(DAT_10122044 + 0x40) + *(float *)(DAT_10122044 + 0x40) + fStack_8c;
    fStack_88 = *(float *)(DAT_10122044 + 0x44) + *(float *)(DAT_10122044 + 0x44) + fStack_88;
    fStack_84 = *(float *)(DAT_10122044 + 0x48) + *(float *)(DAT_10122044 + 0x48) + fStack_84;
  }
  FUN_10008450(this,iVar3 + -1,&fStack_60,auStack_48);
  fStack_74 = fStack_88 * _DAT_100de488;
  fStack_70 = fStack_84 * _DAT_100de488;
  fStack_6c = fStack_8c * _DAT_100de488 + fStack_60;
  fStack_68 = fStack_5c + fStack_74;
  fStack_64 = fStack_58 + fStack_70;
  FUN_100afc60(&fStack_60,&fStack_6c,1,*(undefined4 *)(*(int *)(this + 4) + 0x208),auStack_3c);
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(1);
  iVar4 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  (*DAT_10121ed0)(iVar4 + iVar3 * 0x1000);
  (*DAT_10121edc)(uStack_28);
  (*DAT_10121edc)(uStack_24);
  (*DAT_10121edc)(uStack_20);
  (*DAT_10121ed0)((int)DAT_10131d06);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec8)(5);
  (*DAT_10121ec8)(100);
  (*DAT_10121ec8)(0x78);
  (*DAT_10121ec8)(0x40);
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec4)();
  FUN_10008450(this,0,&fStack_60,auStack_48);
  iVar4 = FUN_1001a1f0(0x10112448,&fStack_60,(undefined4 *)(*(int *)(this + 4) + 0x50),
                       *(undefined4 *)(*(int *)(this + 4) + 0x208));
  fVar5 = (float10)(*DAT_10121f74)(0xbf333333,0x3f333333);
  fStack_78 = (float)fVar5;
  fVar6 = (float10)(*DAT_10121f74)(0xbf333333,0x3f333333);
  iVar3 = *(int *)(iVar4 + 4);
  fVar5 = (float10)_DAT_100ed280;
  *(float *)(iVar3 + 0x20) = fStack_78 * _DAT_100ed280;
  *(float *)(iVar3 + 0x24) = (float)(fVar6 * fVar5);
  *(undefined4 *)(iVar3 + 0x28) = 0x44160000;
  FUN_1006a420(iVar4);
  return;
}

