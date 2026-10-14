
void __cdecl FUN_100b0a20(undefined4 *param_1,int param_2,char *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *this;
  void *extraout_ECX;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte local_80;
  byte local_7f [127];
  
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_3 + 1;
    cVar2 = *param_3;
    param_3 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar8 = 0;
  pcVar9 = pcVar9 + -uVar5;
  pbVar10 = &local_80;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pbVar10 = pbVar10 + 1;
  }
  pbVar10 = &local_80;
  if (0 < param_2) {
    this = (void *)0x0;
    puVar11 = param_1;
    do {
      uVar4 = FUN_100c8388(this,pbVar10);
      *puVar11 = uVar4;
      bVar3 = *pbVar10;
      while ((bVar3 != 0 && (bVar3 != 0x20))) {
        pbVar1 = pbVar10 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar1;
      }
      if (*pbVar10 == 0) break;
      pbVar10 = pbVar10 + 1;
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 1;
      this = extraout_ECX;
    } while (iVar8 < param_2);
  }
  iVar8 = iVar8 + 1;
  if (iVar8 < param_2) {
    puVar11 = param_1 + iVar8;
    for (iVar7 = param_2 - iVar8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}

