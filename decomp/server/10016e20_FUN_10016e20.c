
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10016e20(int param_1,float *param_2)

{
  void *this;
  void *this_00;
  float10 fVar1;
  longlong lVar2;
  char *pcVar3;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(param_1 + 0xf4) * _DAT_100dd614 + *param_2;
  local_8 = *(float *)(param_1 + 0xf8) * _DAT_100dd614 + param_2[1];
  local_4 = *(float *)(param_1 + 0xfc) * _DAT_100dd614 + param_2[2];
  FUN_100b06a0(&local_c);
  fVar1 = (float10)(*DAT_10121f74)(0x3e800000,0x3f400000);
  this = (void *)(float)(fVar1 * (float10)_DAT_100df2a8);
  (*DAT_10121f74)(0,0x3f800000);
  lVar2 = __ftol();
  switch((int)lVar2) {
  case 0:
    FUN_10094b20(this,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark1_wav_10104ac4,this,
                 0x3f4ccccd,0,100);
    return;
  case 1:
    FUN_10094b20(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                 s_buttons_spark2_wav_10104ab0,this,0x3f4ccccd,0,100);
    return;
  case 2:
    pcVar3 = s_buttons_spark3_wav_10104a9c;
    break;
  case 3:
    FUN_10094b20(this,*(undefined4 *)(param_1 + 0x208),2,s_buttons_spark4_wav_10104a88,this,
                 0x3f4ccccd,0,100);
    return;
  case 4:
    FUN_10094b20(*(void **)(param_1 + 0x208),*(void **)(param_1 + 0x208),2,
                 s_buttons_spark5_wav_10104a74,this,0x3f4ccccd,0,100);
    return;
  case 5:
    pcVar3 = s_buttons_spark6_wav_10104a60;
    break;
  default:
    goto switchD_10016ebc_default;
  }
  FUN_10094b20(this_00,*(undefined4 *)(param_1 + 0x208),2,pcVar3,this,0x3f4ccccd,0,100);
switchD_10016ebc_default:
  return;
}

