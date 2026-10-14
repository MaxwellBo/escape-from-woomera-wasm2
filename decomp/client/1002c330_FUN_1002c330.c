
void FUN_1002c330(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_12 [2];
  char *pcStack_10;
  int local_c;
  int aiStack_8 [2];
  
  pcVar2 = (char *)(&DAT_100acc4c + param_1 * 0x40);
  pcVar6 = (char *)0x0;
  local_c = 0;
  (*DAT_100a5064)(pcVar2,&local_c,&DAT_100ad2c4);
  if (DAT_100a4dcc + -0x28 < local_c + 10) {
    iVar8 = 10;
    aiStack_8[0] = 0;
    pcStack_10 = (char *)0x0;
    acStack_12[0] = *pcVar2;
    pcVar7 = pcVar2;
    while (acStack_12[0] != '\0') {
      if ((acStack_12[0] == '/') && (pcVar7[1] == '(')) {
        pcVar9 = pcVar7 + 2;
        pcVar7 = pcVar7 + 2;
        cVar1 = *pcVar9;
        while ((cVar1 != '\0' && (cVar1 != ')'))) {
          pcVar9 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar9;
        }
        if (*pcVar7 != '\0') {
          pcVar7 = pcVar7 + 1;
        }
        acStack_12[0] = *pcVar7;
        if (acStack_12[0] == '\0') {
          return;
        }
      }
      acStack_12[1] = 0;
      if ((acStack_12[0] == ' ') && (pcVar7 != pcVar2)) {
        pcVar6 = pcVar7;
      }
      (*DAT_100a5064)(acStack_12,aiStack_8,&DAT_100ad2c4);
      iVar8 = iVar8 + aiStack_8[0];
      if (DAT_100a4dcc + -0x28 < iVar8) {
        pcStack_10 = pcVar6;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = pcVar7 + -1;
          pcStack_10 = pcVar6;
        }
        goto LAB_1002c41d;
      }
      pcVar9 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      acStack_12[0] = *pcVar9;
    }
  }
  return;
LAB_1002c41d:
  iVar8 = 0;
  pcVar2 = (char *)&DAT_100acc4c;
  do {
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x100;
    iVar8 = iVar8 + 1;
  } while ((int)pcVar2 < 0x100ad14c);
  if (iVar8 != 5) goto LAB_1002c453;
  iVar8 = FUN_1002bf90();
  pcVar6 = pcVar6 + iVar8 * -0x100;
  goto LAB_1002c41d;
LAB_1002c453:
  if (*pcVar6 == ' ') {
    uVar3 = 0xffffffff;
    pcVar2 = (char *)(&DAT_100acc4c + iVar8 * 0x40);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar2 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (0x100 < (int)((~uVar3 - 1) - (~uVar4 - 1))) goto LAB_1002c53c;
    uVar3 = 0xffffffff;
    pcVar2 = pcVar6;
    do {
      pcVar9 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar9 + -uVar3;
    iVar5 = -1;
    pcVar7 = (char *)(&DAT_100acc4c + iVar8 * 0x40);
    do {
      pcVar2 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar2 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar2;
    } while (cVar1 != '\0');
  }
  else {
    pcVar2 = (char *)(&DAT_100acc4c + iVar8 * 0x40);
    uVar3 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar7 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (0xff < (~uVar4 - 3) - (~uVar3 - 1)) goto LAB_1002c53c;
    uVar3 = 0xffffffff;
    pcVar7 = (char *)&DAT_10079a7c;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar7 = pcVar2;
    do {
      pcVar10 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    pcVar7 = pcVar9 + -uVar3;
    pcVar9 = pcVar10 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      pcVar9 = pcVar7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar9 = pcVar9 + -uVar3;
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
  }
  pcVar2 = pcVar2 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar2 = pcVar2 + 1;
  }
LAB_1002c53c:
  *pcVar6 = '\0';
  pcStack_10 = pcVar6;
  FUN_1002c330(iVar8);
  return;
}

