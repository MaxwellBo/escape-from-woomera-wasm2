
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ad230(void *param_1)

{
  void *this;
  
  if (*(int *)((int)param_1 + 0x30c) != 0) {
    FUN_100ad2f0(param_1,2);
    this = *(void **)((int)param_1 + 4);
    if (*(float *)((int)this + 0x138) == (float)_DAT_100dd628) {
      FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),6,s_turret_tu_active2_wav_1011a3a0,0,0,
                   0x20,100);
      FUN_10094b20(*(void **)((int)param_1 + 4),
                   *(undefined4 *)((int)*(void **)((int)param_1 + 4) + 0x208),3,
                   s_turret_tu_spindown_wav_1011a31c,0x3f000000,0x3f4ccccd,0,100);
    }
    *(float *)(*(int *)((int)param_1 + 4) + 0x138) =
         *(float *)(*(int *)((int)param_1 + 4) + 0x138) - (float)_DAT_100de4c8;
    if (*(float *)(*(int *)((int)param_1 + 4) + 0x138) <= _DAT_100dd5f8) {
      *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x138) = 0;
      *(undefined4 *)((int)param_1 + 0x30c) = 0;
    }
  }
  return;
}

