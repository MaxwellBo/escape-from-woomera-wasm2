
void __fastcall FUN_100b9cd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  char *pcVar17;
  int aiStack_30 [2];
  int *piStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  int iStack_1c;
  uint uStack_18;
  undefined1 auStack_10 [4];
  undefined *puStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  piStack_28 = *(int **)(param_1 + 0xc);
  if (piStack_28 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  puStack_c = (undefined *)0x0;
  puStack_8 = (undefined4 *)0x0;
  uStack_4 = 0;
  puVar1 = *(undefined4 **)(*piStack_28 + 8);
  puVar15 = *(undefined4 **)(*piStack_28 + 4);
  if (puVar15 == puVar1) goto LAB_100ba001;
  do {
    cVar5 = FUN_100b9720(&piStack_28,(int *)*puVar15);
    if (cVar5 != '\0') {
      FUN_100be4e0(auStack_10,puStack_8,puVar15);
    }
    puVar4 = puStack_c;
    puVar15 = puVar15 + 1;
  } while (puVar15 != puVar1);
  if ((puStack_c == (undefined *)0x0) ||
     (uVar16 = (int)puStack_8 - (int)puStack_c >> 2, uVar16 == 0)) goto LAB_100ba001;
  uVar6 = _rand();
  iVar2 = *(int *)(puVar4 + (uVar6 % uVar16) * 4);
  if (iVar2 == 0) goto LAB_100ba001;
  iVar11 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 8);
  aiStack_30[0] = *(int *)(param_1 + 0x10);
  piVar14 = *(int **)(param_1 + 4);
  piStack_28 = piVar14;
  FUN_100bacf0(auStack_20,'\0');
  uVar16 = 0xffffffff;
  pcVar10 = &DAT_10121c38;
  do {
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    cVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar5 != '\0');
  FUN_100bba70(auStack_20,(undefined4 *)&DAT_10121c38,~uVar16 - 1);
  iVar12 = *(int *)(iVar2 + 4);
  if (iVar12 != 0) {
    puVar1 = *(undefined4 **)(iVar12 + 8);
    piVar14 = piStack_28;
    for (puVar15 = *(undefined4 **)(iVar12 + 4); piStack_28 = piVar14, puVar15 != puVar1;
        puVar15 = puVar15 + 1) {
      (**(code **)(*(int *)*puVar15 + 4))(uVar3,iVar2,auStack_20);
      piVar14 = piStack_28;
    }
  }
  uVar16 = 0xffffffff;
  *(undefined1 *)(iVar11 + 8) = 1;
  pcVar10 = &DAT_10121c38;
  do {
    if (uVar16 == 0) break;
    uVar16 = uVar16 - 1;
    cVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar5 != '\0');
  uVar16 = FUN_100be3b0(auStack_20,0,uStack_18,&DAT_10121c38,~uVar16 - 1);
  if (uVar16 == 0) {
LAB_100b9e72:
    if (iVar11 != 0) {
      iVar12 = 0;
      piVar9 = *(int **)(aiStack_30[0] + 4);
      piVar14 = *(int **)(aiStack_30[0] + 8);
      piVar13 = piVar9;
      if (piVar9 != piVar14) {
        do {
          if (*piVar13 == iVar11) break;
          piVar13 = piVar13 + 1;
        } while (piVar13 != piVar14);
        if (piVar13 != piVar14) {
          if ((*(int *)(iVar11 + 4) == 0) ||
             (iVar12 = FUN_100bad90(*(int *)(iVar11 + 4)), iVar12 == 0)) {
            iVar12 = 0;
          }
          else {
            iVar12 = *(int *)(**(int **)(*(int *)(iVar11 + 4) + 4) + 0x14);
          }
          iVar12 = iVar12 + 1;
          piVar9 = piVar13 + 1;
        }
      }
      if (piVar9 != *(int **)(aiStack_30[0] + 8)) {
        do {
          iVar8 = *piVar9;
          if ((*(int *)(iVar8 + 4) == 0) || (iVar7 = FUN_100bad90(*(int *)(iVar8 + 4)), iVar7 == 0))
          {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)(**(int **)(*(int *)(iVar8 + 4) + 4) + 0x14);
          }
          if (iVar7 < iVar12) break;
          if ((*(int *)(iVar8 + 4) == 0) || (iVar7 = FUN_100bad90(*(int *)(iVar8 + 4)), iVar7 == 0))
          {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(**(int **)(*(int *)(iVar8 + 4) + 4) + 0x14);
          }
          piVar14 = piStack_28;
          if (iVar8 == iVar12) goto LAB_100b9f23;
          piVar9 = piVar9 + 1;
        } while (piVar9 != *(int **)(aiStack_30[0] + 8));
      }
      iVar11 = 0;
      piVar14 = piStack_28;
    }
LAB_100b9f23:
    uStack_24 = 0;
    piStack_28 = piVar14;
    piVar9 = (int *)FUN_100bb670(&DAT_10132408,aiStack_30,(uint *)&piStack_28);
    *(int *)(*piVar9 + 0x10) = iVar11;
    pcVar10 = *(char **)(iVar2 + 0xc);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "";
    }
    FUN_100ba080((uint)piVar14,pcVar10,8);
    FUN_100b9990((uint)piVar14);
  }
  else {
    uVar16 = 0xffffffff;
    pcVar10 = (char *)0x1011c424;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    uVar16 = FUN_100be3b0(auStack_20,0,uStack_18,(byte *)0x1011c424,~uVar16 - 1);
    if (uVar16 == 0) {
      iVar11 = 0;
      goto LAB_100b9f23;
    }
    uVar16 = 0xffffffff;
    pcVar10 = (char *)0x1011c41c;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar5 != '\0');
    uVar16 = FUN_100be3b0(auStack_20,0,uStack_18,(byte *)0x1011c41c,~uVar16 - 1);
    if (uVar16 != 0) goto LAB_100b9e72;
    uStack_24 = 0;
    piStack_28 = piVar14;
    piVar9 = (int *)FUN_100bb670(&DAT_10132408,aiStack_30,(uint *)&piStack_28);
    *(undefined4 *)(*piVar9 + 0x10) = 0;
    if (*(int *)(iVar2 + 0x10) != 0) {
      pcVar10 = *(char **)(iVar2 + 0xc);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      FUN_100ba080((uint)piVar14,pcVar10,8);
    }
    FUN_100c7430();
    FUN_100b94e0();
    uVar16 = 0xffffffff;
    pcVar10 = &DAT_10121c38;
    do {
      pcVar17 = pcVar10;
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      pcVar17 = pcVar10 + 1;
      cVar5 = *pcVar10;
      pcVar10 = pcVar17;
    } while (cVar5 != '\0');
    uVar16 = ~uVar16;
    pcVar10 = pcVar17 + -uVar16;
    pcVar17 = (char *)&DAT_10134480;
    for (uVar6 = uVar16 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *pcVar17 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar17 = pcVar17 + 1;
    }
  }
  if (iStack_1c != 0) {
    cVar5 = *(char *)(iStack_1c + -1);
    if ((cVar5 == '\0') || (cVar5 == -1)) {
      FUN_100c8ce6((undefined *)(iStack_1c + -1));
    }
    else {
      *(char *)(iStack_1c + -1) = cVar5 + -1;
    }
  }
LAB_100ba001:
  FUN_100c8ce6(puStack_c);
  return;
}

