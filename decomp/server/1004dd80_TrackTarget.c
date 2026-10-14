
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CHornet::TrackTarget(void) */

void __thiscall CHornet::TrackTarget(CHornet *this)

{
  CHornet *this_00;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined3 extraout_var_00;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined3 extraout_var_01;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar6;
  float10 fVar7;
  void *pvVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x4dd80  258  ?TrackTarget@CHornet@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  if (*(float *)(this + 0x308) < *DAT_10122044) {
    *(undefined4 *)(this + 0x78) = 0;
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  this_00 = this + 0x160;
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    (**(code **)(*(int *)this + 0x11c))(0x200);
    iVar2 = (**(code **)(*(int *)this + 0x144))();
    FUN_10019420(this_00,iVar2);
  }
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
LAB_1004de50:
    iVar2 = *(int *)(this + 4);
    fVar11 = *(float *)(this + 0x310);
    fStack_18 = fVar11 * *(float *)(iVar2 + 0x20) * _DAT_100de1f0;
    fStack_c = fStack_18 + *(float *)(this + 0x2a8);
    fStack_8 = fVar11 * *(float *)(iVar2 + 0x24) * _DAT_100de1f0 + *(float *)(this + 0x2ac);
    fStack_4 = fVar11 * *(float *)(iVar2 + 0x28) * _DAT_100de1f0 + *(float *)(this + 0x2b0);
    *(float *)(this + 0x2a8) = fStack_c;
    *(float *)(this + 0x2ac) = fStack_8;
    *(float *)(this + 0x2b0) = fStack_4;
  }
  else {
    iVar2 = *(int *)this;
    uVar3 = FUN_10019410((uint *)this_00);
    iVar2 = (**(code **)(iVar2 + 0x110))(uVar3);
    if (iVar2 == 0) goto LAB_1004de50;
    piVar4 = (int *)FUN_10019460((uint *)this_00);
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x104))(&fStack_c,*(int *)(this + 4) + 8);
    *(undefined4 *)(this + 0x2a8) = *puVar5;
    *(undefined4 *)(this + 0x2ac) = puVar5[1];
    *(undefined4 *)(this + 0x2b0) = puVar5[2];
  }
  iVar2 = *(int *)(this + 4);
  fVar11 = *(float *)(this + 0x2a8) - *(float *)(iVar2 + 8);
  fStack_14 = *(float *)(this + 0x2ac) - *(float *)(iVar2 + 0xc);
  fStack_10 = *(float *)(this + 0x2b0) - *(float *)(iVar2 + 0x10);
  fVar10 = SQRT(fVar11 * fVar11 + fStack_14 * fStack_14 + fStack_10 * fStack_10);
  if (fVar10 == _DAT_100dd5f8) {
    fVar13 = 1.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
  }
  else {
    fVar10 = _DAT_100dd618 / fVar10;
    fVar13 = fStack_10 * fVar10;
    fVar12 = fStack_14 * fVar10;
    fVar10 = fVar10 * fVar11;
  }
  FUN_10001d60(&fStack_18,fVar10,fVar12,fVar13);
  iVar2 = *(int *)(this + 4);
  if ((float)_DAT_100dfb80 <=
      SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
           *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
           *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20))) {
    fVar11 = SQRT(*(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28) +
                  *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                  *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20));
    if (fVar11 == _DAT_100dd5f8) {
      fVar10 = 1.0;
      fVar13 = 0.0;
      fVar11 = 0.0;
    }
    else {
      fVar11 = _DAT_100dd618 / fVar11;
      fVar10 = fVar11 * *(float *)(iVar2 + 0x28);
      fVar13 = fVar11 * *(float *)(iVar2 + 0x24);
      fVar11 = fVar11 * *(float *)(iVar2 + 0x20);
    }
    FUN_10001d60(&fStack_c,fVar11,fVar13,fVar10);
    fStack_24 = fStack_c;
    fStack_20 = fStack_8;
    fVar11 = fStack_4;
  }
  else {
    fStack_24 = fStack_18;
    fStack_20 = fStack_14;
    fVar11 = fStack_10;
  }
  fStack_28 = fStack_18 * fStack_24 + fStack_14 * fStack_20 + fStack_10 * fVar11;
  if (fStack_28 < (float)_DAT_100dd648) {
    iVar2 = (*DAT_10121f70)(0,2);
    if (iVar2 == 0) {
      pvVar6 = *(void **)(this + 4);
      pvVar8 = *(void **)((int)pvVar6 + 0x208);
      pcVar9 = s_hornet_ag_buzz1_wav_1010ed94;
    }
    else if (iVar2 == 1) {
      pvVar8 = *(void **)(*(int *)(this + 4) + 0x208);
      pcVar9 = s_hornet_ag_buzz2_wav_1010ed80;
      pvVar6 = extraout_ECX;
    }
    else {
      if (iVar2 != 2) goto LAB_1004e0ba;
      pvVar6 = *(void **)(*(int *)(this + 4) + 0x208);
      pcVar9 = s_hornet_ag_buzz3_wav_1010ed6c;
      pvVar8 = pvVar6;
    }
    FUN_10094b20(pvVar6,pvVar8,2,pcVar9,0x3f4ccccd,0x3f4ccccd,0,100);
  }
