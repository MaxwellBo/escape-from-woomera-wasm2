
void __fastcall FUN_1008ded0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  float10 fVar3;
  
  if (*(float *)(param_1 + 900) <= *DAT_10122044) {
    fVar3 = (float10)(*DAT_10121f74)(0x3f000000,0x3f400000);
    *(float *)(param_1 + 900) = (float)(fVar3 + (float10)*DAT_10122044);
    uVar1 = (*DAT_10121f70)(0,4);
    switch(uVar1) {
    case 0:
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this,uVar1,2,s_scientist_sci_pain1_wav_10115b04,0x3f800000,0x3f4ccccd,0,iVar2);
      return;
    case 1:
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_00,uVar1,2,s_scientist_sci_pain2_wav_10115aec,0x3f800000,0x3f4ccccd,0,iVar2)
      ;
      return;
    case 2:
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_01,uVar1,2,s_scientist_sci_pain3_wav_10115ad4,0x3f800000,0x3f4ccccd,0,iVar2)
      ;
      return;
    case 3:
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_02,uVar1,2,s_scientist_sci_pain4_wav_10115abc,0x3f800000,0x3f4ccccd,0,iVar2)
      ;
      return;
    case 4:
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_03,uVar1,2,s_scientist_sci_pain5_wav_10115aa4,0x3f800000,0x3f4ccccd,0,iVar2)
      ;
    }
  }
  return;
}

