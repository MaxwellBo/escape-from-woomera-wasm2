
void FUN_1002b1d0(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_100acc38 + 0xec) == 0) {
    if (*(int *)(DAT_100acc38 + 0xe4) == 0) {
      return;
    }
    if (*(int *)(DAT_100acc38 + 0xe8) < -0x10) {
      return;
    }
  }
  else if (*(int *)(DAT_100acc38 + 0xe4) != 0) {
    return;
  }
  uVar1 = (**(code **)(DAT_100acc38 + 0x4f588))(0,3);
  switch(uVar1) {
  case 0:
    (**(code **)(DAT_100acc38 + 0x4f5b4))
              (4,s_player_pl_wade1_wav_100797b4,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 1:
    (**(code **)(DAT_100acc38 + 0x4f5b4))
              (4,s_player_pl_wade2_wav_100797a0,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 2:
    (**(code **)(DAT_100acc38 + 0x4f5b4))
              (4,s_player_pl_wade3_wav_1007978c,0x3f800000,0x3f4ccccd,0,100);
    return;
  case 3:
    (**(code **)(DAT_100acc38 + 0x4f5b4))
              (4,s_player_pl_wade4_wav_10079778,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

