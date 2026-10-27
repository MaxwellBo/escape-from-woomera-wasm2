
void __cdecl FUN_10066310(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_400 [512];
  char local_200 [512];
  
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  do {
    pcVar2 = local_200;
    cVar1 = *param_1;
    while (cVar1 != '\\') {
      if (cVar1 == '\0') {
        return;
      }
      *pcVar2 = cVar1;
      pcVar7 = param_1 + 1;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + 1;
      cVar1 = *pcVar7;
    }
    cVar1 = param_1[1];
    *pcVar2 = '\0';
    pcVar2 = local_400;
    while ((cVar1 != '\\' && (cVar1 != '\0'))) {
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      cVar1 = param_1[2];
      param_1 = param_1 + 1;
    }
    *pcVar2 = '\0';
    uVar3 = 0xffffffff;
    pcVar2 = local_200;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar4 = -1;
    pcVar2 = local_400;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      uVar3 = 0xffffffff;
      pcVar2 = &DAT_10111e58;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar2 = local_400;
      do {
        pcVar7 = pcVar2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar4 = -1;
      pcVar2 = param_2;
      do {
        pcVar6 = pcVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar2 + 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar6;
      } while (cVar1 != '\0');
      pcVar2 = pcVar7 + -uVar3;
      pcVar7 = pcVar6 + -1;
      for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar7 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    uVar3 = 0xffffffff;
    pcVar2 = &DAT_1010541c;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar2 = param_2;
    do {
      pcVar6 = pcVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    if (param_1[1] == '\0') {
      return;
    }
    param_1 = param_1 + 2;
  } while( true );
}

