
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10066c00(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 5;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  iVar2 = param_1[1];
  if (*(int *)(iVar2 + 0xb8) == 0) {
    uVar9 = *(undefined4 *)(iVar2 + 0x208);
    pcVar5 = s_models_nihilanth_mdl_10112414;
  }
  else {
    uVar9 = *(undefined4 *)(iVar2 + 0x208);
    pcVar5 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar2 + 0xb8));
  }
  (*DAT_10121e10)(uVar9,pcVar5);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  FUN_100afe10((int)param_1,param_1[1] + 8);
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x40000000;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126ae8;
  }
  iVar2 = param_1[1];
  uStack_18 = 0;
  uStack_14 = 0;
  *(undefined4 *)(iVar2 + 0x174) = 0;
  uStack_10 = 0x43960000;
  *(undefined4 *)(iVar2 + 0x178) = 0;
  *(undefined4 *)(iVar2 + 0x17c) = 0x43960000;
  param_1[0x70] = -0x40800000;
  *(undefined4 *)(param_1[1] + 0x128) = 0;
  FUN_10008190((int)param_1);
  FUN_10008390((int)param_1);
  param_1[0x1d] = (int)CNihilanth::StartupThink;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  param_1[0xd0] = 0x3f800000;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  iVar2 = *(int *)(param_1[1] + 0xc);
  param_1[0xd3] = *(int *)(param_1[1] + 8);
  param_1[0xd4] = iVar2;
  param_1[0xd5] = 0x44000000;
  param_1[0xde] = 1;
  param_1[0xdf] = 1;
  if ((char)param_1[0x10d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s_n_recharger_10112408;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x10d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  if ((char)param_1[0x11d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_10112400;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x11d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  if ((char)param_1[0x12d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s_n_leaving_101123f4;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x12d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  if ((char)param_1[0x13d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s_n_teleport_101123e8;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x13d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  if ((char)param_1[0x14d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s_n_dead_101123e0;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x14d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  if ((char)param_1[0x15d] == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = s_n_ending_101123d4;
    do {
      pcVar7 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = param_1 + 0x15d;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
  }
  return;
}

