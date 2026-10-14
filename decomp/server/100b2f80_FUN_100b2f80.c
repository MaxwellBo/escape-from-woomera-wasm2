
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b2f80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10131e18;
  for (iVar1 = 0x160; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_10131d10;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_1013239c = 0;
  FUN_100b0f60(0x1010fa24);
  FUN_100b0f60(0x10108be0);
  FUN_100b0f60(0x1010fa40);
  FUN_100b0f60(0x1010fa30);
  FUN_100b0f60(0x1011ba18);
  FUN_100b2e90(0x10108b84);
  FUN_100b0f60(0x10108b74);
  FUN_100b2e90(0x10111c64);
  FUN_100b2e90(0x1010337c);
  FUN_100b0f60(0x10108bc0);
  FUN_100b0f60(0x1011ba0c);
  FUN_100b2e90(0x10108bb0);
  FUN_100b0f60(0x10108ba4);
  FUN_100b0f60(0x10108b94);
  FUN_100b2e90(0x10103390);
  FUN_100b0f60(0x10108b48);
  FUN_100b2e90(0x101150a4);
  FUN_100b0f60(0x10108b1c);
  FUN_100b2e90(0x10108b3c);
  FUN_100b0f60(0x10108b2c);
  FUN_100b2e90(0x10108b64);
  FUN_100b0f60(0x10108b54);
  FUN_100b2e90(0x101150b4);
  FUN_100b2e90(0x10108af8);
  FUN_100b2e90(0x10108ae8);
  FUN_100b2e90(0x10108b08);
  FUN_100b2e90(0x10108ad8);
  FUN_100b2e90(0x10101b10);
  FUN_100b2e90(0x101054a4);
  FUN_100b2e90(0x101054b8);
  FUN_100b2e90(0x1011b9f8);
  FUN_100b2e90(0x1011b9e0);
  FUN_100b2e90(0x1011b9cc);
  FUN_100b2e90(0x1011b9b4);
  FUN_100b2e90(0x1011b998);
  FUN_100b2e90(0x1011b97c);
  FUN_100b2e90(0x1011b960);
  iVar1 = (**(code **)(*DAT_10121db8 + 0x1c))();
  if (iVar1 != 0) {
    FUN_100b0f60(0x10114db8);
  }
  DAT_10131d04 = (*DAT_10121e08)(s_sprites_zerogxplode_spr_1011b948);
  DAT_10131cf0 = (*DAT_10121e08)(s_sprites_WXplo1_spr_1011b934);
  DAT_10131cf2 = (*DAT_10121e08)(s_sprites_steam1_spr_1011b920);
  DAT_10132398 = (*DAT_10121e08)(s_sprites_bubble_spr_10108020);
  DAT_10131d08 = (*DAT_10121e08)(s_sprites_bloodspray_spr_1011b908);
  DAT_10131cf4 = (*DAT_10121e08)(s_sprites_blood_spr_1011b8f4);
  DAT_10131d06 = (*DAT_10121e08)(PTR_s_sprites_laserbeam_spr_1011b508);
  _DAT_10131e10 = (*DAT_10121e08)(s_sprites_laserdot_spr_10115480);
  (*DAT_10121e08)(s_models_grenade_mdl_10108710);
  (*DAT_10121e08)(s_sprites_explode1_spr_1011b8dc);
  (*DAT_10121e0c)(s_weapons_debris1_wav_1010d2f4);
  (*DAT_10121e0c)(s_weapons_debris2_wav_1010d308);
  (*DAT_10121e0c)(s_weapons_debris3_wav_1010d31c);
  (*DAT_10121e0c)(s_weapons_grenade_hit1_wav_1010d330);
  (*DAT_10121e0c)(s_weapons_grenade_hit2_wav_1010d34c);
  (*DAT_10121e0c)(s_weapons_grenade_hit3_wav_1010d368);
  (*DAT_10121e0c)(s_weapons_bullet_hit1_wav_101170a0);
  (*DAT_10121e0c)(s_weapons_bullet_hit2_wav_10117088);
  (*DAT_10121e0c)(s_items_weapondrop1_wav_1011b8c4);
  return;
}

