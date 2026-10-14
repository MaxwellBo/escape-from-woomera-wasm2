
void __fastcall FUN_1008b490(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_10121e08)(s_models_rpgrocket_mdl_10115498);
  uVar1 = (*DAT_10121e08)(s_sprites_smoke_spr_10102d00);
  *(undefined4 *)(param_1 + 0x30c) = uVar1;
  (*DAT_10121e0c)(s_weapons_rocket1_wav_10102cec);
  return;
}

