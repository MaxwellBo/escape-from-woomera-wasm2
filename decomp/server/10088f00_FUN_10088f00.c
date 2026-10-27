
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10088f00(void)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  fVar2 = SQRT(*(float *)(DAT_10126a38 + 0x45470) * *(float *)(DAT_10126a38 + 0x45470) +
               *(float *)(DAT_10126a38 + 0x45468) * *(float *)(DAT_10126a38 + 0x45468) +
               *(float *)(DAT_10126a38 + 0x4546c) * *(float *)(DAT_10126a38 + 0x4546c));
  fVar1 = *(float *)(DAT_10126a38 + 0x1f8);
  if (fVar1 != (float)_DAT_100de1e8) {
    if (*(float *)(DAT_10126a38 + 500) <= fVar1) {
      fVar1 = *(float *)(DAT_10126a38 + 500);
    }
    *(float *)(DAT_10126a38 + 500) = fVar1;
  }
  if ((fVar2 != (float)_DAT_100de1e8) && (*(float *)(DAT_10126a38 + 500) < fVar2)) {
    fVar2 = *(float *)(DAT_10126a38 + 500) / fVar2;
    *(float *)(DAT_10126a38 + 0x45468) = fVar2 * *(float *)(DAT_10126a38 + 0x45468);
    *(float *)(DAT_10126a38 + 0x4546c) = fVar2 * *(float *)(DAT_10126a38 + 0x4546c);
    *(float *)(DAT_10126a38 + 0x45470) = fVar2 * *(float *)(DAT_10126a38 + 0x45470);
  }
  if (((*(uint *)(DAT_10126a38 + 0xb8) & 0x1001000) != 0) || (*(int *)(DAT_10126a38 + 0xd0) != 0)) {
    *(undefined4 *)(DAT_10126a38 + 0x45468) = 0;
    *(undefined4 *)(DAT_10126a38 + 0x4546c) = 0;
    *(undefined4 *)(DAT_10126a38 + 0x45470) = 0;
    *(undefined2 *)(DAT_10126a38 + 0x45476) = 0;
  }
  FUN_10088eb0((float *)(DAT_10126a38 + 0xa0));
  if (*(int *)(DAT_10126a38 + 0xd0) == 0) {
    local_c = *(float *)(DAT_10126a38 + 0x4545c) + *(float *)(DAT_10126a38 + 0xa0);
    local_8 = *(float *)(DAT_10126a38 + 0x45460) + *(float *)(DAT_10126a38 + 0xa4);
    local_4 = *(float *)(DAT_10126a38 + 0x45464) + *(float *)(DAT_10126a38 + 0xa8);
    fVar3 = FUN_10088e10(&local_c,(float *)(DAT_10126a38 + 0x5c),
                         *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 100),
                         *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x68));
    *(float *)(DAT_10126a38 + 0x4c) = (float)(fVar3 * (float10)_DAT_100de4fc);
    *(float *)(DAT_10126a38 + 0x44) = local_c;
    *(float *)(DAT_10126a38 + 0x48) = local_8;
  }
  else {
    *(undefined4 *)(DAT_10126a38 + 0x44) = *(undefined4 *)(DAT_10126a38 + 0x50);
    *(undefined4 *)(DAT_10126a38 + 0x48) = *(undefined4 *)(DAT_10126a38 + 0x54);
    *(undefined4 *)(DAT_10126a38 + 0x4c) = *(undefined4 *)(DAT_10126a38 + 0x58);
  }
  if (*(int *)(DAT_10126a38 + 0xd0) != 0) {
    *(undefined4 *)(DAT_10126a38 + 0x88) = 0xc1000000;
  }
  if (_DAT_100ddaec < *(float *)(DAT_10126a38 + 0x48)) {
    *(float *)(DAT_10126a38 + 0x48) = *(float *)(DAT_10126a38 + 0x48) - _DAT_100ddae8;
  }
  return;
}

