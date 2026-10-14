
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a610(void)

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
  
  FUN_10028c10();
  if (_DAT_10059a18 < *(float *)(DAT_100acc38 + 100)) {
    *(undefined4 *)(DAT_100acc38 + 0xe0) = 0xffffffff;
  }
  if (((*(int *)(DAT_100acc38 + 0xe0) == -1) ||
      (iVar1 = FUN_1002ce90(DAT_100acc38 + 0x74,(float *)&DAT_100aab14), iVar1 == 0)) ||
     (iVar1 = FUN_1002ce90(DAT_100acc38 + 0x5c,(float *)&DAT_100aab14), iVar1 == 0)) {
    FUN_10027820();
    iVar1 = *(int *)(DAT_100acc38 + 0xdc);
    if (((iVar1 != 5) && (iVar1 != 0xb)) && (iVar1 != 9)) {
      FUN_1002a4e0();
    }
    *(float *)(DAT_100acc38 + 0x5c) =
         *(float *)(DAT_100acc38 + 0x74) + *(float *)(DAT_100acc38 + 0x5c);
    *(float *)(DAT_100acc38 + 0x60) =
         *(float *)(DAT_100acc38 + 0x78) + *(float *)(DAT_100acc38 + 0x60);
    *(float *)(DAT_100acc38 + 100) =
         *(float *)(DAT_100acc38 + 0x7c) + *(float *)(DAT_100acc38 + 100);
    FUN_10027820();
    FUN_10031290((float *)(DAT_100acc38 + 0x5c),*(float *)(DAT_100acc38 + 0x10),local_94);
    *(float *)(DAT_100acc38 + 0x5c) =
         *(float *)(DAT_100acc38 + 0x5c) - *(float *)(DAT_100acc38 + 0x74);
    *(float *)(DAT_100acc38 + 0x60) =
         *(float *)(DAT_100acc38 + 0x60) - *(float *)(DAT_100acc38 + 0x78);
    *(float *)(DAT_100acc38 + 100) =
         *(float *)(DAT_100acc38 + 100) - *(float *)(DAT_100acc38 + 0x7c);
    piVar2 = (int *)FUN_1002a540(local_44,local_94);
    piVar3 = local_88;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_10027820();
    if (local_88[0] != 0) {
      *(undefined4 *)(DAT_100acc38 + 0xe0) = local_58;
      *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      return;
    }
    if (local_78 != _DAT_10059eb0) {
      if (*(int *)(DAT_100acc38 + 0xdc) == 10) {
        local_98 = (float)_DAT_10059ec0 - *(float *)(DAT_100acc38 + 0xc4);
      }
      else {
        local_98 = 2.0;
        if (*(int *)(DAT_100acc38 + 0xdc) != 0xb) {
          local_98 = 1.0;
        }
      }
      FUN_10027910((float *)(DAT_100acc38 + 0x5c),local_68,(float *)(DAT_100acc38 + 0x5c),local_98);
      if ((float)_DAT_1005d770 < local_60) {
        if (*(float *)(DAT_100acc38 + 100) <
            **(float **)(DAT_100acc38 + 0x4f4f0) * *(float *)(DAT_100acc38 + 0x10)) {
          *(undefined4 *)(DAT_100acc38 + 0xe0) = local_58;
          *(undefined4 *)(DAT_100acc38 + 100) = 0;
        }
        if ((*(float *)(DAT_100acc38 + 100) * *(float *)(DAT_100acc38 + 100) +
             *(float *)(DAT_100acc38 + 0x5c) * *(float *)(DAT_100acc38 + 0x5c) +
             *(float *)(DAT_100acc38 + 0x60) * *(float *)(DAT_100acc38 + 0x60) < _DAT_10060264) ||
           ((*(int *)(DAT_100acc38 + 0xdc) != 10 && (*(int *)(DAT_100acc38 + 0xdc) != 0xb)))) {
          *(undefined4 *)(DAT_100acc38 + 0xe0) = local_58;
          *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
          *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
          *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
        }
        else {
          FUN_10031290((float *)(DAT_100acc38 + 0x5c),
                       ((float)_DAT_10059a10 - local_78) * *(float *)(DAT_100acc38 + 0x10) *
                       (float)_DAT_1005d768,local_94);
          piVar2 = (int *)FUN_1002a540(local_44,local_94);
          piVar3 = local_88;
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar3 = *piVar2;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
          }
        }
        *(undefined4 *)(DAT_100acc38 + 0x5c) = *(undefined4 *)(DAT_100acc38 + 0x5c);
        *(undefined4 *)(DAT_100acc38 + 0x60) = *(undefined4 *)(DAT_100acc38 + 0x60);
        *(undefined4 *)(DAT_100acc38 + 100) = *(undefined4 *)(DAT_100acc38 + 100);
      }
    }
    FUN_10028c10();
  }
  return;
}

