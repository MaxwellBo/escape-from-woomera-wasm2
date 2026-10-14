
void __fastcall FUN_1003e060(int *param_1)

{
  (**(code **)(*param_1 + 8))(0);
  *(int *)param_1[1] = (int)s_garg_stomp_1010d06c - DAT_10122044[0x26];
  *(undefined4 *)(param_1[1] + 0x1e4) = *DAT_10122044;
  *(undefined4 *)(param_1[1] + 0x138) = 0x41f00000;
  *(int *)(param_1[1] + 0xb8) = (int)s_sprites_gargeye1_spr_1010d03c - DAT_10122044[0x26];
  *(undefined4 *)(param_1[1] + 0x148) = 2;
  *(undefined4 *)(param_1[1] + 0x14c) = 0;
  FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),4,
               s_weapons_mine_charge_wav_1010d054,0x3f800000,0x3f4ccccd,0,0x37);
  return;
}

