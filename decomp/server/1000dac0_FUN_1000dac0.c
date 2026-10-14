
void __fastcall FUN_1000dac0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  void *this_00;
  void *this_01;
  
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    iVar2 = FUN_1009b130(param_1);
    FUN_10094b20(this_01,uVar1,2,s_barney_ba_die1_wav_10103218,0x3f800000,0x3f4ccccd,0,iVar2);
  }
  else {
    if (iVar2 == 1) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this_00,uVar1,2,s_barney_ba_die2_wav_10103204,0x3f800000,0x3f4ccccd,0,iVar2);
      return;
    }
    if (iVar2 == 2) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      iVar2 = FUN_1009b130(param_1);
      FUN_10094b20(this,uVar1,2,s_barney_ba_die3_wav_101031f0,0x3f800000,0x3f4ccccd,0,iVar2);
      return;
    }
  }
  return;
}

