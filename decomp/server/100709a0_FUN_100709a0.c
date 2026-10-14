
void __fastcall FUN_100709a0(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  bool bVar9;
  
  if ((DAT_10122780 == 0) || (DAT_10122784 == 0)) {
    (*DAT_10121efc)(1,s_Graph_not_ready__101128c4);
    FUN_100b0ef0((int)param_1);
    return;
  }
  pcVar7 = s_node_viewer_fly_101133dc;
  pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
  pbVar2 = pbVar4;
  do {
    bVar1 = *pbVar2;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10070a01:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_10070a06;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10070a01;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10070a06:
  if (iVar3 == 0) {
    param_1[0x131] = 3;
    param_1[0x133] = 0x43200000;
    param_1[0x132] = 2;
    param_1[0x134] = 0x42c80000;
    iVar3 = 0x437f0000;
  }
  else {
    pcVar7 = s_node_viewer_large_101133c8;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10070a7d:
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_10070a82;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10070a7d;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10070a82:
    if (iVar3 == 0) {
      param_1[0x131] = 2;
      param_1[0x133] = 0x42c80000;
      param_1[0x132] = 5;
      param_1[0x134] = 0x437f0000;
      iVar3 = 0x43200000;
    }
    else {
      param_1[0x131] = 1;
      param_1[0x133] = 0x437f0000;
      param_1[0x132] = 5;
      param_1[0x134] = 0x43200000;
      iVar3 = 0x42c80000;
    }
  }
  param_1[0x135] = iVar3;
  iVar3 = FUN_1006c400(&DAT_10122780,(float *)((int *)param_1[1] + 2),param_1[0x132]);
  param_1[0x2e] = iVar3;
  if (-1 < iVar3) {
    param_1[0x30] = 0;
    (*DAT_10121efc)(2,s_basenode__d_101133a8,iVar3);
    if (DAT_10122798 < 0x80) {
      iVar3 = 0;
      if (0 < DAT_10122798) {
        do {
          iVar5 = FUN_1006bc40(&DAT_10122780,iVar3,param_1[0x2e],param_1[0x131],0);
          FUN_10070d00(param_1,iVar3,iVar5);
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_10122798);
      }
    }
    else {
      FUN_10070c60(param_1,param_1[0x2e]);
      iVar3 = 0;
      do {
        iVar5 = param_1[0x30];
        if (iVar3 < iVar5) {
          iVar6 = iVar5 - iVar3;
          piVar8 = param_1 + iVar3 + 0xb1;
          iVar3 = iVar3 + iVar6;
          do {
            FUN_10070c60(param_1,piVar8[-0x80]);
            FUN_10070c60(param_1,*piVar8);
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      } while (iVar5 != param_1[0x30]);
    }
    (*DAT_10121efc)(2,s__d_nodes_1011339c,param_1[0x30]);
    param_1[0x2f] = 0;
    param_1[0x1d] = (int)CNodeViewer::DrawThink;
    (**(code **)(*param_1 + 8))(0);
    return;
  }
  (*DAT_10121efc)(1,s_No_nearby_node_101133b8);
  return;
}

