
void __fastcall FUN_1004d220(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  (*DAT_10121e08)(s_models_v_9mmhandgun_mdl_1010ec44);
  (*DAT_10121e08)(s_models_w_9mmhandgun_mdl_1010ebc4);
  (*DAT_10121e08)(s_models_p_9mmhandgun_mdl_1010ec2c);
  uVar2 = (*DAT_10121e08)(s_models_shell_mdl_1010dc34);
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  (*DAT_10121e0c)(s_items_9mmclip1_wav_10106684);
  (*DAT_10121e0c)(s_items_9mmclip2_wav_1010ec18);
  (*DAT_10121e0c)(s_weapons_pl_gun1_wav_1010dbf4);
  (*DAT_10121e0c)(s_weapons_pl_gun2_wav_1010dc08);
  (*DAT_10121e0c)(s_weapons_pl_gun3_wav_1010ec04);
  uVar1 = (*DAT_10121ff0)(1,s_events_glock1_sc_1010ebf0);
  *(undefined2 *)(param_1 + 0x124) = uVar1;
  uVar1 = (*DAT_10121ff0)(1,s_events_glock2_sc_1010ebdc);
  *(undefined2 *)(param_1 + 0x126) = uVar1;
  return;
}

