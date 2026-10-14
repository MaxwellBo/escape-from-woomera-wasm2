
undefined4 FUN_10041930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  FUN_10026030(param_3,param_2);
  uVar2 = FUN_10026090();
  if (uVar2 == 0xff) {
    DAT_100baee0 = 0;
    DAT_100baedc = DAT_100baed8;
    puVar3 = &DAT_100b7824;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1000;
    } while ((int)puVar3 < 0x100baed4);
    return 1;
  }
  if (DAT_100baee0 < (int)(uVar2 + 1)) {
    DAT_100baee0 = uVar2 + 1;
  }
  pcVar4 = FUN_10026180();
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar6 = -1;
  pcVar4 = &DAT_100b7824 + uVar2 * 1000;
  do {
    pcVar7 = pcVar4;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar7;
  } while (cVar1 != '\0');
  pcVar4 = pcVar8 + -uVar5;
  pcVar8 = pcVar7 + -1;
  for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return 1;
}

