
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10086b10(void)

{
  int iVar1;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (*(float *)(DAT_10126a38 + (*(int *)(DAT_10126a38 + 0xbc) * 3 + 0x13d49) * 4) +
            *(float *)(DAT_10126a38 + (*(int *)(DAT_10126a38 + 0xbc) * 3 + 0x13d3d) * 4)) *
            (float)_DAT_100dd648 + *(float *)(DAT_10126a38 + 0x38);
  local_8 = (*(float *)(DAT_10126a38 + 0x4f528 + *(int *)(DAT_10126a38 + 0xbc) * 0xc) +
            *(float *)(DAT_10126a38 + 0x4f4f8 + *(int *)(DAT_10126a38 + 0xbc) * 0xc)) *
            (float)_DAT_100dd648 + *(float *)(DAT_10126a38 + 0x3c);
  local_4 = *(float *)(DAT_10126a38 + 0x4f4fc + *(int *)(DAT_10126a38 + 0xbc) * 0xc) +
            *(float *)(DAT_10126a38 + 0x40) + _DAT_100dd618;
  *(undefined4 *)(DAT_10126a38 + 0xe4) = 0;
  *(undefined4 *)(DAT_10126a38 + 0xe8) = 0xffffffff;
  iVar1 = (**(code **)(DAT_10126a38 + 0x4f574))(&local_c,&local_10);
  if (((iVar1 < -2) && (-0xf < iVar1)) || ((-0x14 < iVar1 && (iVar1 < -0x10)))) {
    *(int *)(DAT_10126a38 + 0xe8) = iVar1;
    *(undefined4 *)(DAT_10126a38 + 0xe4) = 1;
    local_4 = (*(float *)(DAT_10126a38 + 0x4f52c + *(int *)(DAT_10126a38 + 0xbc) * 0xc) +
              *(float *)(DAT_10126a38 + 0x4f4fc + *(int *)(DAT_10126a38 + 0xbc) * 0xc)) *
              (float)_DAT_100dd648 + *(float *)(DAT_10126a38 + 0x40);
    iVar1 = (**(code **)(DAT_10126a38 + 0x4f574))(&local_c,0);
    if (((iVar1 < -2) && (-0xf < iVar1)) || ((-0x14 < iVar1 && (iVar1 < -0x10)))) {
      *(undefined4 *)(DAT_10126a38 + 0xe4) = 2;
      local_4 = *(float *)(DAT_10126a38 + 0x88) + *(float *)(DAT_10126a38 + 0x40);
      iVar1 = (**(code **)(DAT_10126a38 + 0x4f574))(&local_c,0);
      if (((iVar1 < -2) && (-0xf < iVar1)) || (iVar1 == -0x13)) {
        *(undefined4 *)(DAT_10126a38 + 0xe4) = 3;
      }
    }
    if ((local_10 < -8) && (-0xf < local_10)) {
      FUN_100840c0((float *)(DAT_10126a38 + 0x74),
                   (float)*(int *)(DAT_10126a38 + 0xe4) * (float)_DAT_100ef350,
                   (float *)(&DAT_1011523c + (local_10 * 3 + 0x1b) * -4),
                   (float *)(DAT_10126a38 + 0x74));
    }
  }
  return 1 < *(int *)(DAT_10126a38 + 0xe4);
}

