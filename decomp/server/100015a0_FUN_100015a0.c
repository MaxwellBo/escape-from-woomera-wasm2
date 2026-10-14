
void __fastcall FUN_100015a0(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  char *pcVar2;
  
  if (*(float *)(param_1 + 0x340) <= *DAT_10122044) {
    iVar1 = (*DAT_10121f70)(0,1);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        return;
      }
      FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                   s_boid_boid_idle2_wav_101012e0,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    pcVar2 = s_boid_boid_idle1_wav_101012f4;
  }
  else {
    iVar1 = (*DAT_10121f70)();
    if (iVar1 == 0) {
      this = *(void **)(*(int *)(param_1 + 4) + 0x208);
      FUN_10094b20(this,this,1,s_boid_boid_alert1_wav_10101320,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    pcVar2 = s_boid_boid_alert2_wav_10101308;
  }
  FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),1,
               pcVar2,0x3f800000,0x3f4ccccd,0,100);
  return;
}

