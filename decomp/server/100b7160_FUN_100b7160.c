
void FUN_100b7160(void)

{
  undefined **ppuVar1;
  
  (*DAT_10121e08)(s_models_tree_mdl_1011c1fc);
  (*DAT_10121e08)(s_sprites_flare3_spr_1011a3cc);
  ppuVar1 = &PTR_s_zombie_claw_strike1_wav_1011c120;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &PTR_s_zombie_claw_miss1_wav_1011c12c);
  ppuVar1 = &PTR_s_zombie_claw_miss1_wav_1011c12c;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &PTR_s_models_fungus_small__mdl_1011c134);
  return;
}

