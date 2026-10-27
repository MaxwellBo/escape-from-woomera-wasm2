
void __fastcall FUN_10014820(int param_1)

{
  void *this;
  int iVar1;
  void *this_00;
  
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 == 0) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),1,
                 s_bullchicken_bc_attack2_wav_10104310,0x3f800000,0x3f4ccccd,0,100);
  }
  else if (iVar1 == 1) {
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(this,this,1,s_bullchicken_bc_attack3_wav_101042f4,0x3f800000,0x3f4ccccd,0,100);
    return;
  }
  return;
}

