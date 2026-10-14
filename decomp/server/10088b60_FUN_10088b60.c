
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088b60(void)

{
  byte *pbVar1;
  int iVar2;
  void *this;
  float local_4;
  
  if (*(int *)(DAT_10126a38 + 0xe0) != -1) {
    if ((*(int *)(DAT_10126a38 + 0xd0) == 0) && (_DAT_100e843c <= *(float *)(DAT_10126a38 + 0x9c)))
    {
      local_4 = 0.5;
      if (*(int *)(DAT_10126a38 + 0xe4) < 1) {
        if (*(float *)(DAT_10126a38 + 0x9c) <= _DAT_100ece14) {
          if (*(float *)(DAT_10126a38 + 0x9c) <= _DAT_100ef390) {
            if (*(float *)(DAT_10126a38 + 0x9c) < _DAT_100de484) {
              local_4 = 0.0;
            }
          }
          else {
            pbVar1 = (byte *)(**(code **)(DAT_10126a38 + 0x4f554))
                                       (DAT_10126a38 + 0x4f3f0,&DAT_10115350);
            iVar2 = FUN_100c8388(this,pbVar1);
            if (iVar2 == 1) {
              (**(code **)(DAT_10126a38 + 0x4f5b4))
                        (2,s_player_pl_fallpain3_wav_10105e48,0x3f800000,0x3f4ccccd,0,100);
            }
            local_4 = 0.85;
          }
        }
        else {
          (**(code **)(DAT_10126a38 + 0x4f5b4))
                    (2,s_player_pl_fallpain3_wav_10105e48,0x3f800000,0x3f4ccccd,0,100);
          local_4 = 1.0;
        }
      }
      if ((float)_DAT_100de1e8 < local_4) {
        *(undefined4 *)(DAT_10126a38 + 0x94) = 0;
        FUN_10085370();
        iVar2 = FUN_100851f0(*(undefined1 *)(DAT_10126a38 + 0x1f0));
        FUN_10084940(iVar2,local_4);
        *(float *)(DAT_10126a38 + 0xa8) = *(float *)(DAT_10126a38 + 0x9c) * (float)_DAT_100ef388;
        if (_DAT_100de45c < *(float *)(DAT_10126a38 + 0xa0)) {
          *(undefined4 *)(DAT_10126a38 + 0xa0) = 0x41000000;
        }
      }
    }
    if (*(int *)(DAT_10126a38 + 0xe0) != -1) {
      *(undefined4 *)(DAT_10126a38 + 0x9c) = 0;
    }
  }
  return;
}