LAB_1004e0ba:
  if ((fStack_28 <= _DAT_100dd5f8) && (*(int *)(this + 0x30c) == 0)) {
    fStack_28 = 0.25;
  }
  fStack_24 = fStack_18 + fStack_24;
  fStack_8 = fStack_14 + fStack_20;
  fStack_4 = fStack_10 + fVar11;
  fVar11 = SQRT(fStack_24 * fStack_24 + fStack_8 * fStack_8 + fStack_4 * fStack_4);
  if (fVar11 == _DAT_100dd5f8) {
    fVar10 = 1.0;
    fVar13 = 0.0;
    fStack_24 = 0.0;
  }
  else {
    fVar11 = _DAT_100dd618 / fVar11;
    fVar10 = fStack_4 * fVar11;
    fVar13 = fStack_8 * fVar11;
    fStack_24 = fStack_24 * fVar11;
  }
  FUN_10001d60(&fStack_c,fStack_24,fVar13,fVar10);
  iVar2 = *(int *)(this + 4);
  *(float *)(iVar2 + 0x20) = fStack_c;
  *(float *)(iVar2 + 0x24) = fStack_8;
  *(float *)(iVar2 + 0x28) = fStack_4;
  iVar2 = *(int *)(this + 4);
  if ((*(int *)(iVar2 + 0x198) != 0) && ((*(byte *)(*(int *)(iVar2 + 0x198) + 0x224) & 0x20) != 0))
  {
    fVar7 = (float10)(*DAT_10121f74)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar2 + 0x20) = (float)(fVar7 + (float10)*(float *)(iVar2 + 0x20));
    iVar2 = *(int *)(this + 4);
    fVar7 = (float10)(*DAT_10121f74)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar2 + 0x24) = (float)(fVar7 + (float10)*(float *)(iVar2 + 0x24));
    iVar2 = *(int *)(this + 4);
    fVar7 = (float10)(*DAT_10121f74)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar2 + 0x28) = (float)(fVar7 + (float10)*(float *)(iVar2 + 0x28));
  }
  if (*(int *)(this + 0x30c) == 0) {
    fStack_4 = fStack_28 * *(float *)(this + 0x310);
    iVar2 = *(int *)(this + 4);
    fStack_c = fStack_4 * *(float *)(iVar2 + 0x20);
    fStack_8 = fStack_4 * *(float *)(iVar2 + 0x24);
    fStack_4 = fStack_4 * *(float *)(iVar2 + 0x28);
    *(float *)(iVar2 + 0x20) = fStack_c;
    *(float *)(iVar2 + 0x24) = fStack_8;
    *(float *)(iVar2 + 0x28) = fStack_4;
    iVar2 = *(int *)this;
    fVar7 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3e99999a);
    (**(code **)(iVar2 + 8))((float)fVar7);
  }
  else if (*(int *)(this + 0x30c) == 1) {
    iVar2 = *(int *)(this + 4);
    fStack_4 = *(float *)(this + 0x310);
    fStack_c = fStack_4 * *(float *)(iVar2 + 0x20);
    fStack_8 = fStack_4 * *(float *)(iVar2 + 0x24);
    fStack_4 = fStack_4 * *(float *)(iVar2 + 0x28);
    *(float *)(iVar2 + 0x20) = fStack_c;
    *(float *)(iVar2 + 0x24) = fStack_8;
    *(float *)(iVar2 + 0x28) = fStack_4;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  puVar5 = (undefined4 *)FUN_100ae830(&fStack_c,*(int *)(this + 4) + 0x20);
  iVar2 = *(int *)(this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *puVar5;
  *(undefined4 *)(iVar2 + 0x54) = puVar5[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar5[2];
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 2;
  bVar1 = FUN_10019450((uint *)this_00);
  if (CONCAT31(extraout_var_01,bVar1) == 0) {
    return;
  }
  iVar2 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar2 != 0) {
    return;
  }
  if (fStack_28 < (float)_DAT_100df2a8) {
    return;
  }
  iVar2 = *(int *)(this + 4);
  fVar11 = *(float *)(iVar2 + 8) - *(float *)(this + 0x2a8);
  fVar13 = *(float *)(iVar2 + 0xc) - *(float *)(this + 0x2ac);
  fVar10 = *(float *)(iVar2 + 0x10) - *(float *)(this + 0x2b0);
  if (_DAT_100ddae4 < SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar10 * fVar10)) {
    return;
  }
  (*DAT_10121ec0)(4,0x17,iVar2 + 8,0);
  (*DAT_10121ec8)(0x11);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10121ed0)(DAT_10122058);
  (*DAT_10121ec8)(2);
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec4)();
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    pvVar8 = *(void **)(*(int *)(this + 4) + 0x208);
    pcVar9 = s_hornet_ag_buzz1_wav_1010ed94;
    pvVar6 = extraout_ECX_00;
  }
  else if (iVar2 == 1) {
    pvVar6 = *(void **)(*(int *)(this + 4) + 0x208);
    pcVar9 = s_hornet_ag_buzz2_wav_1010ed80;
    pvVar8 = pvVar6;
  }
  else {
    if (iVar2 != 2) goto LAB_1004e41d;
    pvVar6 = *(void **)(this + 4);
    pcVar9 = s_hornet_ag_buzz3_wav_1010ed6c;
    pvVar8 = *(void **)((int)pvVar6 + 0x208);
  }
  FUN_10094b20(pvVar6,pvVar8,2,pcVar9,0x3f4ccccd,0x3f4ccccd,0,100);
LAB_1004e41d:
  iVar2 = *(int *)(this + 4);
  fStack_c = *(float *)(iVar2 + 0x20);
  fStack_c = fStack_c + fStack_c;
  fStack_8 = *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x24);
  *(float *)(iVar2 + 0x20) = fStack_c;
  fStack_4 = *(float *)(iVar2 + 0x28) + *(float *)(iVar2 + 0x28);
  *(float *)(iVar2 + 0x24) = fStack_8;
  *(float *)(iVar2 + 0x28) = fStack_4;
  (**(code **)(*(int *)this + 8))(0x3f800000);
  *(float *)(this + 0x308) = *DAT_10122044;
  return;
}

