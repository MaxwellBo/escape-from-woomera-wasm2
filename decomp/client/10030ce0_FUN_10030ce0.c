
undefined4 FUN_10030ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint local_4;
  
  FUN_10026030(param_3,param_2);
  local_4 = FUN_10026090();
  puVar4 = &local_4;
  pcVar2 = FUN_10026180();
  pcVar2 = FUN_10030c40(pcVar2,(int *)puVar4);
  uVar5 = 0xffffffff;
  piVar10 = (int *)0x0;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_100b28a4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2 = FUN_10026180();
  pcVar2 = FUN_10030c40(pcVar2,piVar10);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_100b2924;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10030c90((char *)&DAT_100b2924);
  piVar10 = (int *)0x0;
  pcVar2 = FUN_10026180();
  pcVar2 = FUN_10030c40(pcVar2,piVar10);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_100b29a4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10030c90((char *)&DAT_100b29a4);
  piVar10 = (int *)0x0;
  pcVar2 = FUN_10026180();
  pcVar2 = FUN_10030c40(pcVar2,piVar10);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_100b2a24;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10030c90((char *)&DAT_100b2a24);
  piVar10 = (int *)0x0;
  pcVar2 = FUN_10026180();
  pcVar2 = FUN_10030c40(pcVar2,piVar10);
  uVar5 = 0xffffffff;
  do {
    pcVar7 = pcVar2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar7 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar7;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar7 + -uVar5;
  pcVar7 = (char *)&DAT_100b2aa4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_10030c90((char *)&DAT_100b2aa4);
  if ((DAT_100a5178 == 0) || (uVar5 = FUN_1003d4f0(DAT_100a5178), (char)uVar5 != '\0')) {
    switch(local_4) {
    case 1:
      DAT_100b2b24 = 1;
      puVar8 = &DAT_100b2b25;
      break;
    case 2:
      puVar8 = &DAT_100b2b24;
      break;
    case 3:
      FUN_100499f0(&DAT_100b2b24,(byte *)&DAT_100b28a4);
      iVar11 = -1;
      iVar9 = 0x80;
      puVar4 = (uint *)FUN_10030cc0(&DAT_100b2b24);
      FUN_1002c1b0(&DAT_100a3fcc,puVar4,iVar9,iVar11);
      return 1;
    case 4:
      FUN_100499f0(&DAT_100b2b24,(byte *)&DAT_100b28a4);
      uVar3 = FUN_10030cc0(&DAT_100b2b24);
      (*DAT_100a506c)(uVar3);
      return 1;
    default:
      goto switchD_10030e5b_default;
    }
    FUN_100499f0(puVar8,(byte *)&DAT_100b28a4);
    uVar3 = FUN_10030cc0(&DAT_100b2b24);
    (*DAT_100a5068)(uVar3);
  }
switchD_10030e5b_default:
  return 1;
}

