
void __fastcall FUN_1000d9d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  void *this_00;
  void *this_01;
  float10 fVar3;
  
  if (*(float *)(param_1 + 0x388) <= *DAT_10122044) {
    fVar3 = (float10)(*DAT_10121f74)(0x3f000000,0x3f400000);
    *(float *)(param_1 + 0x388) = (float)(fVar3 + (float10)*DAT_10122044);
    iVar2 = (*DAT_10121f70)(0,2);
    if (iVar2 == 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_01,uVar1,2,s_barney_ba_pain1_wav_10103254,0x3f800000,0x3f4ccccd,0,iVar2);
    }
    else {
      if (iVar2 == 1) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
        iVar2 = FUN_1009b130(param_1);
        FUN_10094b20(this_00,uVar1,2,s_barney_ba_pain2_wav_10103240,0x3f800000,0x3f4ccccd,0,iVar2);
        return;
      }
      if (iVar2 == 2) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
        iVar2 = FUN_1009b130(param_1);
        FUN_10094b20(this,uVar1,2,s_barney_ba_pain3_wav_1010322c,0x3f800000,0x3f4ccccd,0,iVar2);
        return;
      }
    }
  }
  return;
}

