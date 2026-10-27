
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCineBlood::BloodGush(void) */

void __thiscall CCineBlood::BloodGush(CCineBlood *this)

{
  float *pfVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float unaff_EDI;
  float10 fVar5;
  int iVar6;
  int iVar7;
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
  
                    /* 0x459f0  18  ?BloodGush@CCineBlood@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_100af200(*(int *)(this + 4) + 0x50);
  iVar6 = *(int *)(this + 4);
  bVar2 = *(float *)(iVar6 + 0x160) < _DAT_100dd5f8;
  *(float *)(iVar6 + 0x160) = *(float *)(iVar6 + 0x160) - _DAT_100dd618;
  if (bVar2) {
    (*DAT_10121e60)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  }
  fVar5 = (float10)(*DAT_10121f74)(0,0x3f800000);
  if ((float10)_DAT_100df298 <= fVar5) {
    iVar6 = (*DAT_10121f70)(0x32,0x96);
    iVar7 = 0xf7;
    puVar4 = (undefined4 *)FUN_100b03b0(&fStack_48);
    FUN_100b01f0((undefined4 *)(*(int *)(this + 4) + 8),puVar4,iVar7,iVar6);
  }
  else {
    iVar7 = 10;
    iVar6 = 0xf7;
    uVar3 = FUN_100b03b0(&fStack_48);
    FUN_100b02a0((undefined4 *)(*(int *)(this + 4) + 8),uVar3,iVar6,iVar7);
  }
  fVar5 = (float10)(*DAT_10121f74)(0,0x3f800000);
  iVar6 = DAT_10122044;
  if (fVar5 < (float10)_DAT_100e1860) {
    pfVar1 = (float *)(DAT_10122044 + 0x28);
    fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar5 = fVar5 * (float10)_DAT_100ddad8;
    FUN_10001d60(&fStack_54,(float)(fVar5 * (float10)*pfVar1),
                 (float)(fVar5 * (float10)*(float *)(iVar6 + 0x2c)),
                 (float)(fVar5 * (float10)*(float *)(iVar6 + 0x30)));
    fVar5 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar5 = fVar5 * (float10)_DAT_100ddad8;
    FUN_10001d60(&stack0xffffffa0,(float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x40)),
                 (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x44)),
                 (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x48)));
    iVar6 = *(int *)(this + 4);
    fStack_40 = (fStack_4c + (fStack_58 - _DAT_100dd618)) * _DAT_100dd658 + *(float *)(iVar6 + 0x10)
    ;
    fStack_44 = (fStack_50 + fStack_5c) * _DAT_100dd658 + *(float *)(iVar6 + 0xc);
    fStack_48 = (unaff_EDI + fStack_54) * _DAT_100dd658 + *(float *)(iVar6 + 8);
    fStack_4c = *(float *)(iVar6 + 0x10) + _DAT_100ddb10;
    fStack_50 = *(float *)(iVar6 + 0xc);
    fStack_54 = *(float *)(iVar6 + 8);
    FUN_100afc60(&fStack_54,&fStack_48,1,*(undefined4 *)(iVar6 + 0x208),auStack_3c);
    if (fStack_2c != (float)_DAT_100dd628) {
      FUN_100b0400((int)auStack_3c,0xf7);
    }
  }
  return;
}

