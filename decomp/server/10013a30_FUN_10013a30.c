
void __fastcall FUN_10013a30(int param_1)

{
  void *this;
  undefined4 uVar1;
  undefined4 uVar2;
  void *this_00;
  char *pcVar3;
  
  uVar1 = (*DAT_10121f70)(0x55,0x78);
  uVar2 = (*DAT_10121f70)(0,3);
  switch(uVar2) {
  case 0:
    pcVar3 = s_bullchicken_bc_pain1_wav_101041e0;
    break;
  case 1:
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                 s_bullchicken_bc_pain2_wav_101041c4,0x3f800000,0x3f4ccccd,0,uVar1);
    return;
  case 2:
    FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                 s_bullchicken_bc_pain3_wav_101041a8,0x3f800000,0x3f4ccccd,0,uVar1);
    return;
  case 3:
    pcVar3 = s_bullchicken_bc_pain4_wav_1010418c;
    break;
  default:
    goto switchD_10013a56_default;
  }
  this = *(void **)(*(int *)(param_1 + 4) + 0x208);
  FUN_10094b20(this,this,2,pcVar3,0x3f800000,0x3f4ccccd,0,uVar1);
switchD_10013a56_default:
  return;
}

