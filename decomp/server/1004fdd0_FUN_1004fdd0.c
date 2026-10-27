
void __fastcall FUN_1004fdd0(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 == 0) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                 s_houndeye_he_attack1_wav_1010f2cc,0x3f333333,0x3f4ccccd,0,100);
  }
  else if (iVar1 == 1) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(this,this,1,s_houndeye_he_attack3_wav_1010f2b4,0x3f333333,0x3f4ccccd,0,100);
    return;
  }
  return;
}

