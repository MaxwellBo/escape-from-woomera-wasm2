
void __thiscall FUN_10007620(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_80 [128];
  
  pcVar5 = s_defaultmember_10101fcc;
  pbVar2 = *(byte **)(param_2 + 4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10007661:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10007666;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10007661;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10007666:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0x13c) = uVar4;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  if (*(int *)(param_1 + 0xb8) < 0x10) {
    FUN_100b1090((char *)*(byte **)(param_2 + 4),auStack_80);
    uVar4 = (*DAT_10121f14)(auStack_80);
    *(undefined4 *)(param_1 + 0xbc + *(int *)(param_1 + 0xb8) * 4) = uVar4;
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_1 + 0xfc + *(int *)(param_1 + 0xb8) * 4) = uVar4;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    return;
  }
  (*DAT_10121efc)(4,s_Too_many_members_for_info_group___10101f98,
                  *(int *)(*(int *)(param_1 + 4) + 0x1cc) + *(int *)(DAT_10122044 + 0x98),0x10);
  return;
}

