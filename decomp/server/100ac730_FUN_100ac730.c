
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100ac730(int *param_1)

{
  if ((float)param_1[0xdc] == _DAT_100dd5f8) {
    param_1[0xdc] = (int)(*DAT_10122044 + _DAT_100dd618);
    return;
  }
  if ((float)param_1[0xdc] <= *DAT_10122044) {
    param_1[0xdc] = (int)(*DAT_10122044 + _DAT_100dd618);
    FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),3,
                 s_turret_tu_ping_wav_1011a3b8,0x3f800000,0x3f4ccccd,0,100);
    (**(code **)(*param_1 + 0x238))();
    return;
  }
  if (0 < param_1[0xc5]) {
    (**(code **)(*param_1 + 0x23c))();
  }
  return;
}

