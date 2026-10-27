
undefined4 __fastcall FUN_1001fe40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_100a4ff0)(s_sprites_iplayer_spr_10078bc8);
  *(undefined4 *)(param_1 + 0xc7c) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_iplayerblue_spr_10078bb0);
  *(undefined4 *)(param_1 + 0xc74) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_iplayerred_spr_10078b98);
  *(undefined4 *)(param_1 + 0xc78) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_iplayerdead_spr_10078b80);
  *(undefined4 *)(param_1 + 0xc84) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_tile_spr_10078b6c);
  *(undefined4 *)(param_1 + 0xc8c) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_laserbeam_spr_10078b54);
  *(undefined4 *)(param_1 + 0xc90) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_camera_spr_10078b40);
  *(undefined4 *)(param_1 + 0xc80) = uVar1;
  uVar1 = (*DAT_100a4ff0)(s_sprites_crosshairs_spr_10078b28);
  *(undefined4 *)(param_1 + 0xc94) = uVar1;
  return 1;
}

