
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002bb40(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float local_c [3];
  
  fVar2 = _DAT_100602b0;
  puVar8 = (undefined4 *)&stack0xfffffff0;
  pfVar10 = (float *)&stack0xfffffff0;
  puVar7 = &DAT_100aaba0;
  for (iVar5 = 0xa2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  puVar7 = &DAT_100aaba4;
  do {
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = fVar2;
    fVar2 = fVar2 + (float)_DAT_100601c0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= (float)_DAT_100601c0);
  pfVar9 = (float *)(&DAT_100aaba4 + iVar5 * 3);
  fVar2 = _DAT_100602b0;
  do {
    pfVar9[-1] = 0.0;
    iVar5 = iVar5 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + (float)_DAT_100601c0;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= (float)_DAT_100601c0);
  puVar7 = &DAT_100aaba4 + iVar5 * 3;
  fVar2 = _DAT_100602b0;
  do {
    puVar7[-1] = fVar2;
    fVar2 = fVar2 + (float)_DAT_100601c0;
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
    fVar4 = _DAT_100602b0;
    fVar3 = _DAT_100602b0;
  } while (fVar2 <= (float)_DAT_100601c0);
  do {
    pfVar9 = (float *)(&DAT_100aaba4 + iVar5 * 3);
    fVar2 = _DAT_100602b0;
    do {
      iVar6 = iVar5;
      iVar5 = iVar6 + 1;
      pfVar9[-1] = fVar3;
      *pfVar9 = fVar4;
      pfVar9[1] = fVar2;
      fVar2 = fVar2 + (float)_DAT_10059cf0;
      pfVar9 = pfVar9 + 3;
    } while (fVar2 <= (float)_DAT_100601c0);
    fVar4 = fVar4 + (float)_DAT_10059cf0;
  } while ((fVar4 <= (float)_DAT_100601c0) ||
          (fVar3 = fVar3 + (float)_DAT_10059cf0, fVar4 = _DAT_100602b0,
          fVar3 <= (float)_DAT_100601c0));
  iVar11 = 3;
  puVar7 = &DAT_100aaba4 + iVar5 * 3;
  iVar6 = iVar6 + 4;
  do {
    puVar8 = puVar8 + 1;
    uVar1 = *puVar8;
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = uVar1;
    puVar7 = puVar7 + 3;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  pfVar9 = (float *)(&DAT_100aaba4 + iVar6 * 3);
  fVar2 = _DAT_1005f9c0;
  do {
    pfVar9[-1] = 0.0;
    iVar6 = iVar6 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + (float)_DAT_10059ec0;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= _DAT_10059ea0);
  puVar8 = &DAT_100aaba4 + iVar6 * 3;
  fVar2 = _DAT_1005f9c0;
  do {
    puVar8[-1] = fVar2;
    fVar2 = fVar2 + _DAT_10059ea0;
    *puVar8 = 0;
    puVar8[1] = 0;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 3;
  } while (fVar2 <= _DAT_10059ea0);
  iVar5 = 3;
  do {
    pfVar10 = pfVar10 + 1;
    fVar2 = *pfVar10;
    fVar3 = _DAT_1005f9c0;
    do {
      pfVar9 = (float *)(&DAT_100aaba4 + iVar6 * 3);
      fVar4 = _DAT_1005f9c0;
      do {
        iVar6 = iVar6 + 1;
        pfVar9[-1] = fVar3;
        *pfVar9 = fVar4;
        pfVar9[1] = fVar2;
        pfVar9 = pfVar9 + 3;
        fVar4 = fVar4 + (float)_DAT_10059ec0;
      } while (fVar4 <= _DAT_10059ea0);
      fVar3 = fVar3 + _DAT_10059ea0;
    } while (fVar3 <= _DAT_10059ea0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

