
void __cdecl FUN_100b0920(float *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *extraout_ECX;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  float *pfVar11;
  float10 fVar12;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte local_80;
  byte local_7f [127];
  
  uVar3 = 0xffffffff;
  do {
    pcVar9 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pbVar8 = (byte *)(pcVar9 + -uVar3);
  pbVar10 = &local_80;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar10 = pbVar10 + 4;
  }
  iVar7 = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar10 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar8 = &local_80;
  puVar5 = (undefined1 *)0x0;
  pfVar11 = param_1;
  do {
    fVar12 = FUN_100c82a6(puVar5,pbVar8);
    bVar2 = *pbVar8;
    *pfVar11 = (float)fVar12;
    while ((bVar2 != 0 && (bVar2 != 0x20))) {
      pbVar10 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar10;
    }
    if (*pbVar8 == 0) break;
    pbVar8 = pbVar8 + 1;
    iVar7 = iVar7 + 1;
    pfVar11 = pfVar11 + 1;
    puVar5 = extraout_ECX;
  } while (iVar7 < 3);
  if (iVar7 < 2) {
    iVar7 = iVar7 + 1;
    if (iVar7 < 3) {
      pfVar11 = param_1 + iVar7;
      for (iVar6 = 3 - iVar7; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar11 = 0.0;
        pfVar11 = pfVar11 + 1;
      }
      return;
    }
  }
  else if (((*pbVar8 == 0x2e) && (pbVar8[1] == 0x2e)) && (pbVar8[2] == 0x20)) {
    FUN_100b0880(&local_8c,(char *)(pbVar8 + 2));
    fVar12 = (float10)(*DAT_10121f74)(*param_1,local_8c);
    *param_1 = (float)fVar12;
    fVar12 = (float10)(*DAT_10121f74)(param_1[1],uStack_88);
    param_1[1] = (float)fVar12;
    fVar12 = (float10)(*DAT_10121f74)(param_1[2],uStack_84);
    param_1[2] = (float)fVar12;
  }
  return;
}

