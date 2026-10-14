
void __fastcall FUN_1004fee0(int param_1)

{
  void *this;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  void *this_00;
  
  bVar1 = FUN_10019450((uint *)(param_1 + 0x308));
  if ((CONCAT31(extraout_var,bVar1) != 0) &&
     (iVar2 = FUN_10019410((uint *)(param_1 + 0x308)), iVar2 != param_1)) {
    return;
  }
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                 s_houndeye_he_alert1_wav_1010f41c,0x3f800000,0x3f4ccccd,0,100);
  }
  else {
    if (iVar2 == 1) {
      FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                   s_houndeye_he_alert2_wav_1010f404,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    if (iVar2 == 2) {
      this = *(void **)(*(int *)(param_1 + 4) + 0x208);
      FUN_10094b20(this,this,2,s_houndeye_he_alert3_wav_1010f3ec,0x3f800000,0x3f4ccccd,0,100);
      return;
    }
  }
  return;
}

