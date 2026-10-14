
void __fastcall FUN_100163f0(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x40) != 0) {
    (*DAT_10121e0c)(s_buttons_spark1_wav_10104ac4);
    (*DAT_10121e0c)(s_buttons_spark2_wav_10104ab0);
    (*DAT_10121e0c)(s_buttons_spark3_wav_10104a9c);
    (*DAT_10121e0c)(s_buttons_spark4_wav_10104a88);
    (*DAT_10121e0c)(s_buttons_spark5_wav_10104a74);
    (*DAT_10121e0c)(s_buttons_spark6_wav_10104a60);
  }
  if (*(byte *)(param_1 + 0x18c) != 0) {
    pcVar1 = FUN_10016d30((uint)*(byte *)(param_1 + 0x18c));
    (*DAT_10121e0c)(pcVar1);
    uVar2 = (*DAT_10121f14)(pcVar1);
    *(undefined4 *)(param_1 + 0x168) = uVar2;
  }
  if (*(byte *)(param_1 + 0x18e) != 0) {
    pcVar1 = FUN_10016d30((uint)*(byte *)(param_1 + 0x18e));
    (*DAT_10121e0c)(pcVar1);
    uVar2 = (*DAT_10121f14)(pcVar1);
    *(undefined4 *)(param_1 + 0x170) = uVar2;
  }
  switch(*(undefined1 *)(param_1 + 0x18d)) {
  case 1:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a5c - *(int *)(DAT_10122044 + 0x98);
    break;
  case 2:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a58 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 3:
    puVar3 = &DAT_10104a54;
    goto LAB_1001656a;
  case 4:
    *(int *)(param_1 + 0x16c) = (int)s_NFIRE_10104a4c - *(int *)(DAT_10122044 + 0x98);
    break;
  case 5:
    *(int *)(param_1 + 0x16c) = (int)s_NCHEM_10104a44 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 6:
    puVar3 = &DAT_10104a3c;
    goto LAB_1001656a;
  case 7:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a34 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 8:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a30 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 9:
    puVar3 = &DAT_10104a2c;
LAB_1001656a:
    *(int *)(param_1 + 0x16c) = (int)puVar3 - *(int *)(DAT_10122044 + 0x98);
    break;
  default:
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  switch(*(undefined1 *)(param_1 + 399)) {
  case 1:
    *(int *)(param_1 + 0x174) = (int)&DAT_10104a28 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 2:
    *(int *)(param_1 + 0x174) = (int)&DAT_10104a24 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 3:
    puVar3 = &DAT_10104a20;
    break;
  case 4:
    *(int *)(param_1 + 0x174) = (int)s_EFIRE_10104a18 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 5:
    *(int *)(param_1 + 0x174) = (int)s_ECHEM_10104a10 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 6:
    puVar3 = &DAT_10104a08;
    break;
  case 7:
    *(int *)(param_1 + 0x174) = (int)&DAT_10104a00 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 8:
    *(int *)(param_1 + 0x174) = (int)&DAT_101049fc - *(int *)(DAT_10122044 + 0x98);
    return;
  default:
    *(undefined4 *)(param_1 + 0x174) = 0;
    return;
  }
  *(int *)(param_1 + 0x174) = (int)puVar3 - *(int *)(DAT_10122044 + 0x98);
  return;
}

