
uint __cdecl FUN_100943e0(uint param_1,char *param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char local_8 [8];
  
  if (DAT_10131048 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0) {
    return 0xffffffff;
  }
  bVar3 = *(byte *)(&DAT_10126bb8 + param_1 * 0xd);
  iVar7 = param_1 * 0xd;
  puVar1 = &DAT_10126bbc + param_1 * 0x34;
  do {
    bVar4 = 0;
    param_1 = 0;
    if (bVar3 != 0) {
      do {
        if (puVar1[param_1] != -1) {
          bVar3 = puVar1[param_1];
          puVar1[param_1] = 0xff;
          uVar5 = 0xffffffff;
          pcVar8 = (char *)&DAT_10114e60;
          goto code_r0x10094488;
        }
        bVar4 = bVar4 + 1;
        param_1 = (uint)bVar4;
      } while (bVar4 < bVar3);
    }
    FUN_10094250((int)puVar1,(uint)bVar3);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
    if (cVar2 == '\0') break;
code_r0x10094488:
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
  }
  uVar5 = ~uVar5;
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar8 = (char *)(&DAT_10126ba8 + iVar7);
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar8 = param_2;
  do {
    pcVar10 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar10 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar2 != '\0');
  pcVar8 = pcVar9 + -uVar5;
  pcVar9 = pcVar10 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_100c8506(local_8,&DAT_101083c8);
  uVar5 = 0xffffffff;
  pcVar8 = local_8;
  do {
    pcVar9 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  do {
    pcVar8 = param_2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar8 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar8;
  } while (cVar2 != '\0');
  pcVar9 = pcVar9 + -uVar5;
  pcVar8 = pcVar8 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return (uint)bVar3;
}

