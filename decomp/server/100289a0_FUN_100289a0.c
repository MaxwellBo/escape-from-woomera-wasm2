
void __fastcall FUN_100289a0(int param_1)

{
  char *pcVar1;
  
  switch(*(undefined1 *)(param_1 + 0x15c)) {
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
  }
  *(int *)(*(int *)(param_1 + 4) + 0x1ec) = (int)pcVar1 - *(int *)(DAT_10122044 + 0x98);
  return;
}

