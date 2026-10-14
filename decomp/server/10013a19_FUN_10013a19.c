
void __fastcall FUN_10013a19(uint *param_1,undefined4 param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int unaff_ESI;
  char *pcVar3;
  
  *(char *)((int)param_1 + -0x61effec7) =
       *(char *)((int)param_1 + -0x61effec7) + (char)param_1 + (*param_1 < in_EAX);
  *(char *)(unaff_ESI + 0x57) =
       *(char *)(unaff_ESI + 0x57) + (char)param_2 +
       (*param_1 <
       CONCAT31((int3)(in_EAX >> 8),(char)in_EAX + (char)((uint)param_2 >> 8) + (*param_1 < in_EAX))
       );
  uVar1 = (*DAT_10121f70)(0x55,0x78);
  uVar2 = (*DAT_10121f70)(0,3);
  switch(uVar2) {
  case 0:
    pcVar3 = s_bullchicken_bc_pain1_wav_101041e0;
    break;
  case 1:
    FUN_10094b20(this,*(undefined4 *)(param_1[1] + 0x208),2,s_bullchicken_bc_pain2_wav_101041c4,
                 0x3f800000,0x3f4ccccd,0,uVar1);
    return;
  case 2:
    FUN_10094b20((void *)param_1[1],*(undefined4 *)((int)param_1[1] + 0x208),2,
                 s_bullchicken_bc_pain3_wav_101041a8,0x3f800000,0x3f4ccccd,0,uVar1);
    return;
  case 3:
    pcVar3 = s_bullchicken_bc_pain4_wav_1010418c;
    break;
  default:
    goto switchD_10013a56_default;
  }
  FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),2,pcVar3,0x3f800000,
               0x3f4ccccd,0,uVar1);
switchD_10013a56_default:
  return;
}

