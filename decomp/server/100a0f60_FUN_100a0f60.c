
void __thiscall FUN_100a0f60(undefined1 *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  bool bVar11;
  longlong lVar12;
  undefined1 auStack_80 [128];
  undefined3 uVar7;
  
  pbVar2 = *(byte **)(param_2 + 4);
  pcVar9 = s_m_fLogic_10118df4;
  pbVar3 = pbVar2;
  puVar6 = param_1;
  do {
    bVar1 = *pbVar3;
    uVar7 = (undefined3)((uint)puVar6 >> 8);
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar11 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100a0fa1:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_100a0fa6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    puVar6 = (undefined1 *)CONCAT31(uVar7,bVar1);
    bVar11 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100a0fa1;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100a0fa6:
  if (iVar4 == 0) {
    FUN_100c82a6(puVar6,*(byte **)(param_2 + 8));
    lVar12 = __ftol();
    *(int *)(param_1 + 0x15c) = (int)lVar12;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar10 = &DAT_1011953c;
  pbVar3 = pbVar2;
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_100a1000:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_100a1005;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_100a1000;
    pbVar3 = pbVar3 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100a1005:
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x160) < 0x10) {
      uVar5 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x160) * 4 + 0x164) = uVar5;
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    iVar8 = (*(int **)(param_1 + 4))[0x73] + *(int *)(DAT_10122044 + 0x98);
    iVar4 = *(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4);
    pcVar9 = s__s__Too_many_targets_for__s___s__1011950c;
  }
  else {
    if (*(int *)(param_1 + 0x160) < 0x10) {
      FUN_100b1090((char *)pbVar2,auStack_80);
      uVar5 = (*DAT_10121f14)(auStack_80);
      *(undefined4 *)(param_1 + *(int *)(param_1 + 0x160) * 4 + 0x164) = uVar5;
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
    iVar8 = (*(int **)(param_1 + 4))[0x73] + *(int *)(DAT_10122044 + 0x98);
    iVar4 = *(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4);
    pcVar9 = s_WARNING____s__Too_many_targets_f_101194d0;
  }
  (*DAT_10121efc)(1,pcVar9,pbVar2,iVar4,iVar8,0x10);
  return;
}

