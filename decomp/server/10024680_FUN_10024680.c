
void __fastcall FUN_10024680(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_10121e08)(s_models_crossbow_bolt_mdl_101064f4);
  (*DAT_10121e0c)(s_weapons_xbow_hitbod1_wav_10106580);
  (*DAT_10121e0c)(s_weapons_xbow_hitbod2_wav_10106564);
  (*DAT_10121e0c)(s_weapons_xbow_fly1_wav_1010654c);
  (*DAT_10121e0c)(s_weapons_xbow_hit1_wav_10106534);
  (*DAT_10121e0c)(s_fvox_beep_wav_10106524);
  uVar1 = (*DAT_10121e08)(s_sprites_streak_spr_10106510);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  return;
}

