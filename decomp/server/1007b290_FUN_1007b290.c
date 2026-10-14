
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007b290(int param_1)

{
  void *this;
  void *this_00;
  float10 fVar1;
  
  fVar1 = (float10)(*DAT_10121f74)(0,0x3f800000);
  if (fVar1 <= (float10)_DAT_100ee928) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(this,this,2,s_player_pl_pain5_wav_101058ac,0x3f800000,0x3f4ccccd,0,100);
    return;
  }
  if (fVar1 <= (float10)_DAT_100ee920) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 s_player_pl_pain6_wav_10105898,0x3f800000,0x3f4ccccd,0,100);
    return;
  }
  FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
               s_player_pl_pain7_wav_10105884,0x3f800000,0x3f4ccccd,0,100);
  return;
}

