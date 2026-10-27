
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10025c60(int *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  float *pfVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  longlong lVar10;
  int unaff_retaddr;
  float fVar11;
  undefined1 *puVar12;
  char *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float afStack_58 [11];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  int iStack_c;
  
  FUN_100af200(*(int *)(param_1[0x37] + 4) + 0x74);
  (**(code **)(*(int *)param_1[0x37] + 0x214))();
  afStack_58[2] = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddac8;
  afStack_58[3] = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddac8;
  fStack_60 = fStack_6c + *(float *)(DAT_10122044 + 0x28) * _DAT_100ddac8;
  fStack_5c = local_68 + afStack_58[2];
  afStack_58[0] = fStack_64 + afStack_58[3];
  FUN_100afc60(&fStack_6c,&fStack_60,0,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
               afStack_58 + 7);
  if (((float)_DAT_100dd628 <= fStack_2c) &&
     (FUN_100afc90(&fStack_6c,&fStack_60,0,3,*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),
                   afStack_58 + 7), fStack_2c < (float)_DAT_100dd628)) {
    iVar1 = iStack_c;
    if (((iStack_c == 0) && (iVar1 = (*DAT_10121f1c)(), iVar1 == 0)) ||
       ((*(int **)(iVar1 + 0x7c) == (int *)0x0 ||
        (iVar1 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0xbc))(), iVar1 != 0)))) {
      afStack_58[1] = 16.0;
      afStack_58[2] = 16.0;
      afStack_58[3] = 18.0;
      afStack_58[4] = -16.0;
      afStack_58[5] = -16.0;
      afStack_58[6] = -18.0;
      FUN_100259d0(&fStack_6c,afStack_58 + 7,(int)(afStack_58 + 4),afStack_58 + 1,
                   *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208));
    }
    fStack_60 = fStack_28;
    fStack_5c = fStack_24;
    afStack_58[0] = fStack_20;
  }
  (*DAT_10121ff4)();
  if ((float)_DAT_100dd628 <= fStack_2c) {
    if (unaff_retaddr == 0) {
      return 0;
    }
    fVar8 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar8 + (float10)_DAT_100dd648);
    FUN_1007c580((void *)param_1[0x37],5);
    return 0;
  }
  uVar2 = param_1[0x48] & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  param_1[0x48] = param_1[0x48] + 1;
  if (uVar2 == 0xffffffff) {
    iVar1 = *param_1;
LAB_10025ecd:
    (**(code **)(iVar1 + 0x17c))();
  }
  else if (uVar2 == 0) {
    (**(code **)(*param_1 + 0x17c))();
  }
  else if (uVar2 == 1) {
    iVar1 = *param_1;
    goto LAB_10025ecd;
  }
  FUN_1007c580((void *)param_1[0x37],5);
  if ((iStack_c == 0) && (iStack_c = (*DAT_10121f1c)(), iStack_c == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iStack_c + 0x7c);
  }
  FUN_100b2bd0();
  fVar11 = (float)param_1[0x3e] + _DAT_100dd618;
  fVar8 = FUN_100ae400();
  if (((float10)fVar11 < fVar8) || (iVar1 = (**(code **)(*DAT_10121db8 + 0x18))(), iVar1 != 0)) {
    iVar1 = *piVar5;
    FUN_10003850(&stack0xffffff6c,(undefined4 *)(DAT_10122044 + 0x28));
  }
  else {
    iVar1 = *piVar5;
    FUN_10003850(&stack0xffffff6c,(undefined4 *)(DAT_10122044 + 0x28));
  }
  (**(code **)(iVar1 + 0x5c))();
  FUN_100b2bf0(*(undefined4 *)(param_1[0x37] + 4),*(undefined4 *)(param_1[0x37] + 4));
  if (((piVar5 == (int *)0x0) || (iVar1 = (**(code **)(*piVar5 + 0x4c))(), iVar1 == 0)) ||
     (iVar1 = (**(code **)(*piVar5 + 0x4c))(), iVar1 == 1)) {
    fVar16 = 7.00649e-45;
    pfVar7 = &fStack_64;
    fVar15 = 2.0;
    pvVar3 = (void *)FUN_10002250(&stack0xffffff84,(float *)&stack0xffffff90,
                                  (float *)&stack0xffffff78);
    fVar14 = 2.5712558e-29;
    pfVar4 = (float *)FUN_10002280(pvVar3,pfVar7,fVar15);
    puVar12 = &stack0xffffff54;
    fVar11 = 2.5712606e-29;
    FUN_1000b550(&stack0xffffff78,(float *)&stack0xffffff54,pfVar4);
    FUN_10003850(&stack0xffffff48,(undefined4 *)&stack0xffffff78);
    fVar8 = FUN_10094fd0((int)afStack_58,fVar11,puVar12,pfVar4,fVar14,pfVar7,fVar15,fVar16);
    fStack_1c = (float)fVar8;
    iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar1 != 0) {
      fStack_1c = 1.0;
    }
    iVar1 = (*DAT_10121f70)();
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar1 = (*DAT_10121f70)();
      pcVar13 = s_weapons_cbar_hit1_wav_10106748;
      pvVar3 = extraout_ECX_00;
LAB_10026195:
      FUN_10094b20(pvVar3,uVar6,3,pcVar13,fStack_1c,0x3f4ccccd,0,iVar1 + 0x62);
    }
    else if (iVar1 == 1) {
      uVar6 = *(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208);
      iVar1 = (*DAT_10121f70)();
      pcVar13 = s_weapons_cbar_hit2_wav_10106730;
      pvVar3 = extraout_ECX;
      goto LAB_10026195;
    }
    pfVar7 = afStack_58;
    pfVar4 = (float *)(param_1 + 0x49);
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar4 = pfVar4 + 1;
    }
    goto LAB_100261b5;
  }
  iVar1 = (*DAT_10121f70)();
  if (iVar1 == 0) {
    pcVar13 = s_weapons_cbar_hitbod1_wav_10106714;
LAB_10026046:
    FUN_10094b20((void *)param_1[0x37],*(undefined4 *)(*(int *)(param_1[0x37] + 4) + 0x208),3,
                 pcVar13,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar1 == 1) {
      pcVar13 = s_weapons_cbar_hitbod2_wav_101066f8;
      goto LAB_10026046;
    }
    if (iVar1 == 2) {
      pcVar13 = s_weapons_cbar_hitbod3_wav_101066dc;
      goto LAB_10026046;
    }
  }
  *(undefined4 *)(param_1[0x37] + 0x314) = 0x80;
  iVar1 = (**(code **)(*piVar5 + 0xb8))();
  if (iVar1 == 0) {
    fVar8 = FUN_100ae400();
    param_1[0x3e] = (int)(float)(fVar8 + (float10)_DAT_100dd5f0);
    return 1;
  }
LAB_100261b5:
  lVar10 = __ftol();
  *(int *)(param_1[0x37] + 0x314) = (int)lVar10;
  fVar9 = FUN_100ae400();
  fVar8 = (float10)_DAT_100dd5f0;
  param_1[0x1d] = (int)CCrowbar::Smack;
  param_1[0x3e] = (int)(float)(fVar9 + fVar8);
  (**(code **)(*param_1 + 8))();
  return 1;
}

