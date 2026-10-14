
void __fastcall FUN_1006d620(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  if (DAT_10122780 != 0) {
    (*DAT_10121e60)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  if (DAT_10122798 == 0) {
    iVar4 = (*DAT_10121e5c)();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x80;
    }
    iVar3 = *(int *)(iVar4 + 0x208);
    if ((iVar3 == 0) || (piVar5 = *(int **)(iVar3 + 0x7c), piVar5 == (int *)0x0)) {
      piVar5 = (int *)(*DAT_10121f04)(iVar3,0x314);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        FUN_10002dc0(piVar5);
        FUN_10002ec0(piVar5 + 0x7b,0x10,8,FUN_10002f10);
        *piVar5 = (int)&PTR_FUN_100ed3c0;
      }
      piVar5[1] = iVar4;
    }
    FUN_1006d310(piVar5);
  }
  if (0x3ff < DAT_10122798) {
    (*DAT_10121efc)(2,s_cNodes_>_MAX_NODES_10112cf0);
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  pcVar7 = s_info_node_air_10112ce0;
  puVar1 = (undefined4 *)(DAT_1012278c + DAT_10122798 * 0x58);
  *puVar1 = *(undefined4 *)(iVar4 + 8);
  puVar1[1] = *(undefined4 *)(iVar4 + 0xc);
  puVar1[2] = *(undefined4 *)(iVar4 + 0x10);
  puVar1 = (undefined4 *)(DAT_1012278c + DAT_10122798 * 0x58);
  puVar1[3] = *puVar1;
  puVar1[4] = puVar1[1];
  puVar1[5] = puVar1[2];
  *(undefined4 *)(DAT_1012278c + 0x54 + DAT_10122798 * 0x58) =
       *(undefined4 *)(*(int *)(param_1 + 4) + 0x54);
  *(undefined2 *)(DAT_1012278c + 0x50 + DAT_10122798 * 0x58) = *(undefined2 *)(param_1 + 0xb8);
  *(undefined2 *)(DAT_1012278c + 0x52 + DAT_10122798 * 0x58) = *(undefined2 *)(param_1 + 0xba);
  pbVar6 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4));
  do {
    bVar2 = *pbVar6;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_1006d7d1:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_1006d7d6;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_1006d7d1;
    pbVar6 = pbVar6 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_1006d7d6:
  if (iVar4 == 0) {
    *(undefined4 *)(DAT_1012278c + 0x1c + DAT_10122798 * 0x58) = 2;
  }
  else {
    *(undefined4 *)(DAT_1012278c + 0x1c + DAT_10122798 * 0x58) = 0;
  }
  DAT_10122798 = DAT_10122798 + 1;
  (*DAT_10121e60)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  return;
}

