
int * FUN_1006b680(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  float afStack_44 [3];
  undefined1 auStack_38 [48];
  int iStack_8;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  param_1 = 0;
  pcVar9 = s_func_door_101076bc;
  pbVar6 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar2);
  pbVar4 = pbVar6;
  do {
    bVar1 = *pbVar4;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_1006b6eb:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_1006b6f0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_1006b6eb;
    pbVar4 = pbVar4 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_1006b6f0:
  if (iVar5 != 0) {
    pcVar9 = s_func_door_rotating_101076a8;
    pbVar4 = pbVar6;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_1006b723:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1006b728;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_1006b723;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1006b728:
    if (iVar5 != 0) {
      (*DAT_10121efc)(2,s_Unsupported_PathEnt____s__101128a8,pbVar6);
      return (int *)0x0;
    }
  }
  if ((piVar2[0x68] & 0x100U) != 0) {
    return piVar2;
  }
LAB_1006b76a:
  do {
    param_1 = FUN_100af100(param_1,*(int *)(DAT_10122044 + 0x98) + piVar2[0x73]);
    if (param_1 == 0) {
      return piVar2;
    }
    piVar3 = *(int **)(param_1 + 4);
    pcVar9 = s_func_button_1011289c;
    pbVar6 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar3);
    pbVar4 = pbVar6;
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_1006b7d2:
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1006b7d7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_1006b7d2;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1006b7d7:
    if (iVar5 != 0) {
      pcVar9 = s_func_rot_button_1011288c;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_1006b806:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1006b80b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_1006b806;
        pbVar6 = pbVar6 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1006b80b:
      if (iVar5 != 0) goto LAB_1006b76a;
    }
    puVar12 = auStack_38;
    iVar5 = 1;
    uVar11 = DAT_101323a0;
    uVar7 = FUN_10010f30(afStack_44,(int)piVar3);
    FUN_100afc60(param_2,uVar7,iVar5,uVar11,puVar12);
    if (iStack_8 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)(iStack_8 + 0x80);
    }
    if (piVar8 == piVar3) {
      if (iStack_8 == 0) {
        return (int *)0x0;
      }
      return (int *)(iStack_8 + 0x80);
    }
  } while( true );
}

