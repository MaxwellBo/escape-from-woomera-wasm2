
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1002b6e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(DAT_100acc38 + 4) = param_1;
  FUN_1002b3c0();
  *(undefined4 *)(DAT_100acc38 + 0x4548c) = 0;
  *(float *)(DAT_100acc38 + 0x10) = (float)*(byte *)(DAT_100acc38 + 0x4545a) * (float)_DAT_1005d2c0;
  FUN_1002b5f0();
  FUN_10026230((float *)(DAT_100acc38 + 0x44),(float *)(DAT_100acc38 + 0x14),
               (float *)(DAT_100acc38 + 0x20),(float *)(DAT_100acc38 + 0x2c));
  if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
    DAT_100b6fec = 0;
    DAT_100b6fc8 = 0;
    DAT_100b6ff0 = 0;
  }
  if ((*(int *)(DAT_100acc38 + 0xd8) == 0) && (*(int *)(DAT_100acc38 + 0x1fc) < 1)) {
    if (((*(int *)(DAT_100acc38 + 0xdc) == 8) || (*(int *)(DAT_100acc38 + 0xdc) == 0)) ||
       (iVar1 = FUN_10028f90(), iVar1 == 0)) {
      FUN_10028df0();
      *(undefined4 *)(DAT_100acc38 + 0xec) = *(undefined4 *)(DAT_100acc38 + 0xe4);
      if (*(int *)(DAT_100acc38 + 0xe8) < -0x10) {
        *(undefined4 *)(DAT_100acc38 + 0xec) = 0;
      }
      else {
        *(undefined4 *)(DAT_100acc38 + 0xec) = *(undefined4 *)(DAT_100acc38 + 0xe4);
      }
      if (*(int *)(DAT_100acc38 + 0xe0) == -1) {
        *(float *)(DAT_100acc38 + 0x9c) = -*(float *)(DAT_100acc38 + 100);
      }
      DAT_100acc40 = 0;
      if (((*(int *)(DAT_100acc38 + 0xd0) == 0) &&
          ((*(uint *)(DAT_100acc38 + 0xb8) & 0x1000000) == 0)) &&
         (iVar2 = FUN_1002a350(), iVar2 != 0)) {
        DAT_100acc40 = 1;
      }
      FUN_10027470();
      FUN_10029d70();
      if ((*(int *)(DAT_100acc38 + 0xd0) == 0) &&
         ((*(uint *)(DAT_100acc38 + 0xb8) & 0x1000000) == 0)) {
        if (iVar2 == 0) {
          if ((*(int *)(DAT_100acc38 + 0xdc) != 3) && (*(int *)(DAT_100acc38 + 0xdc) != 8)) {
            *(undefined4 *)(DAT_100acc38 + 0xdc) = 3;
          }
        }
        else {
          FUN_10029fc0(iVar2);
        }
      }
      if ((*(int *)(DAT_100acc38 + 0xe0) != -1) && ((*(byte *)(DAT_100acc38 + 0x45476) & 0x20) != 0)
         ) {
        FUN_10031290((float *)(DAT_100acc38 + 0x5c),0.3,(float *)(DAT_100acc38 + 0x5c));
      }
      switch(*(undefined4 *)(DAT_100acc38 + 0xdc)) {
      case 0:
        break;
      default:
        (**(code **)(DAT_100acc38 + 0x4f564))
                  (s_Bogus_pmove_player_movetype__i_o_10079a18,*(undefined4 *)(DAT_100acc38 + 0xdc),
                   *(undefined4 *)(DAT_100acc38 + 4));
        return;
      case 3:
        iVar1 = FUN_10028bf0();
        if (iVar1 == 0) {
          FUN_100279b0();
        }
        if (*(float *)(DAT_100acc38 + 0xcc) != _DAT_10059a18) {
          FUN_1002a420();
          FUN_10027a90();
          FUN_10028c10();
          return;
        }
        if ((1 < *(int *)(DAT_100acc38 + 0xe4)) && (*(int *)(DAT_100acc38 + 0xe8) != -0x13)) {
          if (*(int *)(DAT_100acc38 + 0xe4) == 2) {
            FUN_1002adb0();
          }
          if ((*(float *)(DAT_100acc38 + 100) < _DAT_10059a18) &&
             (*(float *)(DAT_100acc38 + 0xcc) != _DAT_10059a18)) {
            *(undefined4 *)(DAT_100acc38 + 0xcc) = 0;
          }
          if ((*(byte *)(DAT_100acc38 + 0x45476) & 2) == 0) {
            *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) & 0xfffffffd;
          }
          else {
            FUN_1002aa40();
          }
          FUN_100287a0();
          *(float *)(DAT_100acc38 + 0x5c) =
               *(float *)(DAT_100acc38 + 0x5c) - *(float *)(DAT_100acc38 + 0x74);
          *(float *)(DAT_100acc38 + 0x60) =
               *(float *)(DAT_100acc38 + 0x60) - *(float *)(DAT_100acc38 + 0x78);
          *(float *)(DAT_100acc38 + 100) =
               *(float *)(DAT_100acc38 + 100) - *(float *)(DAT_100acc38 + 0x7c);
          FUN_10028df0();
          FUN_1002b1d0();
          return;
        }
        if ((*(byte *)(DAT_100acc38 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) & 0xfffffffd;
        }
        else if (iVar2 == 0) {
          FUN_1002aa40();
        }
        if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
          *(undefined4 *)(DAT_100acc38 + 100) = 0;
          FUN_10028540();
        }
        FUN_10027820();
        if (*(int *)(DAT_100acc38 + 0xe0) == -1) {
          FUN_10028ab0();
        }
        else {
          FUN_10028010();
        }
        FUN_10028df0();
        *(float *)(DAT_100acc38 + 0x5c) =
             *(float *)(DAT_100acc38 + 0x5c) - *(float *)(DAT_100acc38 + 0x74);
        *(float *)(DAT_100acc38 + 0x60) =
             *(float *)(DAT_100acc38 + 0x60) - *(float *)(DAT_100acc38 + 0x78);
        *(float *)(DAT_100acc38 + 100) =
             *(float *)(DAT_100acc38 + 100) - *(float *)(DAT_100acc38 + 0x7c);
        FUN_10027820();
        iVar2 = FUN_10028bf0();
        if (iVar2 == 0) {
          FUN_10027a30();
        }
        if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
          *(undefined4 *)(DAT_100acc38 + 100) = 0;
        }
        FUN_1002b020();
        FUN_1002b1d0();
        return;
      case 5:
        FUN_10028c10();
        if ((*(byte *)(DAT_100acc38 + 0x45476) & 2) == 0) {
          *(uint *)(DAT_100acc38 + 200) = *(uint *)(DAT_100acc38 + 200) & 0xfffffffd;
        }
        else if (iVar2 == 0) {
          FUN_1002aa40();
        }
        *(float *)(DAT_100acc38 + 0x5c) =
             *(float *)(DAT_100acc38 + 0x74) + *(float *)(DAT_100acc38 + 0x5c);
        *(float *)(DAT_100acc38 + 0x60) =
             *(float *)(DAT_100acc38 + 0x78) + *(float *)(DAT_100acc38 + 0x60);
        *(float *)(DAT_100acc38 + 100) =
             *(float *)(DAT_100acc38 + 0x7c) + *(float *)(DAT_100acc38 + 100);
        FUN_10027a90();
        *(float *)(DAT_100acc38 + 0x5c) =
             *(float *)(DAT_100acc38 + 0x5c) - *(float *)(DAT_100acc38 + 0x74);
        *(float *)(DAT_100acc38 + 0x60) =
             *(float *)(DAT_100acc38 + 0x60) - *(float *)(DAT_100acc38 + 0x78);
        *(float *)(DAT_100acc38 + 100) =
             *(float *)(DAT_100acc38 + 100) - *(float *)(DAT_100acc38 + 0x7c);
        return;
      case 6:
      case 10:
        FUN_1002a610();
        return;
      case 8:
        FUN_1002a920();
        return;
      }
    }
  }
  else {
    FUN_100293e0();
    FUN_10028df0();
  }
  return;
}

