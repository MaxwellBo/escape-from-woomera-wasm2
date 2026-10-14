
void __fastcall FUN_10021dc0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar2 = s_models_controller_mdl_101063f0;
  }
  else {
    pcVar2 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar2);
  ppuVar3 = &PTR_s_controller_con_attack1_wav_10106068;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_controller_con_idle1_wav_10106074);
  ppuVar3 = &PTR_s_controller_con_idle1_wav_10106074;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_controller_con_alert1_wav_10106088);
  ppuVar3 = &PTR_s_controller_con_alert1_wav_10106088;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_controller_con_pain1_wav_10106094);
  ppuVar3 = &PTR_s_controller_con_pain1_wav_10106094;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &PTR_s_controller_con_die1_wav_101060a0);
  ppuVar3 = &PTR_s_controller_con_die1_wav_101060a0;
  do {
    (*DAT_10121e0c)(*ppuVar3);
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar3 < &DAT_101060a8);
  (*DAT_10121e08)(s_sprites_xspark4_spr_10106420);
  FUN_100b0f60(0x10106408);
  FUN_100b0f60(0x101063d8);
  return;
}

