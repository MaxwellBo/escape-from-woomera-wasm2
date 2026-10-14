
void __cdecl FUN_100b0880(float *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *extraout_ECX;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  float *pfVar11;
  float10 fVar12;
  byte local_80;
  byte local_7f [127];
  
  uVar4 = 0xffffffff;
  do {
    pcVar9 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar9;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar9 = pcVar9 + -uVar4;
  pbVar10 = &local_80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  iVar8 = 0;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar10 = &local_80;
  puVar6 = (undefined1 *)0x0;
  pfVar11 = param_1;
  do {
    fVar12 = FUN_100c82a6(puVar6,pbVar10);
    bVar3 = *pbVar10;
    *pfVar11 = (float)fVar12;
    while ((bVar3 != 0 && (bVar3 != 0x20))) {
      pbVar1 = pbVar10 + 1;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
    }
    if (*pbVar10 == 0) break;
    pbVar10 = pbVar10 + 1;
    iVar8 = iVar8 + 1;
    pfVar11 = pfVar11 + 1;
    puVar6 = extraout_ECX;
  } while (iVar8 < 3);
  if ((iVar8 < 2) && (iVar8 = iVar8 + 1, iVar8 < 3)) {
    pfVar11 = param_1 + iVar8;
    for (iVar7 = 3 - iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 1;
    }
  }
  return;
}

