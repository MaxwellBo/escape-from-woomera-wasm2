
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSentry::SentryDeath(void) */

void __thiscall CSentry::SentryDeath(CSentry *this)

{
  int iVar1;
  void *extraout_ECX;
  void *this_00;
  float10 fVar2;
  void *pvVar3;
  char *pcVar4;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [16];
  
                    /* 0xae160  197  ?SentryDeath@CSentry@@QAEXXZ */
  FUN_10007fc0((int)this,0.0);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  if (*(int *)(*(int *)(this + 4) + 0x170) != 2) {
    *(undefined4 *)(*(int *)(this + 4) + 0x170) = 2;
    fVar2 = (float10)(*DAT_10121f74)(0,0x3f800000);
    if ((float10)_DAT_100ee928 < fVar2) {
      if ((float10)_DAT_100ee920 < fVar2) {
        pcVar4 = s_turret_tu_die3_wav_1011a364;
        pvVar3 = *(void **)(*(int *)(this + 4) + 0x208);
        this_00 = extraout_ECX;
      }
      else {
        pcVar4 = s_turret_tu_die2_wav_1011a378;
        this_00 = *(void **)(*(int *)(this + 4) + 0x208);
        pvVar3 = this_00;
      }
    }
    else {
      this_00 = *(void **)(this + 4);
      pcVar4 = s_turret_tu_die_wav_1011a38c;
      pvVar3 = *(void **)((int)this_00 + 0x208);
    }
    FUN_10094b20(this_00,pvVar3,4,pcVar4,0x3f800000,0x3f4ccccd,0,100);
    FUN_10094b20(*(void **)(this + 4),*(undefined4 *)((int)*(void **)(this + 4) + 0x208),6,
                 s_turret_tu_active2_wav_1011a3a0,0,0,0x20,100);
    FUN_10008360(this,0,0.0);
    FUN_10008360(this,1,0.0);
    FUN_100ad2f0(this,5);
    *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
    iVar1 = (*DAT_10121f70)(0,2);
    fVar2 = FUN_100ae770((float)(iVar1 * 0x78) + *(float *)(*(int *)(this + 4) + 0x54));
    *(float *)(*(int *)(this + 4) + 0x54) = (float)fVar2;
    (**(code **)(*(int *)this + 0x238))();
  }
  (**(code **)(*(int *)this + 0x23c))();
  FUN_10008450(this,1,&fStack_1c,auStack_10);
  fVar2 = (float10)(*DAT_10121f74)(0,0x40000000);
  if ((float10)*DAT_10122044 < fVar2 + (float10)*(float *)(*(int *)(this + 4) + 0x1e4)) {
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(5);
    fVar2 = (float10)(*DAT_10121f74)(0xc1800000,0x41800000);
    (*DAT_10121edc)((float)(fVar2 + (float10)fStack_1c));
    fVar2 = (float10)(*DAT_10121f74)(0xc1800000,0x41800000);
    (*DAT_10121edc)((float)(fVar2 + (float10)fStack_18));
    (*DAT_10121edc)(fStack_14 - _DAT_100ddac8);
    (*DAT_10121ed0)((int)DAT_10131cf2);
    (*DAT_10121ec8)(0xf);
    (*DAT_10121ec8)(8);
    (*DAT_10121ec4)();
  }
  fVar2 = (float10)(*DAT_10121f74)(0,0x41000000);
  if ((float10)*DAT_10122044 < fVar2 + (float10)*(float *)(*(int *)(this + 4) + 0x1e4)) {
    FUN_100b06a0(&fStack_1c);
  }
  if ((*(int *)(this + 0xd4) != 0) &&
     (*(float *)(*(int *)(this + 4) + 0x1e4) + _DAT_100dd5d8 < *DAT_10122044)) {
    *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
    *(undefined4 *)(this + 0x74) = 0;
  }
  return;
}

