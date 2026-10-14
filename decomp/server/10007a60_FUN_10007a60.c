
void __thiscall FUN_10007a60(void *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  char *pcVar7;
  bool bVar8;
  undefined1 auStack_80 [128];
  undefined3 uVar6;
  
  pcVar7 = s_m_iMode_10101e80;
  pbVar2 = *(byte **)(param_2 + 4);
  pvVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    uVar6 = (undefined3)((uint)pvVar5 >> 8);
    pvVar5 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10007aa1:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_10007aa6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    pvVar5 = (void *)CONCAT31(uVar6,bVar1);
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10007aa1;
    pbVar2 = pbVar2 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10007aa6:
  if (iVar3 == 0) {
    uVar4 = FUN_100c8388(pvVar5,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + 0x144) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  if (*(int *)((int)param_1 + 0xbc) < 0x10) {
    FUN_100b1090((char *)*(byte **)(param_2 + 4),auStack_80);
    uVar4 = (*DAT_10121f14)(auStack_80);
    pvVar5 = *(void **)((int)param_1 + 0xbc);
    *(undefined4 *)((int)param_1 + (int)pvVar5 * 4 + 0xc0) = uVar4;
    uVar4 = FUN_100c8388(pvVar5,*(byte **)(param_2 + 8));
    *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0xbc) * 4 + 0x104) = uVar4;
    *(int *)((int)param_1 + 0x100) =
         *(int *)((int)param_1 + 0x100) +
         *(int *)((int)param_1 + *(int *)((int)param_1 + 0xbc) * 4 + 0x104);
    *(int *)((int)param_1 + 0xbc) = *(int *)((int)param_1 + 0xbc) + 1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (*DAT_10121efc)(4,s_Too_many_targets_for_multi_alias_101020c0,
                  *(int *)(*(int *)((int)param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),0x10)
  ;
  return;
}

