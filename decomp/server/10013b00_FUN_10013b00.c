
void __fastcall FUN_10013b00(int param_1)

{
  void *this;
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  
  uVar1 = (*DAT_10121f70)(0x8c,0xa0);
  iVar2 = (*DAT_10121f70)(0,1);
  if (iVar2 == 0) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 s_bullchicken_bc_idle1_wav_10104170,0x3f800000,0x3f4ccccd,0,uVar1);
  }
  else if (iVar2 == 1) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(this,this,2,s_bullchicken_bc_idle2_wav_10104154,0x3f800000,0x3f4ccccd,0,uVar1);
    return;
  }
  return;
}

