
void __fastcall FUN_10013940(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *this;
  char *pcVar3;
  
  uVar2 = (*DAT_10121f70)(0,4);
  switch(uVar2) {
  case 0:
    pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(pvVar1,pvVar1,2,s_bullchicken_bc_idle1_wav_10104170,0x3f800000,0x3fc00000,0,100);
    return;
  case 1:
    pcVar3 = s_bullchicken_bc_idle2_wav_10104154;
    break;
  case 2:
    FUN_10094b20(*(void **)(param_1 + 4),*(undefined4 *)((int)*(void **)(param_1 + 4) + 0x208),2,
                 s_bullchicken_bc_idle3_wav_10104138,0x3f800000,0x3fc00000,0,100);
    return;
  case 3:
    pvVar1 = *(void **)(*(int *)(param_1 + 4) + 0x208);
    FUN_10094b20(pvVar1,pvVar1,2,s_bullchicken_bc_idle4_wav_1010411c,0x3f800000,0x3fc00000,0,100);
    return;
  case 4:
    pcVar3 = s_bullchicken_bc_idle5_wav_10104100;
    break;
  default:
    goto switchD_10013959_default;
  }
  FUN_10094b20(this,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,pcVar3,0x3f800000,0x3fc00000,0,
               100);
switchD_10013959_default:
  return;
}

