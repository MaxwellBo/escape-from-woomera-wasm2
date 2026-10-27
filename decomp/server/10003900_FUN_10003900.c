
void __fastcall FUN_10003900(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_100038b0(param_1);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0x350) < *DAT_10122044)) {
    do {
      iVar1 = (*DAT_10121f70)(0,3);
    } while (iVar1 == *(int *)(param_1 + 0x354));
    *(int *)(param_1 + 0x354) = iVar1;
    FUN_10094b20((&PTR_s_agrunt_ag_idle1_wav_10101410)[iVar1],
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 (&PTR_s_agrunt_ag_idle1_wav_10101410)[iVar1],0x3f800000,0x3f4ccccd,0,100);
    iVar1 = (*DAT_10121f70)(1,10);
    if (iVar1 < 2) {
      FUN_10003870(param_1);
      return;
    }
    fVar2 = (float10)(*DAT_10121f74)(0x3f000000,0x3f800000);
    *(float *)(param_1 + 0x350) = (float)(fVar2 + (float10)*DAT_10122044);
  }
  return;
}

