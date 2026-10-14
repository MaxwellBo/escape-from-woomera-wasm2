
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10089641(int param_1,byte param_2)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float *pfVar12;
  byte *unaff_EBX;
  float *pfVar13;
  byte *unaff_ESI;
  int iVar14;
  float10 in_ST0;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  float fStack_4;
  
  *unaff_ESI = *unaff_ESI | param_2;
  pbVar6 = (byte *)CONCAT31((int3)((uint)unaff_ESI >> 8),(char)unaff_ESI + 'j');
  *pbVar6 = *pbVar6 | param_2;
  bVar9 = (char)*(undefined4 *)(pbVar6 + param_1 + 0x8961c10) * '\x10';
  *unaff_EBX = *unaff_EBX | bVar9;
  cVar3 = (char)unaff_EBX + 'j';
  pbVar6 = (byte *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar3);
  *pbVar6 = *pbVar6 | bVar9;
  bRamd9000000 = cVar3 + (char)((uint)unaff_EBX >> 8) * -0x6d;
  pbVar6 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),(ushort)bRamd9000000);
  *pbVar6 = *pbVar6 | bVar9;
  bRamd9000000 = bRamd9000000 + 0x6a;
  pbVar6 = (byte *)CONCAT31((int3)((uint)pbVar6 >> 8),bRamd9000000);
  *pbVar6 = *pbVar6 | bVar9;
  bRamd9000000 = bRamd9000000 | 0xb9;
  pfVar12 = &fStack_4;
  pfVar13 = &fStack_4;
  puVar10 = &DAT_101249a0;
  for (; param_1 != 0; param_1 = param_1 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar7 = 0;
  puVar10 = &DAT_101249a4;
  do {
    puVar10[-1] = 0;
    *puVar10 = 0;
    puVar10[1] = (float)in_ST0;
    in_ST0 = in_ST0 + (float10)_DAT_100e1b30;
    iVar7 = iVar7 + 1;
    puVar10 = puVar10 + 3;
  } while (in_ST0 <= (float10)_DAT_100e1b30);
  pfVar11 = (float *)(&DAT_101249a4 + iVar7 * 3);
  fVar2 = _DAT_100ef398;
  do {
    pfVar11[-1] = 0.0;
    iVar7 = iVar7 + 1;
    *pfVar11 = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e1b30;
    pfVar11[1] = 0.0;
    pfVar11 = pfVar11 + 3;
  } while (fVar2 <= (float)_DAT_100e1b30);
  puVar10 = &DAT_101249a4 + iVar7 * 3;
  fVar2 = _DAT_100ef398;
  do {
    puVar10[-1] = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e1b30;
    *puVar10 = 0;
    puVar10[1] = 0;
    iVar7 = iVar7 + 1;
    puVar10 = puVar10 + 3;
    fVar5 = _DAT_100ef398;
    fVar4 = _DAT_100ef398;
  } while (fVar2 <= (float)_DAT_100e1b30);
  do {
    pfVar11 = (float *)(&DAT_101249a4 + iVar7 * 3);
    fVar2 = _DAT_100ef398;
    do {
      iVar8 = iVar7;
      iVar7 = iVar8 + 1;
      pfVar11[-1] = fVar4;
      *pfVar11 = fVar5;
      pfVar11[1] = fVar2;
      fVar2 = fVar2 + (float)_DAT_100dd5f0;
      pfVar11 = pfVar11 + 3;
    } while (fVar2 <= (float)_DAT_100e1b30);
    fVar5 = fVar5 + (float)_DAT_100dd5f0;
  } while ((fVar5 <= (float)_DAT_100e1b30) ||
          (fVar4 = fVar4 + (float)_DAT_100dd5f0, fVar5 = _DAT_100ef398,
          fVar4 <= (float)_DAT_100e1b30));
  iVar14 = 3;
  uStack00000004 = 0x3f800000;
  uStack00000008 = 0x40c00000;
  puVar10 = &DAT_101249a4 + iVar7 * 3;
  iVar8 = iVar8 + 4;
  do {
    pfVar12 = pfVar12 + 1;
    uVar1 = *pfVar12;
    puVar10[-1] = 0;
    *puVar10 = 0;
    puVar10[1] = uVar1;
    puVar10 = puVar10 + 3;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  pfVar12 = (float *)(&DAT_101249a4 + iVar8 * 3);
  fVar2 = _DAT_100ef394;
  do {
    pfVar12[-1] = 0.0;
    iVar8 = iVar8 + 1;
    *pfVar12 = fVar2;
    fVar2 = fVar2 + (float)_DAT_100e4138;
    pfVar12[1] = 0.0;
    pfVar12 = pfVar12 + 3;
  } while (fVar2 <= _DAT_100de4ac);
  puVar10 = &DAT_101249a4 + iVar8 * 3;
  fVar2 = _DAT_100ef394;
  do {
    puVar10[-1] = fVar2;
    fVar2 = fVar2 + _DAT_100de4ac;
    *puVar10 = 0;
    puVar10[1] = 0;
    iVar8 = iVar8 + 1;
    puVar10 = puVar10 + 3;
  } while (fVar2 <= _DAT_100de4ac);
  iVar7 = 3;
  do {
    pfVar13 = pfVar13 + 1;
    fVar2 = *pfVar13;
    fVar4 = _DAT_100ef394;
    do {
      pfVar12 = (float *)(&DAT_101249a4 + iVar8 * 3);
      fVar5 = _DAT_100ef394;
      do {
        iVar8 = iVar8 + 1;
        pfVar12[-1] = fVar4;
        *pfVar12 = fVar5;
        pfVar12[1] = fVar2;
        pfVar12 = pfVar12 + 3;
        fVar5 = fVar5 + (float)_DAT_100e4138;
      } while (fVar5 <= _DAT_100de4ac);
      fVar4 = fVar4 + _DAT_100de4ac;
    } while (fVar4 <= _DAT_100de4ac);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}

