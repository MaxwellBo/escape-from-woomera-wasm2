
void __fastcall FUN_10055e90(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_leech_mdl_1010fd1c;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_leech_leech_bite1_wav_1010fc00;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_leech_leech_alert1_wav_1010fc0c);
  ppuVar3 = &PTR_s_leech_leech_alert1_wav_1010fc0c;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < s_leech_leech_alert2_wav_1010fc14);
  return;
}

