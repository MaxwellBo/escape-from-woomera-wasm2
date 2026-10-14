
void __fastcall FUN_10095ff0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) != 1) {
    (*DAT_10121efc)(1,s_Unknown_spectator_impulse_101172c0);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
    return;
  }
  if (DAT_1013105c == 0) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_1013105c + 0x7c);
    iVar2 = iVar1;
  }
  while( true ) {
    iVar1 = FUN_100aec40(iVar1,s_info_player_deathmatch_10114ed8);
    if (iVar1 == iVar2) {
      (*DAT_10121efc)(1,s_Could_not_find_a_spawn_spot__101172a0);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
      return;
    }
    if (iVar1 != 0) break;
    iVar1 = 0;
  }
  DAT_1013105c = *(int *)(*(int *)(iVar1 + 4) + 0x208);
  FUN_100afe10(param_1,DAT_1013105c + 0x88);
  iVar2 = DAT_1013105c;
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(DAT_1013105c + 0xd0);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar2 + 0xd4);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar2 + 0xd8);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xa0) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x184) = 0;
  return;
}

