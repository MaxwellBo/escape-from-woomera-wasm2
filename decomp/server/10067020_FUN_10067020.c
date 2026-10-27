
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10067020(int param_1)

{
  int iVar1;
  char *pcVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this;
  undefined4 uVar3;
  float10 fVar4;
  
  if (*(float *)(param_1 + 0x30c) <= *DAT_10122044) {
    fVar4 = (float10)(*DAT_10121f74)(0x40000000,0x40a00000);
    iVar1 = *(int *)(param_1 + 4);
    *(float *)(param_1 + 0x30c) = (float)(fVar4 + (float10)*DAT_10122044);
    if (*(float *)(iVar1 + 0x160) <= DAT_10126ae8 * _DAT_100dd614) {
      if (*(int *)(param_1 + 0x374) < 2) {
        return;
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x208);
      iVar1 = (*DAT_10121f70)(0,1);
      pcVar2 = (&PTR_s_X_x_pain1_wav_10112158)[iVar1];
      this = extraout_ECX_00;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x208);
      iVar1 = (*DAT_10121f70)(0,1);
      pcVar2 = (&PTR_s_X_x_laugh1_wav_10112150)[iVar1];
      this = extraout_ECX;
    }
    FUN_10094b20(this,uVar3,2,pcVar2,0x3f800000,0x3e4ccccd,0,100);
  }
  return;
}

