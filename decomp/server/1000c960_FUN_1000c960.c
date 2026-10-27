
void __fastcall FUN_1000c960(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_barnacle_mdl_10102de4;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  (*DAT_10121e0c)(s_barnacle_bcl_alert2_wav_10102e00);
  (*DAT_10121e0c)(s_barnacle_bcl_bite3_wav_10102e60);
  (*DAT_10121e0c)(s_barnacle_bcl_chew1_wav_10102e18);
  (*DAT_10121e0c)(s_barnacle_bcl_chew2_wav_10102e30);
  (*DAT_10121e0c)(s_barnacle_bcl_chew3_wav_10102e48);
  (*DAT_10121e0c)(s_barnacle_bcl_die1_wav_10102e78);
  (*DAT_10121e0c)(s_barnacle_bcl_die3_wav_10102e90);
  return;
}

