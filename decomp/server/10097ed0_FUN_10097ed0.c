
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10097ed0(void *param_1)

{
  void *extraout_ECX;
  void *this;
  float10 fVar1;
  void *pvVar2;
  char *pcVar3;
  
  fVar1 = (float10)(*DAT_10121f74)(0,0x3f800000);
  if ((float10)_DAT_100dd648 < fVar1) {
    pcVar3 = s_squeek_sqk_hunt3_wav_101174b0;
    pvVar2 = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
    this = extraout_ECX;
  }
  else {
    pcVar3 = s_squeek_sqk_hunt2_wav_101174c8;
    this = *(void **)(*(int *)((int)param_1 + 4) + 0x208);
    pvVar2 = this;
  }
  FUN_10094b20(this,pvVar2,2,pcVar3,0x3f800000,0x3f4ccccd,0,100);
  *(undefined4 *)(*(int *)((int)param_1 + 0xdc) + 0x314) = 200;
  FUN_100b4130(param_1,0x10117574,0x10117560,4,s_squeak_10117588,0,0);
  return;
}

