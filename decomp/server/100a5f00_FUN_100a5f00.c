
void __thiscall FUN_100a5f00(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar6 = s_m_iszPushSpeed_10118c38;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100a5f38:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100a5f3d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100a5f38;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a5f3d:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x160) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pbVar2 = &DAT_10118c48;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_100a5f8d:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100a5f92;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_100a5f8d;
    pbVar5 = pbVar5 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a5f92:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x15c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_100991d0(param_1,param_2);
  return;
}

