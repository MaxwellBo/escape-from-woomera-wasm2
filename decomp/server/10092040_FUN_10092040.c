
void FUN_10092040(int param_1)

{
  uint *puVar1;
  int *piVar2;
  
  if (DAT_101323b0 != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x168);
    *puVar1 = *puVar1 | 0x80000000;
  }
  for (piVar2 = (int *)FUN_100aec40(0,s_game_player_equip_10111c74); piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_100aec40((int)piVar2,s_game_player_equip_10111c74)) {
    (**(code **)(*piVar2 + 0xe0))(param_1);
  }
  return;
}

