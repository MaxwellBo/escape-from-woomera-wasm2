
void __thiscall FUN_100a4940(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  pbVar5 = *(byte **)(param_2 + 4);
  pcVar6 = s_m_iszAltTarget_10118cb8;
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100a4978:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100a497d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100a4978;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a497d:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x15c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  pcVar6 = s_m_iszBothTarget_10118ca8;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100a49cd:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100a49d2;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100a49cd;
    pbVar5 = pbVar5 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a49d2:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x160) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  FUN_100991d0(param_1,param_2);
  return;
}

