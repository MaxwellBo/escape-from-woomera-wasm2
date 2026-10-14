
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBaseTurret::TurretDeath(void) */

void __thiscall CBaseTurret::TurretDeath(CBaseTurret *this)

{
  int iVar1;
  void *extraout_ECX;
  void *this_00;
  float10 fVar2;
  float10 fVar3;
  void *pvVar4;
  char *pcVar5;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0xad5b0  268  ?TurretDeath@CBaseTurret@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(int *)(*(int *)(this + 4) + 0x170) != 2) {
    *(undefined4 *)(*(int *)(this + 4) + 0x170) = 2;
    fVar2 = (float10)(*DAT_10121f74)(0,0x3f800000);
    if ((float10)_DAT_100ee928 < fVar2) {
      if ((float10)_DAT_100ee920 < fVar2) {
        pcVar5 = s_turret_tu_die3_wav_1011a364;
        pvVar4 = *(void **)(*(int *)(this + 4) + 0x208);
        this_00 = extraout_ECX;
      }
      else {
        pcVar5 = s_turret_tu_die2_wav_1011a378;
        this_00 = *(void **)(*(int *)(this + 4) + 0x208);
        pvVar4 = this_00;
      }
    }
    else {
      this_00 = *(void **)(this + 4);
      pcVar5 = s_turret_tu_die_wav_1011a38c;
      pvVar4 = *(void **)((int)this_00 + 0x208);
    }
    FUN_10094b20(this_00,pvVar4,4,pcVar5,0x3f800000,0x3f4ccccd,0,100);
    FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),6,
                 s_turret_tu_active2_wav_1011a3a0,0,0,0x20,100);
    if (*(int *)(this + 0x32c) == 0) {
      *(undefined4 *)(this + 0x364) = 0xc1700000;
    }
    else {
      *(undefined4 *)(this + 0x364) = 0xc2b40000;
    }
    FUN_100ad2f0(this,5);
    (**(code **)(*(int *)this + 0x238))();
  }
  (**(code **)(*(int *)this + 0x23c))();
  fVar2 = (float10)(*DAT_10121f74)(0,0x40000000);
  if ((float10)*DAT_10122044 < fVar2 + (float10)*(float *)(*(int *)(this + 4) + 0x1e4)) {
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(5);
    fVar2 = (float10)(*DAT_10121f74)(*(undefined4 *)(*(int *)(this + 4) + 0xc4),
                                     *(undefined4 *)(*(int *)(this + 4) + 0xd0));
    (*DAT_10121edc)((float)fVar2);
    fVar2 = (float10)(*DAT_10121f74)(*(undefined4 *)(*(int *)(this + 4) + 200),
                                     *(undefined4 *)(*(int *)(this + 4) + 0xd4));
    (*DAT_10121edc)((float)fVar2);
    (*DAT_10121edc)(*(float *)(*(int *)(this + 4) + 0x10) - (float)(*(int *)(this + 0x32c) << 6));
    (*DAT_10121ed0)((int)DAT_10131cf2);
    (*DAT_10121ec8)(0x19);
    (*DAT_10121ec8)((2 - *(int *)(this + 0x32c)) * 5);
    (*DAT_10121ec4)();
  }
  iVar1 = *(int *)(this + 4);
  fVar2 = (float10)(*DAT_10121f74)(0,0x40a00000);
  if ((float10)*DAT_10122044 < fVar2 + (float10)*(float *)(iVar1 + 0x1e4)) {
    fVar2 = (float10)(*DAT_10121f74)(*(undefined4 *)(iVar1 + 200),*(undefined4 *)(iVar1 + 0xd4));
    fVar3 = (float10)(*DAT_10121f74)(*(undefined4 *)(*(int *)(this + 4) + 0xc4),
                                     *(undefined4 *)(*(int *)(this + 4) + 0xd0));
    fStack_1c = (float)fVar3;
    iVar1 = *(int *)(this + 4);
    fStack_14 = 0.0;
    fStack_18 = (float)fVar2;
    if (*(int *)(this + 0x32c) == 0) {
      fVar2 = (float10)(*DAT_10121f74)(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xd8));
      fVar2 = (float10)fStack_14 + fVar2;
    }
    else {
      fVar2 = (float10)(*DAT_10121f74)(*(undefined4 *)(iVar1 + 0xcc),*(undefined4 *)(iVar1 + 0x10));
      fVar2 = (float10)fStack_14 + fVar2;
    }
    fStack_8 = (float)fVar2;
    fStack_14 = fStack_8;
    fStack_10 = fStack_1c;
    fStack_c = fStack_18;
    FUN_100b06a0(&fStack_1c);
  }
  if (*(int *)(this + 0xd4) != 0) {
    iVar1 = FUN_100adab0(this);
    if ((iVar1 == 0) && (*(float *)(*(int *)(this + 4) + 0x1e4) + _DAT_100dd5d8 < *DAT_10122044)) {
      *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
      *(undefined4 *)(this + 0x74) = 0;
    }
  }
  return;
}

