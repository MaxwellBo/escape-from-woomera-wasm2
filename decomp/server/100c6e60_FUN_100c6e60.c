
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100c6e60(int param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,
            char *param_7,char *param_8,undefined4 param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  uint local_fc8;
  undefined1 auStack_fc0 [4];
  char *pcStack_fbc;
  uint uStack_fb8;
  undefined4 uStack_fb4;
  undefined1 auStack_fb0 [4];
  int iStack_fac;
  undefined4 uStack_fa8;
  undefined4 uStack_fa4;
  char acStack_fa0 [1000];
  char acStack_bb8 [1000];
  char local_7d0 [2000];
  
  local_fc8 = (uint)(param_2 != (char *)0x0);
  if (param_3 != (char *)0x0) {
    local_fc8 = (param_2 != (char *)0x0) + 1;
  }
  if (param_4 != (char *)0x0) {
    local_fc8 = local_fc8 + 1;
  }
  if (param_5 != (char *)0x0) {
    local_fc8 = local_fc8 + 1;
  }
  if (param_6 != (char *)0x0) {
    local_fc8 = local_fc8 + 1;
  }
  if (param_7 != (char *)0x0) {
    local_fc8 = local_fc8 + 1;
  }
  if (param_8 != (char *)0x0) {
    local_fc8 = local_fc8 + 1;
  }
  FUN_100c6e20(&DAT_10132cd0,param_3);
  FUN_100c6e20(&DAT_101330b8,param_4);
  FUN_100c6e20(&DAT_101334a0,param_5);
  FUN_100c6e20(&DAT_10133888,param_6);
  FUN_100c6e20(&DAT_10133c70,param_7);
  FUN_100c6e20(&DAT_10134058,param_8);
  pcVar7 = &DAT_10121c38;
  FUN_100c6d70(0,0,0,0,0,0);
  if (local_fc8 == 0) {
    param_1 = 0;
    FUN_100c80d0();
    DAT_10134880 = 0;
  }
  else {
    if (param_1 != 0) {
      pcVar7 = (char *)(*(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    }
    FUN_100c80d0();
    FUN_100c80d0();
    FUN_100c80d0();
    FUN_100c80d0();
    if (DAT_10134890 != param_1) {
      FUN_100c80d0();
      uVar4 = 0xffffffff;
      pcVar10 = &DAT_10121c38;
      do {
        pcVar9 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar10 = pcVar9 + -uVar4;
      pcVar9 = (char *)&DAT_10134480;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    DAT_10134880 = 1;
  }
  if (param_1 != 0) {
    DAT_10134890 = param_1;
  }
  DAT_1013488c = param_1;
  fVar11 = FUN_100c5b60();
  _DAT_1013487c = (float)fVar11;
  _DAT_1011d130 = param_9;
  if (param_2 != (char *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar10 = param_2;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar10 + -uVar4;
    pcVar9 = local_7d0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar6 = -1;
    pcVar10 = (char *)&DAT_10134480;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    if (iVar6 != -2) {
      uVar4 = 0xffffffff;
      pcVar10 = PTR_s_____PREVIOUS_QUESTION__100f7050;
      do {
        pcVar9 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pcVar10 = local_7d0;
      do {
        pcVar8 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar8;
      } while (cVar1 != '\0');
      pcVar10 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar10 = (char *)&DAT_10134480;
      do {
        pcVar9 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar6 = -1;
      pcVar10 = local_7d0;
      do {
        pcVar8 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar8;
      } while (cVar1 != '\0');
      pcVar10 = pcVar9 + -uVar4;
      pcVar9 = pcVar8 + -1;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    param_2 = local_7d0;
  }
  (*DAT_10121ec0)(2,DAT_101248f8,0,0);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec4)();
  uVar4 = 0xffffffff;
  pcVar10 = pcVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  pcStack_fbc = (char *)0x0;
  uStack_fb8 = 0;
  uStack_fb4 = 0;
  uVar2 = FUN_100bbb30(auStack_fc0,uVar4,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar10 = pcVar7;
    pcVar9 = pcStack_fbc;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    }
    pcStack_fbc[uVar4] = '\0';
    uStack_fb8 = uVar4;
  }
  puVar3 = FUN_100b89a0(auStack_fb0,auStack_fc0);
  pcVar10 = *(char **)(puVar3 + 4);
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  uVar4 = 0xffffffff;
  do {
    pcVar9 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = 0;
  pcVar10 = pcVar9 + -uVar4;
  pcVar9 = acStack_bb8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (iStack_fac != 0) {
    cVar1 = *(char *)(iStack_fac + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6((char *)(iStack_fac + -1));
    }
    else {
      *(char *)(iStack_fac + -1) = cVar1 + -1;
    }
  }
  iStack_fac = 0;
  uStack_fa8 = 0;
  uStack_fa4 = 0;
  if (pcStack_fbc != (char *)0x0) {
    cVar1 = pcStack_fbc[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_100c8ce6(pcStack_fbc + -1);
    }
    else {
      pcStack_fbc[-1] = cVar1 + -1;
    }
  }
  if (local_fc8 != 0) {
    do {
      if ((pcVar7 == &DAT_10121c38) || (*param_2 == '\0')) {
        FUN_100c8506(acStack_fa0,&DAT_10105438);
      }
      else {
        FUN_100c8506(acStack_fa0,(byte *)s__s___s_1011d2e0);
      }
      if (param_2 == &DAT_10121c38) {
        uVar4 = 0xffffffff;
        pcVar10 = &DAT_10121c38;
        do {
          pcVar9 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar10 = pcVar9 + -uVar4;
        pcVar9 = acStack_fa0;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      if (iVar6 == 0) {
        FUN_100c7380(0,acStack_fa0);
      }
      else {
        if (iVar6 == 1) {
          FUN_100c7380(1,param_3);
        }
        else if (iVar6 == 2) {
          FUN_100c7380(2,param_4);
        }
        else if (iVar6 == 3) {
          FUN_100c7380(3,param_5);
        }
        else if (iVar6 == 4) {
          FUN_100c7380(4,param_6);
        }
        else if (iVar6 == 5) {
          FUN_100c7380(5,param_7);
        }
        else {
          if (iVar6 != 6) goto LAB_100c7367;
          FUN_100c7380(6,param_8);
        }
        FUN_100c80d0();
      }
LAB_100c7367:
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_fc8);
  }
  return;
}

