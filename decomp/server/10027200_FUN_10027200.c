
void __fastcall FUN_10027200(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_1 + 0x15d)) {
  default:
    pcVar1 = s_common_null_wav_10103c74;
    break;
  case 1:
    (*DAT_10121e0c)(s_doors_doormove1_wav_10107694);
    pcVar1 = s_doors_doormove1_wav_10107694;
    break;
  case 2:
    (*DAT_10121e0c)(s_doors_doormove2_wav_10107680);
    pcVar1 = s_doors_doormove2_wav_10107680;
    break;
  case 3:
    (*DAT_10121e0c)(s_doors_doormove3_wav_1010766c);
    pcVar1 = s_doors_doormove3_wav_1010766c;
    break;
  case 4:
    (*DAT_10121e0c)(s_doors_doormove4_wav_10107658);
    pcVar1 = s_doors_doormove4_wav_10107658;
    break;
  case 5:
    (*DAT_10121e0c)(s_doors_doormove5_wav_10107644);
    pcVar1 = s_doors_doormove5_wav_10107644;
    break;
  case 6:
    (*DAT_10121e0c)(s_doors_doormove6_wav_10107630);
    pcVar1 = s_doors_doormove6_wav_10107630;
    break;
  case 7:
    (*DAT_10121e0c)(s_doors_doormove7_wav_1010761c);
    pcVar1 = s_doors_doormove7_wav_1010761c;
    break;
  case 8:
    (*DAT_10121e0c)(s_doors_doormove8_wav_10107608);
    pcVar1 = s_doors_doormove8_wav_10107608;
    break;
  case 9:
    (*DAT_10121e0c)(s_doors_doormove9_wav_101075f4);
    pcVar1 = s_doors_doormove9_wav_101075f4;
    break;
  case 10:
    (*DAT_10121e0c)(s_doors_doormove10_wav_101075dc);
    pcVar1 = s_doors_doormove10_wav_101075dc;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  switch(*(undefined1 *)(param_1 + 0x15e)) {
  default:
    pcVar1 = s_common_null_wav_10103c74;
    break;
  case 1:
    (*DAT_10121e0c)(s_doors_doorstop1_wav_101075c8);
    pcVar1 = s_doors_doorstop1_wav_101075c8;
    break;
  case 2:
    (*DAT_10121e0c)(s_doors_doorstop2_wav_101075b4);
    pcVar1 = s_doors_doorstop2_wav_101075b4;
    break;
  case 3:
    (*DAT_10121e0c)(s_doors_doorstop3_wav_101075a0);
    pcVar1 = s_doors_doorstop3_wav_101075a0;
    break;
  case 4:
    (*DAT_10121e0c)(s_doors_doorstop4_wav_1010758c);
    pcVar1 = s_doors_doorstop4_wav_1010758c;
    break;
  case 5:
    (*DAT_10121e0c)(s_doors_doorstop5_wav_10107578);
    pcVar1 = s_doors_doorstop5_wav_10107578;
    break;
  case 6:
    (*DAT_10121e0c)(s_doors_doorstop6_wav_10107564);
    pcVar1 = s_doors_doorstop6_wav_10107564;
    break;
  case 7:
    (*DAT_10121e0c)(s_doors_doorstop7_wav_10107550);
    pcVar1 = s_doors_doorstop7_wav_10107550;
    break;
  case 8:
    (*DAT_10121e0c)(s_doors_doorstop8_wav_1010753c);
    pcVar1 = s_doors_doorstop8_wav_1010753c;
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1f0) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  if (*(byte *)(param_1 + 0x184) != 0) {
    pcVar1 = FUN_10016d30((uint)*(byte *)(param_1 + 0x184));
    (*DAT_10121e0c)(pcVar1);
    uVar2 = (*DAT_10121f14)(pcVar1);
    *(undefined4 *)(param_1 + 0x160) = uVar2;
  }
  if (*(byte *)(param_1 + 0x186) != 0) {
    pcVar1 = FUN_10016d30((uint)*(byte *)(param_1 + 0x186));
    (*DAT_10121e0c)(pcVar1);
    uVar2 = (*DAT_10121f14)(pcVar1);
    *(undefined4 *)(param_1 + 0x168) = uVar2;
  }
  switch(*(undefined1 *)(param_1 + 0x185)) {
  case 1:
    *(int *)(param_1 + 0x164) = (int)&DAT_10104a5c - *(int *)(DAT_10122044 + 0x98);
    break;
  case 2:
    pcVar1 = &DAT_10104a58;
    goto LAB_10027504;
  case 3:
    *(int *)(param_1 + 0x164) = (int)&DAT_10104a54 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 4:
    *(int *)(param_1 + 0x164) = (int)s_NFIRE_10104a4c - *(int *)(DAT_10122044 + 0x98);
    break;
  case 5:
    pcVar1 = s_NCHEM_10104a44;
    goto LAB_10027504;
  case 6:
    *(int *)(param_1 + 0x164) = (int)&DAT_10104a3c - *(int *)(DAT_10122044 + 0x98);
    break;
  case 7:
    *(int *)(param_1 + 0x164) = (int)&DAT_10104a34 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 8:
    pcVar1 = &DAT_10104a30;
LAB_10027504:
    *(int *)(param_1 + 0x164) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
    break;
  case 9:
    *(int *)(param_1 + 0x164) = (int)&DAT_10104a2c - *(int *)(DAT_10122044 + 0x98);
    break;
  default:
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  switch(*(undefined1 *)(param_1 + 0x187)) {
  case 1:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a28 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 2:
    pcVar1 = &DAT_10104a24;
    break;
  case 3:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a20 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 4:
    *(int *)(param_1 + 0x16c) = (int)s_EFIRE_10104a18 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 5:
    pcVar1 = s_ECHEM_10104a10;
    break;
  case 6:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a08 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 7:
    *(int *)(param_1 + 0x16c) = (int)&DAT_10104a00 - *(int *)(DAT_10122044 + 0x98);
    return;
  case 8:
    pcVar1 = &DAT_101049fc;
    break;
  default:
    *(undefined4 *)(param_1 + 0x16c) = 0;
    return;
  }
  *(int *)(param_1 + 0x16c) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  return;
}

