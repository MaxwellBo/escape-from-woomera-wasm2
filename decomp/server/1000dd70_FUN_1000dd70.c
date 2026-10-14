
void __fastcall FUN_1000dd70(CBaseEntity *param_1)

{
  CBaseEntity *pCVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char acStack_20 [32];
  
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar4 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0xc) & 0x20) != 0)) {
      (**(code **)(*(int *)param_1 + 0x184))(0x13);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x100000) != 0) {
    iVar4 = FUN_1009b210((int *)param_1);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x370) == 0) {
        (**(code **)(*(int *)param_1 + 0x198))(s_BA_KILL_1010339c,0x40800000,0x3f800000,0x3f4ccccd);
      }
      else {
        uVar6 = 0xffffffff;
        pcVar8 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x370));
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = acStack_20;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar8 = &DAT_101033a4;
        do {
          pcVar10 = pcVar8;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar10;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar4 = -1;
        pcVar8 = acStack_20;
        do {
          pcVar9 = pcVar8;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar9 = pcVar8 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar9;
        } while (cVar2 != '\0');
        pcVar8 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        iVar4 = *(int *)param_1;
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        (**(code **)(iVar4 + 0x198))(acStack_20,0x40800000,0x3f800000,0x3f4ccccd);
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x1d8);
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      uVar6 = *(uint *)(param_1 + 0x15c);
      if ((uVar6 & 0x100000) == 0) {
        if (((uVar6 & 0x10000) != 0) && ((uVar6 & 0x100) != 0)) {
          (**(code **)(*(int *)param_1 + 0x184))(0x11);
          return;
        }
        if (*(int *)(param_1 + 900) == 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x1d);
          return;
        }
        if ((uVar6 & 0x200) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x12);
          return;
        }
      }
      goto LAB_1000dfce;
    }
    if (iVar4 != 3) {
      FUN_10006c50(param_1);
      return;
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x300) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0x11);
    return;
  }
  bVar3 = FUN_10019450((uint *)(param_1 + 0x160));
  if (CONCAT31(extraout_var,bVar3) == 0) {
    pCVar1 = param_1 + 0x168;
    bVar3 = FUN_10019450((uint *)pCVar1);
    if (CONCAT31(extraout_var_00,bVar3) != 0) {
      piVar5 = (int *)FUN_10019460((uint *)pCVar1);
      iVar4 = (**(code **)(*piVar5 + 0xcc))();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_10019460((uint *)pCVar1);
        iVar4 = (**(code **)(*piVar5 + 0xb8))();
        if (iVar4 == 0) {
          (**(code **)(*(int *)param_1 + 0x228))(0);
          FUN_10006c50(param_1);
          return;
        }
        if ((*(uint *)(param_1 + 0x15c) & 0x10000000) != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x2d);
          return;
        }
        (**(code **)(*(int *)param_1 + 0x184))(0xf);
        return;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x10000000) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0x2c);
    return;
  }
  FUN_1009bd00((int *)param_1);
LAB_1000dfce:
  FUN_10006c50(param_1);
  return;
}

