
void FUN_1009d4b0(void)

{
  undefined **ppuVar1;
  
  (*DAT_10121e08)(s_models_tentacle2_mdl_101182f0);
  (*DAT_10121e0c)(s_ambience_flies_wav_10118470);
  (*DAT_10121e0c)(s_ambience_squirm2_wav_10118458);
  (*DAT_10121e0c)(s_tentacle_te_alert1_wav_10118440);
  (*DAT_10121e0c)(s_tentacle_te_alert2_wav_10118428);
  (*DAT_10121e0c)(s_tentacle_te_flies1_wav_10118410);
  (*DAT_10121e0c)(s_tentacle_te_move1_wav_101183f8);
  (*DAT_10121e0c)(s_tentacle_te_move2_wav_101183e0);
  (*DAT_10121e0c)(s_tentacle_te_roar1_wav_101183c8);
  (*DAT_10121e0c)(s_tentacle_te_roar2_wav_101183b0);
  (*DAT_10121e0c)(s_tentacle_te_search1_wav_10118398);
  (*DAT_10121e0c)(s_tentacle_te_search2_wav_10118380);
  (*DAT_10121e0c)(s_tentacle_te_sing1_wav_10118368);
  (*DAT_10121e0c)(s_tentacle_te_sing2_wav_10118350);
  (*DAT_10121e0c)(s_tentacle_te_squirm2_wav_10118338);
  (*DAT_10121e0c)(s_tentacle_te_strike1_wav_101182cc);
  (*DAT_10121e0c)(s_tentacle_te_strike2_wav_101182b4);
  (*DAT_10121e0c)(s_tentacle_te_swing1_wav_10118320);
  (*DAT_10121e0c)(s_tentacle_te_swing2_wav_10118308);
  ppuVar1 = &PTR_s_tentacle_te_strike1_wav_101180a0;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &PTR_s_player_pl_dirt1_wav_101180a8);
  ppuVar1 = &PTR_s_player_pl_dirt1_wav_101180a8;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &PTR_s_player_pl_slosh1_wav_101180b8);
  ppuVar1 = &PTR_s_player_pl_slosh1_wav_101180b8;
  do {
    (*DAT_10121e0c)(*ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while (ppuVar1 < &DAT_101180c8);
  return;
}

