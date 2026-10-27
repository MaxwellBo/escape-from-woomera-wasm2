
void FUN_10065210(int *param_1)

{
  int *piVar1;
  
  *(uint *)(param_1[1] + 0x168) = *(uint *)(param_1[1] + 0x168) | 0x80000000;
  piVar1 = (int *)FUN_100aec40(0,s_game_player_equip_10111c74);
  if (piVar1 != (int *)0x0) {
    do {
      (**(code **)(*piVar1 + 0xe0))(param_1);
      piVar1 = (int *)FUN_100aec40((int)piVar1,s_game_player_equip_10111c74);
    } while (piVar1 != (int *)0x0);
    return;
  }
  FUN_1007f800(param_1,0x10111c64);
  FUN_1007f800(param_1,0x1010337c);
  (**(code **)(*param_1 + 0x90))(0x44,&DAT_1010ec5c,0xfa);
  return;
}

