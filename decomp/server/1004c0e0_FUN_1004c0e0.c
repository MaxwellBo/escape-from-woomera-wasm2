
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1004c0e0(int param_1)

{
  undefined4 uVar1;
  void *extraout_ECX;
  void *this;
  void *pvVar2;
  char *pcVar3;
  
  if (*DAT_10122044 <= *(float *)(param_1 + 0x344)) {
    return;
  }
  uVar1 = (*DAT_10121f70)(0,6);
  switch(uVar1) {
  case 0:
    this = *(void **)(param_1 + 4);
    pvVar2 = *(void **)((int)this + 0x208);
    pcVar3 = s_hgrunt_gr_pain3_wav_1010ea78;
    break;
  case 1:
    pcVar3 = s_hgrunt_gr_pain4_wav_1010ea64;
    goto LAB_1004c1a3;
  case 2:
    pvVar2 = *(void **)(*(int *)(param_1 + 4) + 0x208);
    pcVar3 = s_hgrunt_gr_pain5_wav_1010ea50;
    this = extraout_ECX;
    break;
  case 3:
    this = *(void **)(param_1 + 4);
    pvVar2 = *(void **)((int)this + 0x208);
    pcVar3 = s_hgrunt_gr_pain1_wav_1010eaa0;
    break;
  case 4:
    pcVar3 = s_hgrunt_gr_pain2_wav_1010ea8c;
LAB_1004c1a3:
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    pvVar2 = this;
    break;
  default:
    goto switchD_1004c111_default;
  }
  FUN_10094b20(this,pvVar2,2,pcVar3,0x3f800000,0x3f4ccccd,0,100);
switchD_1004c111_default:
  *(float *)(param_1 + 0x344) = *DAT_10122044 + _DAT_100dd618;
  return;
}

