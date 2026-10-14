
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10025dd0(void *this,char *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;
  
  iVar11 = 0;
  piVar12 = (int *)((int)this + 0x14);
  piVar5 = piVar12;
  while (*piVar5 != 0) {
    iVar11 = iVar11 + 1;
    piVar5 = piVar5 + 1;
    if (0xf < iVar11) {
      return;
    }
  }
  pcVar13 = param_1;
  if (*param_1 == '#') {
    pcVar13 = param_1 + 1;
  }
  puVar6 = (undefined *)(*DAT_100a5054)(pcVar13);
  if (puVar6 == (undefined *)0x0) {
    DAT_100a9edf = 100;
    DAT_100a9ede = 100;
    DAT_100a9edd = 100;
    DAT_100a9edc = 100;
    _DAT_100a9efc = PTR_s_Custom_10079574;
    uVar9 = 0xffffffff;
    _DAT_100a9ed8 = 2;
    DAT_100a9ee0 = 0xf0;
    DAT_100a9ee1 = 0x6e;
    DAT_100a9ee2 = 0;
    DAT_100a9ee3 = 0;
    DAT_100a9ee4 = 0xbf800000;
    DAT_100a9ee8 = 0x3f333333;
    _DAT_100a9eec = 0x3c23d70a;
    _DAT_100a9ef0 = 0x3fc00000;
    _DAT_100a9ef8 = 0x3e800000;
    _DAT_100a9ef4 = 0x40a00000;
    do {
      pcVar13 = param_1;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar13;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar13 = pcVar13 + -uVar9;
    pcVar15 = (char *)&DAT_100a9f04;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    puVar6 = &DAT_100a9ed8;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    DAT_100a9f00 = &DAT_100a9f04;
  }
  param_1 = (char *)0x0;
  do {
    iVar3 = *piVar12;
    if (iVar3 != 0) {
      pbVar14 = *(byte **)(iVar3 + 0x28);
      pbVar7 = *(byte **)(puVar6 + 0x28);
      do {
        bVar2 = *pbVar7;
        bVar16 = bVar2 < *pbVar14;
        if (bVar2 != *pbVar14) {
LAB_10025f17:
          iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_10025f1c;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar16 = bVar2 < pbVar14[1];
        if (bVar2 != pbVar14[1]) goto LAB_10025f17;
        pbVar7 = pbVar7 + 2;
        pbVar14 = pbVar14 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_10025f1c:
      if (iVar8 == 0) {
        return;
      }
      fVar4 = *(float *)(puVar6 + 0x10) - *(float *)(iVar3 + 0x10);
      if (fVar4 <= _DAT_10059a18) {
        fVar4 = -fVar4;
      }
      if (fVar4 < (float)_DAT_100601b8) {
        fVar4 = *(float *)(puVar6 + 0xc) - *(float *)(iVar3 + 0xc);
        if (fVar4 <= _DAT_10059a18) {
          fVar4 = -fVar4;
        }
        if (fVar4 < (float)_DAT_100601b8) {
          *piVar12 = 0;
        }
      }
    }
    piVar12 = piVar12 + 1;
    param_1 = param_1 + 1;
    if (0xf < (int)param_1) {
      *(undefined **)((int)this + iVar11 * 4 + 0x14) = puVar6;
      *(undefined4 *)((int)this + iVar11 * 4 + 0x54) = param_2;
      return;
    }
  } while( true );
}

