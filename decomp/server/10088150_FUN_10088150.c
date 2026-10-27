
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088150(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float local_98;
  float local_94 [3];
  int local_88 [4];
  float local_78;
  float local_68 [2];
  float local_60;
  undefined4 local_58;
  int local_44 [17];
  
  FUN_10086b10();
  if (_DAT_100dd5f8 < *(float *)(DAT_10126a38 + 100)) {
    *(undefined4 *)(DAT_10126a38 + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_10126a38 + 0xe0) == -1) ||
      (iVar1 = FUN_10084090(DAT_10126a38 + 0x74,(float *)&DAT_10124914), iVar1 == 0)) ||
     (iVar1 = FUN_10084090(DAT_10126a38 + 0x5c,(float *)&DAT_10124914), iVar1 == 0)) {
    FUN_10085720();
    iVar1 = *(int *)(DAT_10126a38 + 0xdc);
    if (((iVar1 != 5) && (iVar1 != 0xb)) && (iVar1 != 9)) {
      FUN_10088020();
    }
    *(float *)(DAT_10126a38 + 0x5c) =
         *(float *)(DAT_10126a38 + 0x74) + *(float *)(DAT_10126a38 + 0x5c);
    *(float *)(DAT_10126a38 + 0x60) =
         *(float *)(DAT_10126a38 + 0x78) + *(float *)(DAT_10126a38 + 0x60);
    *(float *)(DAT_10126a38 + 100) =
         *(float *)(DAT_10126a38 + 0x7c) + *(float *)(DAT_10126a38 + 100);
    FUN_10085720();
    FUN_10084280((float *)(DAT_10126a38 + 0x5c),*(float *)(DAT_10126a38 + 0x10),local_94);
    *(float *)(DAT_10126a38 + 0x5c) =
         *(float *)(DAT_10126a38 + 0x5c) - *(float *)(DAT_10126a38 + 0x74);
    *(float *)(DAT_10126a38 + 0x60) =
         *(float *)(DAT_10126a38 + 0x60) - *(float *)(DAT_10126a38 + 0x78);
    *(float *)(DAT_10126a38 + 100) =
         *(float *)(DAT_10126a38 + 100) - *(float *)(DAT_10126a38 + 0x7c);
    piVar2 = (int *)FUN_10088080(local_44,local_94);
    piVar3 = local_88;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_10085720();
    if (local_88[0] != 0) {
      *(undefined4 *)(DAT_10126a38 + 0xe0) = local_58;
      *(undefined4 *)(DAT_10126a38 + 0x5c) = DAT_10124914;
      *(undefined4 *)(DAT_10126a38 + 0x60) = DAT_10124918;
      *(undefined4 *)(DAT_10126a38 + 100) = DAT_1012491c;
      return;
    }
    if (local_78 != _DAT_100dd618) {
      if (*(int *)(DAT_10126a38 + 0xdc) == 10) {
        local_98 = (float)_DAT_100e4138 - *(float *)(DAT_10126a38 + 0xc4);
      }
      else {
        local_98 = 2.0;
        if (*(int *)(DAT_10126a38 + 0xdc) != 0xb) {
          local_98 = 1.0;
        }
      }
      FUN_10085810((float *)(DAT_10126a38 + 0x5c),local_68,(float *)(DAT_10126a38 + 0x5c),local_98);
      if ((float)_DAT_100df298 < local_60) {
        if (*(float *)(DAT_10126a38 + 100) <
            **(float **)(DAT_10126a38 + 0x4f4f0) * *(float *)(DAT_10126a38 + 0x10)) {
          *(undefined4 *)(DAT_10126a38 + 0xe0) = local_58;
          *(undefined4 *)(DAT_10126a38 + 100) = 0;
        }
        if ((*(float *)(DAT_10126a38 + 100) * *(float *)(DAT_10126a38 + 100) +
             *(float *)(DAT_10126a38 + 0x5c) * *(float *)(DAT_10126a38 + 0x5c) +
             *(float *)(DAT_10126a38 + 0x60) * *(float *)(DAT_10126a38 + 0x60) < _DAT_100e0000) ||
           ((*(int *)(DAT_10126a38 + 0xdc) != 10 && (*(int *)(DAT_10126a38 + 0xdc) != 0xb)))) {
          *(undefined4 *)(DAT_10126a38 + 0xe0) = local_58;
          *(undefined4 *)(DAT_10126a38 + 0x5c) = DAT_10124914;
          *(undefined4 *)(DAT_10126a38 + 0x60) = DAT_10124918;
          *(undefined4 *)(DAT_10126a38 + 100) = DAT_1012491c;
        }
        else {
          FUN_10084280((float *)(DAT_10126a38 + 0x5c),
                       ((float)_DAT_100dd628 - local_78) * *(float *)(DAT_10126a38 + 0x10) *
                       (float)_DAT_100ea5c8,local_94);
          piVar2 = (int *)FUN_10088080(local_44,local_94);
          piVar3 = local_88;
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          }
        }
        *(undefined4 *)(DAT_10126a38 + 0x5c) = *(undefined4 *)(DAT_10126a38 + 0x5c);
        *(undefined4 *)(DAT_10126a38 + 0x60) = *(undefined4 *)(DAT_10126a38 + 0x60);
        *(undefined4 *)(DAT_10126a38 + 100) = *(undefined4 *)(DAT_10126a38 + 100);
      }
    }
    FUN_10086b10();
  }
  return;
}

