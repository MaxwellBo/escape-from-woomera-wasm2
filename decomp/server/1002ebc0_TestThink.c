
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTestEffect::TestThink(void) */

void __thiscall CTestEffect::TestThink(CTestEffect *this)

{
  CTestEffect *pCVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *this_00;
  int iVar5;
  CTestEffect *pCVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [20];
  undefined4 auStack_24 [9];
  
                    /* 0x2ebc0  243  ?TestThink@CTestEffect@@QAEXXZ */
  fVar2 = *DAT_10122044;
  fVar3 = *(float *)(this + 400);
  iVar5 = 0;
  if (*(int *)(this + 0xcc) < 0x18) {
    this_00 = FUN_100295c0(0x10102c0c,100);
    iVar4 = *(int *)(this + 4);
    local_5c = *(float *)(iVar4 + 8);
    local_58 = *(float *)(iVar4 + 0xc);
    local_54 = *(float *)(iVar4 + 0x10);
    fVar7 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar12 = (float)fVar7;
    fVar7 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar11 = (float)fVar7;
    fVar7 = (float10)(*DAT_10121f74)(0xbf800000,0x3f800000);
    fVar8 = SQRT((float10)fVar12 * (float10)fVar12 +
                 (float10)fVar11 * (float10)fVar11 + fVar7 * fVar7);
    if (fVar8 == (float10)_DAT_100dd5f8) {
      fVar12 = 1.0;
      fVar11 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar8 = (float10)_DAT_100dd618 / fVar8;
      fVar12 = (float)(fVar8 * (float10)fVar12);
      fVar11 = (float)(fVar8 * (float10)fVar11);
      fVar10 = (float)(fVar8 * fVar7);
    }
    FUN_10001d60(&fStack_50,fVar10,fVar11,fVar12);
    fStack_40 = fStack_4c * _DAT_100ddaf4;
    fStack_3c = fStack_48 * _DAT_100ddaf4;
    fStack_50 = fStack_50 * _DAT_100ddaf4 + local_5c;
    fStack_4c = local_58 + fStack_40;
    fStack_48 = local_54 + fStack_3c;
    FUN_100afc60(&local_5c,&fStack_50,1,*(undefined4 *)(*(int *)(this + 4) + 0x208),auStack_38);
    FUN_10029700(this_00,&local_5c,auStack_24);
    *(undefined4 *)(this_00[1] + 0x150) = 0x437f0000;
    *(undefined4 *)(this_00[1] + 0x154) = 0x43340000;
    *(undefined4 *)(this_00[1] + 0x158) = 0x42c80000;
    *(undefined4 *)(this_00[1] + 0x144) = 0x42c80000;
    *(undefined4 *)(this_00[1] + 0x134) = 0x41400000;
    *(float *)(this + *(int *)(this + 0xcc) * 4 + 0x130) = *DAT_10122044;
    *(undefined4 **)(this + *(int *)(this + 0xcc) * 4 + 0xd0) = this_00;
    *(int *)(this + 0xcc) = *(int *)(this + 0xcc) + 1;
  }
  if ((float)_DAT_100de538 <= fVar2 - fVar3) {
    iVar5 = 0;
    if (0 < *(int *)(this + 0xcc)) {
      pCVar6 = this + 0xd0;
      do {
        FUN_100b0ef0(*(int *)pCVar6);
        iVar5 = iVar5 + 1;
        pCVar6 = pCVar6 + 4;
      } while (iVar5 < *(int *)(this + 0xcc));
    }
    fVar2 = *DAT_10122044;
    *(undefined4 *)(this + 0xcc) = 0;
    *(float *)(this + 400) = fVar2;
    *(undefined4 *)(this + 0x74) = 0;
    return;
  }
  if (0 < *(int *)(this + 0xcc)) {
    pCVar6 = this + 0x130;
    do {
      lVar9 = __ftol();
      pCVar1 = pCVar6 + -0x60;
      iVar5 = iVar5 + 1;
      pCVar6 = pCVar6 + 4;
      *(float *)(*(int *)(*(int *)pCVar1 + 4) + 0x14c) = (float)(int)lVar9;
    } while (iVar5 < *(int *)(this + 0xcc));
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

