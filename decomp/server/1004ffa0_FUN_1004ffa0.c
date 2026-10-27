
void __fastcall FUN_1004ffa0(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  
  iVar1 = (*DAT_10121f70)(0,2);
  if (iVar1 == 0) {
    FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                 s_houndeye_he_die1_wav_1010f3d4,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar1 == 1) {
      FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                   s_houndeye_he_die2_wav_1010f3bc,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    if (iVar1 == 2) {
      this = *(void **)(*(int *)(param_1 + 4) + 0x208);
      FUN_10094b20(this,this,2,s_houndeye_he_die3_wav_1010f3a4,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
  }
  return;
}

