
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBreakable::Die(void) */

void __thiscall CBreakable::Die(CBreakable *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float10 extraout_ST0;
  float10 fVar9;
  longlong lVar10;
  char *pcVar11;
  float *pfVar12;
  undefined *puVar13;
  float fVar14;
  undefined4 uVar15;
  undefined1 local_441;
  float fStack_440;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined4 uStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  int aiStack_400 [256];
  
                    /* 0x37790  71  ?Die@CBreakable@@QAEXXZ */
  local_441 = 0;
  iVar1 = (*DAT_10121f70)(0,0x1d);
  iVar1 = iVar1 + 0x5f;
  if ((0x61 < iVar1) && (iVar1 < 0x67)) {
    iVar1 = 100;
  }
  iVar2 = *(int *)(this + 4);
  (*DAT_10121f74)(0x3f59999a,0x3f800000);
  lVar10 = __ftol();
  uVar6 = (int)(uint)lVar10 >> 0x1f;
  fVar9 = (float10)(int)(((uint)lVar10 ^ uVar6) - uVar6) * (float10)_DAT_100dfb88 + extraout_ST0;
  fStack_440 = (float)fVar9;
  if ((float10)_DAT_100dd628 < fVar9) {
    fStack_440 = 1.0;
  }
  switch(*(undefined4 *)(this + 200)) {
  case 0:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      pcVar11 = s_debris_bustglass1_wav_10108d68;
LAB_10037861:
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,pcVar11
                   ,fStack_440,0x3f4ccccd,0,iVar1);
    }
    else if (iVar2 == 1) {
      pcVar11 = s_debris_bustglass2_wav_10108d38;
      goto LAB_10037861;
    }
    local_441 = 1;
    break;
  case 1:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      pcVar11 = s_debris_bustcrate1_wav_10108e3c;
LAB_100378ba:
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,pcVar11
                   ,fStack_440,0x3f4ccccd,0,iVar1);
    }
    else if (iVar2 == 1) {
      pcVar11 = s_debris_bustcrate2_wav_10108e10;
      goto LAB_100378ba;
    }
    local_441 = 8;
    break;
  case 2:
  case 6:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      pcVar11 = s_debris_bustmetal1_wav_10108db0;
LAB_10037913:
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,pcVar11
                   ,fStack_440,0x3f4ccccd,0,iVar1);
    }
    else if (iVar2 == 1) {
      pcVar11 = s_debris_bustmetal2_wav_10108d80;
      goto LAB_10037913;
    }
    local_441 = 2;
    break;
  case 3:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      pcVar11 = s_debris_bustflesh1_wav_10108df8;
