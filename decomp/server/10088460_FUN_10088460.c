
void FUN_10088460(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_c [3];
  
  fVar3 = *(float *)(DAT_10126a38 + 0x45468);
  fVar4 = *(float *)(DAT_10126a38 + 0x4546c);
  FUN_10084210((float *)(DAT_10126a38 + 0x14));
  FUN_10084210((float *)(DAT_10126a38 + 0x20));
  pfVar5 = (float *)(DAT_10126a38 + 0x14);
  iVar7 = 3;
  pfVar6 = local_c;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_c[2] = local_c[2] + *(float *)(DAT_10126a38 + 0x45470);
  FUN_100840c0((float *)(DAT_10126a38 + 0x38),*(float *)(DAT_10126a38 + 0x10),local_c,
               (float *)(DAT_10126a38 + 0x38));
  *(undefined4 *)(DAT_10126a38 + 0x5c) = 0;
  *(undefined4 *)(DAT_10126a38 + 0x60) = 0;
  *(undefined4 *)(DAT_10126a38 + 100) = 0;
  return;
}

