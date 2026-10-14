
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a5ba0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  iVar2 = FUN_100aec40(0,s_trigger_changelevel_10119a84);
  if (iVar2 == 0) {
    *(int *)(DAT_10122044 + 0xc) = (int)s_start_10119a98 - *(int *)(DAT_10122044 + 0x98);
    iVar2 = (*DAT_10121e5c)();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
    }
    iVar4 = *(int *)(iVar2 + 0x208);
    if ((iVar4 == 0) || (piVar3 = *(int **)(iVar4 + 0x7c), piVar3 == (int *)0x0)) {
      piVar3 = (int *)(*DAT_10121f04)(iVar4,0x1a4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        FUN_10002f30(piVar3);
        *piVar3 = (int)&PTR_FUN_100f4234;
      }
      piVar3[1] = iVar2;
    }
    uVar5 = 0xffffffff;
    pcVar9 = s_start_10119a98;
    do {
      pcVar10 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    piVar7 = (int *)(pcVar10 + -uVar5);
    piVar11 = piVar3 + 0x57;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar11 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar11 = (int *)((int)piVar11 + 1);
    }
  }
  else {
    iVar2 = *(int *)(iVar2 + 4);
    if ((iVar2 == 0) && (iVar4 = (*DAT_10121e5c)(), iVar4 != 0)) {
      iVar2 = iVar4 + 0x80;
    }
    iVar4 = *(int *)(iVar2 + 0x208);
    if ((iVar4 == 0) || (piVar3 = *(int **)(iVar4 + 0x7c), piVar3 == (int *)0x0)) {
      piVar3 = (int *)(*DAT_10121f04)(iVar4,0x1a4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = (int)&PTR_FUN_100f4234;
      }
      piVar3[1] = iVar2;
    }
  }
  uVar5 = 0xffffffff;
  piVar7 = piVar3 + 0x57;
  do {
    piVar11 = piVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    piVar11 = (int *)((int)piVar7 + 1);
    iVar2 = *piVar7;
    piVar7 = piVar11;
  } while ((char)iVar2 != '\0');
  uVar5 = ~uVar5;
  puVar8 = (undefined4 *)((int)piVar11 - uVar5);
  puVar12 = &DAT_1013131c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  DAT_10121dd0 = 1;
  (**(code **)(*piVar3 + 8))(0);
  if ((float)piVar3[0x15] != _DAT_100dd5f8) {
    piVar3[0x1d] = (int)CChangeLevel::ExecuteChangeLevel;
    (**(code **)(*piVar3 + 8))(0x3dcccccd);
  }
  return;
}

