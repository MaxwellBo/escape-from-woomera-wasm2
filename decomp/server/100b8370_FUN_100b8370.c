
void __fastcall FUN_100b8370(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_zombie_mdl_10108588;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_zombie_claw_strike1_wav_1011c22c;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_claw_miss1_wav_1011c238);
  ppuVar3 = &PTR_s_zombie_claw_miss1_wav_1011c238;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_zo_attack1_wav_1011c240);
  ppuVar3 = &PTR_s_zombie_zo_attack1_wav_1011c240;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_zo_idle1_wav_1011c248);
  ppuVar3 = &PTR_s_zombie_zo_idle1_wav_1011c248;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_zo_alert10_wav_1011c258);
  ppuVar3 = &PTR_s_zombie_zo_alert10_wav_1011c258;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_zombie_zo_pain1_wav_1011c264);
  ppuVar3 = &PTR_s_zombie_zo_pain1_wav_1011c264;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < s_zombie_zo_pain1_wav_1011c26c);
  return;
}

