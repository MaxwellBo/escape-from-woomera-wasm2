
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10011d80(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = *(int *)(param_1[1] + 0x1d4);
  pcVar5 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar4);
  if (iVar4 != 0) {
    iVar3 = -1;
    pcVar6 = pcVar5;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      (*DAT_10121e0c)(pcVar5);
      uVar2 = (*DAT_10121f14)(pcVar5);
      *(undefined4 *)(param_1[1] + 500) = uVar2;
      goto LAB_10011ea7;
    }
  }
  switch(param_1[0x32]) {
  case 1:
    (*DAT_10121e0c)(s_fans_fan1_wav_10103cc4);
    pcVar5 = s_fans_fan1_wav_10103cc4;
    break;
  case 2:
    (*DAT_10121e0c)(s_fans_fan2_wav_10103cb4);
    pcVar5 = s_fans_fan2_wav_10103cb4;
    break;
  case 3:
    (*DAT_10121e0c)(s_fans_fan3_wav_10103ca4);
    pcVar5 = s_fans_fan3_wav_10103ca4;
    break;
  case 4:
    (*DAT_10121e0c)(s_fans_fan4_wav_10103c94);
    pcVar5 = s_fans_fan4_wav_10103c94;
    break;
  case 5:
    (*DAT_10121e0c)(s_fans_fan5_wav_10103c84);
    pcVar5 = s_fans_fan5_wav_10103c84;
    break;
  default:
    if (iVar4 != 0) {
      iVar4 = -1;
      pcVar6 = pcVar5;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        (*DAT_10121e0c)(pcVar5);
        uVar2 = (*DAT_10121f14)(pcVar5);
        *(undefined4 *)(param_1[1] + 500) = uVar2;
        goto LAB_10011ea7;
      }
    }
    *(int *)(param_1[1] + 500) = (int)s_common_null_wav_10103c74 - *(int *)(DAT_10122044 + 0x98);
    goto LAB_10011ea7;
  }
  *(int *)(param_1[1] + 500) = (int)pcVar5 - *(int *)(DAT_10122044 + 0x98);
LAB_10011ea7:
  if ((float)param_1[0x33] != _DAT_100dd5f8) {
    param_1[0x1d] = (int)CFuncRotating::SpinUp;
    (**(code **)(*param_1 + 8))(0x3fc00000);
  }
  return;
}

