
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10089220(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(DAT_10126a38 + 4) = param_1;
  FUN_10088f00();
  *(undefined4 *)(DAT_10126a38 + 0x4548c) = 0;
  *(float *)(DAT_10126a38 + 0x10) = (float)*(byte *)(DAT_10126a38 + 0x4545a) * (float)_DAT_100de1e0;
  FUN_10089130();
  FUN_10083b20((float *)(DAT_10126a38 + 0x44),(float *)(DAT_10126a38 + 0x14),
               (float *)(DAT_10126a38 + 0x20),(float *)(DAT_10126a38 + 0x2c));
  if ((*(int *)(DAT_10126a38 + 0xd8) == 0) && (*(int *)(DAT_10126a38 + 0x1fc) < 1)) {
    if (((*(int *)(DAT_10126a38 + 0xdc) == 8) || (*(int *)(DAT_10126a38 + 0xdc) == 0)) ||
       (iVar1 = FUN_10086e90(), iVar1 == 0)) {
      FUN_10086cf0();
      *(undefined4 *)(DAT_10126a38 + 0xec) = *(undefined4 *)(DAT_10126a38 + 0xe4);
      if (*(int *)(DAT_10126a38 + 0xe8) < -0x10) {
        *(undefined4 *)(DAT_10126a38 + 0xec) = 0;
      }
      else {
        *(undefined4 *)(DAT_10126a38 + 0xec) = *(undefined4 *)(DAT_10126a38 + 0xe4);
      }
      if (*(int *)(DAT_10126a38 + 0xe0) == -1) {
        *(float *)(DAT_10126a38 + 0x9c) = -*(float *)(DAT_10126a38 + 100);
      }
      DAT_10126a40 = 0;
      if (((*(int *)(DAT_10126a38 + 0xd0) == 0) &&
          ((*(uint *)(DAT_10126a38 + 0xb8) & 0x1000000) == 0)) &&
         (iVar2 = FUN_10087e90(), iVar2 != 0)) {
        DAT_10126a40 = 1;
      }
      FUN_10085370();
      FUN_100878b0();
      if ((*(int *)(DAT_10126a38 + 0xd0) == 0) &&
         ((*(uint *)(DAT_10126a38 + 0xb8) & 0x1000000) == 0)) {
        if (iVar2 == 0) {
          if ((*(int *)(DAT_10126a38 + 0xdc) != 3) && (*(int *)(DAT_10126a38 + 0xdc) != 8)) {
            *(undefined4 *)(DAT_10126a38 + 0xdc) = 3;
          }
        }
        else {
          FUN_10087b00(iVar2);
        }
      }
      if ((*(int *)(DAT_10126a38 + 0xe0) != -1) && ((*(byte *)(DAT_10126a38 + 0x45476) & 0x20) != 0)
         ) {
        FUN_10084280((float *)(DAT_10126a38 + 0x5c),0.3,(float *)(DAT_10126a38 + 0x5c));
      }
      switch(*(undefined4 *)(DAT_10126a38 + 0xdc)) {
      case 0:
        break;
      default:
        (**(code **)(DAT_10126a38 + 0x4f564))
                  (s_Bogus_pmove_player_movetype__i_o_10115354,*(undefined4 *)(DAT_10126a38 + 0xdc),
                   *(undefined4 *)(DAT_10126a38 + 4));
        return;
      case 3:
        iVar1 = FUN_10086af0();
        if (iVar1 == 0) {
          FUN_100858b0();
        }
        if (*(float *)(DAT_10126a38 + 0xcc) != _DAT_100dd5f8) {
          FUN_10087f60();
          FUN_10085990();
          FUN_10086b10();
          return;
        }
        if ((1 < *(int *)(DAT_10126a38 + 0xe4)) && (*(int *)(DAT_10126a38 + 0xe8) != -0x13)) {
          if (*(int *)(DAT_10126a38 + 0xe4) == 2) {
            FUN_100888f0();
          }
          if ((*(float *)(DAT_10126a38 + 100) < _DAT_100dd5f8) &&
             (*(float *)(DAT_10126a38 + 0xcc) != _DAT_100dd5f8)) {
            *(undefined4 *)(DAT_10126a38 + 0xcc) = 0;
          }
          if ((*(byte *)(DAT_10126a38 + 0x45476) & 2) == 0) {
            *(uint *)(DAT_10126a38 + 200) = *(uint *)(DAT_10126a38 + 200) & 0xfffffffd;
          }
          else {
            FUN_10088580();
          }
          FUN_100866a0();
          *(float *)(DAT_10126a38 + 0x5c) =
               *(float *)(DAT_10126a38 + 0x5c) - *(float *)(DAT_10126a38 + 0x74);
          *(float *)(DAT_10126a38 + 0x60) =
               *(float *)(DAT_10126a38 + 0x60) - *(float *)(DAT_10126a38 + 0x78);
          *(float *)(DAT_10126a38 + 100) =
               *(float *)(DAT_10126a38 + 100) - *(float *)(DAT_10126a38 + 0x7c);
          FUN_10086cf0();
          FUN_10088d10();
          return;
        }
        if ((*(byte *)(DAT_10126a38 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_10126a38 + 200) = *(uint *)(DAT_10126a38 + 200) & 0xfffffffd;
        }
        else if (iVar2 == 0) {
          FUN_10088580();
        }
        if (*(int *)(DAT_10126a38 + 0xe0) != -1) {
          *(undefined4 *)(DAT_10126a38 + 100) = 0;
          FUN_10086440();
        }
        FUN_10085720();
        if (*(int *)(DAT_10126a38 + 0xe0) == -1) {
          FUN_100869b0();
        }
        else {
          FUN_10085f10();
        }
        FUN_10086cf0();
        *(float *)(DAT_10126a38 + 0x5c) =
             *(float *)(DAT_10126a38 + 0x5c) - *(float *)(DAT_10126a38 + 0x74);
        *(float *)(DAT_10126a38 + 0x60) =
             *(float *)(DAT_10126a38 + 0x60) - *(float *)(DAT_10126a38 + 0x78);
        *(float *)(DAT_10126a38 + 100) =
             *(float *)(DAT_10126a38 + 100) - *(float *)(DAT_10126a38 + 0x7c);
        FUN_10085720();
        iVar2 = FUN_10086af0();
        if (iVar2 == 0) {
          FUN_10085930();
        }
        if (*(int *)(DAT_10126a38 + 0xe0) != -1) {
          *(undefined4 *)(DAT_10126a38 + 100) = 0;
        }
        FUN_10088b60();
        FUN_10088d10();
        return;
      case 5:
        FUN_10086b10();
        if ((*(byte *)(DAT_10126a38 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_10126a38 + 200) = *(uint *)(DAT_10126a38 + 200) & 0xfffffffd;
        }
        else if (iVar2 == 0) {
          FUN_10088580();
        }
        *(float *)(DAT_10126a38 + 0x5c) =
             *(float *)(DAT_10126a38 + 0x74) + *(float *)(DAT_10126a38 + 0x5c);
        *(float *)(DAT_10126a38 + 0x60) =
             *(float *)(DAT_10126a38 + 0x78) + *(float *)(DAT_10126a38 + 0x60);
        *(float *)(DAT_10126a38 + 100) =
             *(float *)(DAT_10126a38 + 0x7c) + *(float *)(DAT_10126a38 + 100);
        FUN_10085990();
        *(float *)(DAT_10126a38 + 0x5c) =
             *(float *)(DAT_10126a38 + 0x5c) - *(float *)(DAT_10126a38 + 0x74);
        *(float *)(DAT_10126a38 + 0x60) =
             *(float *)(DAT_10126a38 + 0x60) - *(float *)(DAT_10126a38 + 0x78);
        *(float *)(DAT_10126a38 + 100) =
             *(float *)(DAT_10126a38 + 100) - *(float *)(DAT_10126a38 + 0x7c);
        return;
      case 6:
      case 10:
        FUN_10088150();
        return;
      case 8:
        FUN_10088460();
        return;
      }
    }
  }
  else {
    FUN_100872e0();
    FUN_10086cf0();
  }
  return;
}

