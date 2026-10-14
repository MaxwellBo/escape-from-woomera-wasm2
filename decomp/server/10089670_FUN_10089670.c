
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089670(void)

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
  
  fVar2 = _DAT_100ef398;
  puVar8 = (undefined4 *)&stack0xfffffff0;
  pfVar10 = (float *)&stack0xfffffff0;
  puVar7 = &DAT_101249a0;
  for (iVar5 = 0xa2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = 0;
  puVar7 = &DAT_101249a4;
  do {
    puVar7[-1] = 0;
    *puVar7 = 0;
    puVar7[1] = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e1b30;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
  } while (fVar2 <= (float)_DAT_100e1b30);
  pfVar9 = (float *)(&DAT_101249a4 + iVar5 * 3);
  fVar2 = _DAT_100ef398;
  do {
    pfVar9[-1] = 0.0;
    iVar5 = iVar5 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e1b30;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= (float)_DAT_100e1b30);
  puVar7 = &DAT_101249a4 + iVar5 * 3;
  fVar2 = _DAT_100ef398;
  do {
    puVar7[-1] = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e1b30;
    *puVar7 = 0;
    puVar7[1] = 0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 3;
    fVar4 = _DAT_100ef398;
    fVar3 = _DAT_100ef398;
  } while (fVar2 <= (float)_DAT_100e1b30);
  do {
    pfVar9 = (float *)(&DAT_101249a4 + iVar5 * 3);
    fVar2 = _DAT_100ef398;
    do {
      iVar6 = iVar5;
      iVar5 = iVar6 + 1;
      pfVar9[-1] = fVar3;
      *pfVar9 = fVar4;
      pfVar9[1] = fVar2;
      fVar2 = fVar2 + (float)_DAT_100dd5f0;
      pfVar9 = pfVar9 + 3;
    } while (fVar2 <= (float)_DAT_100e1b30);
    fVar4 = fVar4 + (float)_DAT_100dd5f0;
  } while ((fVar4 <= (float)_DAT_100e1b30) ||
          (fVar3 = fVar3 + (float)_DAT_100dd5f0, fVar4 = _DAT_100ef398,
          fVar3 <= (float)_DAT_100e1b30));
  iVar11 = 3;
  puVar7 = &DAT_101249a4 + iVar5 * 3;
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
  pfVar9 = (float *)(&DAT_101249a4 + iVar6 * 3);
  fVar2 = _DAT_100ef394;
  do {
    pfVar9[-1] = 0.0;
    iVar6 = iVar6 + 1;
    *pfVar9 = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e4138;
    pfVar9[1] = 0.0;
    pfVar9 = pfVar9 + 3;
  } while (fVar2 <= _DAT_100de4ac);
  puVar8 = &DAT_101249a4 + iVar6 * 3;
  fVar2 = _DAT_100ef394;
  do {
    puVar8[-1] = fVar2;
    fVar2 = fVar2 + _DAT_100de4ac;
    *puVar8 = 0;
    puVar8[1] = 0;
    iVar6 = iVar6 + 1;
    puVar8 = puVar8 + 3;
  } while (fVar2 <= _DAT_100de4ac);
  iVar5 = 3;
  do {
    pfVar10 = pfVar10 + 1;
    fVar2 = *pfVar10;
    fVar3 = _DAT_100ef394;
    do {
      pfVar9 = (float *)(&DAT_101249a4 + iVar6 * 3);
      fVar4 = _DAT_100ef394;
      do {
        iVar6 = iVar6 + 1;
        pfVar9[-1] = fVar3;
        *pfVar9 = fVar4;
        pfVar9[1] = fVar2;
        pfVar9 = pfVar9 + 3;
        fVar4 = fVar4 + (float)_DAT_100e4138;
      } while (fVar4 <= _DAT_100de4ac);
      fVar3 = fVar3 + _DAT_100de4ac;
    } while (fVar3 <= _DAT_100de4ac);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