LAB_1003796c:
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,pcVar11
                   ,fStack_440,0x3f4ccccd,0,iVar1);
    }
    else if (iVar2 == 1) {
      pcVar11 = s_debris_bustflesh2_wav_10108dc8;
      goto LAB_1003796c;
    }
    local_441 = 4;
    break;
  case 4:
  case 8:
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 == 0) {
      pcVar11 = s_debris_bustconcrete1_wav_10108cd4;
LAB_100379c2:
      FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),2,pcVar11
                   ,fStack_440,0x3f4ccccd,0,iVar1);
    }
    else if (iVar2 == 1) {
      pcVar11 = s_debris_bustconcrete2_wav_10108cb8;
      goto LAB_100379c2;
    }
    local_441 = 0x40;
    break;
  case 5:
    FUN_10094b20(*(void **)(iVar2 + 0x208),*(void **)(iVar2 + 0x208),2,
                 s_debris_bustceiling_wav_10108ca0,fStack_440,0x3f4ccccd,0,iVar1);
  }
  if (*(int *)(this + 0xcc) == 1) {
    fVar14 = _DAT_10121df8 * _DAT_100de484;
    fVar8 = _DAT_10121dfc * _DAT_100de484;
    fVar7 = _DAT_10121e00 * _DAT_100de484;
  }
  else {
    fVar14 = 0.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  iVar1 = *(int *)(this + 4);
  fStack_414 = (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * _DAT_100dd614;
  fStack_410 = (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * _DAT_100dd614;
  fStack_430 = (*(float *)(iVar1 + 0xe8) + *(float *)(iVar1 + 0xdc)) * _DAT_100dd614 +
               *(float *)(iVar1 + 8);
  fStack_42c = fStack_414 + *(float *)(iVar1 + 0xc);
  fStack_428 = fStack_410 + *(float *)(iVar1 + 0x10);
  (*DAT_10121ec0)(4,0x17,&fStack_430,0);
  (*DAT_10121ec8)(0x6c);
  (*DAT_10121edc)(fStack_430);
  (*DAT_10121edc)(fStack_42c);
  (*DAT_10121edc)(fStack_428);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xf4));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xf8));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)(this + 4) + 0xfc));
  (*DAT_10121edc)(fVar14);
  (*DAT_10121edc)(fVar8);
  (*DAT_10121edc)(fVar7);
  (*DAT_10121ec8)(10);
  (*DAT_10121ed0)(*(undefined4 *)(this + 0xd0));
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0x19);
  (*DAT_10121ec8)(local_441);
  (*DAT_10121ec4)();
  iVar1 = *(int *)(this + 4);
  fStack_40c = *(float *)(iVar1 + 0xc4);
  uStack_408 = *(undefined4 *)(iVar1 + 200);
  fStack_424 = *(float *)(iVar1 + 0xd0);
  uStack_420 = *(undefined4 *)(iVar1 + 0xd4);
  uStack_404 = *(undefined4 *)(iVar1 + 0xd8);
  fStack_41c = *(float *)(iVar1 + 0xd8) + _DAT_100de45c;
  iVar1 = FUN_100ae980(aiStack_400,0x100,&fStack_40c,&fStack_424,0x200);
  if ((iVar1 != 0) && (0 < iVar1)) {
    piVar5 = aiStack_400;
    do {
      iVar1 = iVar1 + -1;
      *(uint *)(*(int *)(*piVar5 + 4) + 0x1a4) =
           *(uint *)(*(int *)(*piVar5 + 4) + 0x1a4) & 0xfffffdff;
      *(undefined4 *)(*(int *)(*piVar5 + 4) + 0x19c) = 0;
      piVar5 = piVar5 + 1;
    } while (iVar1 != 0);
  }
  if (*(int *)(this + 0xe0) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = 0;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(this + 4) + 0x16c) = 0;
  iVar1 = *(int *)(this + 0x60);
  if (iVar1 < 0x20) {
    if (-0x20 < iVar1) goto LAB_10037cb9;
    puVar13 = &DAT_10103c14;
    iVar1 = -iVar1;
  }
  else {
    puVar13 = &DAT_10103c18;
  }
  (*DAT_10121eb4)(iVar1,puVar13);
LAB_10037cb9:
  FUN_10098e40(this,(int *)0x0,3,0);
  iVar1 = *(int *)(this + 0xe0);
  if (iVar1 == -1) {
    *(code **)(this + 0x7c) = RespawnUse;
  }
  else {
    if (iVar1 == 0) {
      if (*(int *)(this + 0xf8) != 0) {
        *(code **)(*(int *)(this + 0xf8) + 0x74) = CBaseEntity::SUB_Remove;
        (**(code **)(**(int **)(this + 0xf8) + 8))(0x3dcccccd);
        *(undefined4 *)(this + 0xf8) = 0;
      }
      iVar1 = *(int *)this;
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      fVar14 = 0.1;
    }
    else {
      fVar14 = (float)iVar1;
      iVar1 = *(int *)this;
      *(code **)(this + 0x74) = RespawnThink;
    }
    (**(code **)(iVar1 + 8))(fVar14);
  }
  if (*(int *)(this + 0xdc) != 0) {
    iVar1 = *(int *)(this + 4);
    uVar15 = *(undefined4 *)(iVar1 + 0x208);
    puVar4 = (undefined4 *)(iVar1 + 0x50);
    puVar3 = (undefined4 *)FUN_10010f30(&fStack_418,iVar1);
    FUN_1001a1f0(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0xdc),puVar3,puVar4,uVar15);
  }
  iVar1 = *(int *)(this + 4);
  if (0 < *(int *)(iVar1 + 0x184)) {
    iVar2 = *(int *)(iVar1 + 0x208);
    iVar1 = iVar1 + 0x50;
    pfVar12 = &fStack_418;
    puVar4 = (undefined4 *)(**(code **)(*(int *)this + 0xf8))();
    FUN_100359b0(puVar4,pfVar12,iVar1,iVar2);
  }
  return;
}

