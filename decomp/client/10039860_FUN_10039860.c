
void __fastcall FUN_10039860(void *param_1)

{
  char cVar1;
  App *pAVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (*(int **)((int)param_1 + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa4) + 0x214))();
  }
  if (*(int **)((int)param_1 + 0xaa8) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa8) + 0x214))();
  }
  if (*(int *)((int)param_1 + 0xaac) != 0) {
    FUN_100364d0(*(int *)((int)param_1 + 0xaac));
    FUN_1003ca30((int)param_1);
  }
  if (*(int **)((int)param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x888) + 0x24))(0);
  }
  FUN_1003d490((int)param_1);
  FUN_1003c9a0(param_1);
  uVar5 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x23c) = 1;
  *(undefined4 *)((int)param_1 + 0x8bc) = 0;
  *(undefined4 *)((int)param_1 + 0x210) = 0;
  pcVar10 = s_;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  DAT_100b6620 = 0;
  DAT_100b6730 = 0;
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = (char *)((int)param_1 + 0xa60);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar10 = s_;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  puVar7 = (undefined4 *)((int)param_1 + 0x898);
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = (char *)((int)param_1 + 0xab0);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  iVar8 = 5;
  for (uVar5 = uVar5 & 3; pcVar9 = (char *)((int)param_1 + 0x8c0), uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  do {
    uVar5 = 0xffffffff;
    *puVar7 = 0;
    pcVar10 = s_;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar7 = puVar7 + 1;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = pcVar9;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    iVar8 = iVar8 + -1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcVar9 = pcVar9 + 0x40;
    if (iVar8 == 0) {
      pAVar2 = vgui::App::getInstance();
      piVar3 = (int *)(**(code **)(*(int *)pAVar2 + 0x54))();
      pAVar2 = vgui::App::getInstance();
      iVar8 = *(int *)pAVar2;
      uVar4 = (**(code **)(*piVar3 + 0x14))(1);
      (**(code **)(iVar8 + 0x8c))(uVar4);
      return;
    }
  } while( true );
}

