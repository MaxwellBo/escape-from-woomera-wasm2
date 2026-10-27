
undefined1 FUN_100c5b80(void)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  pcVar2 = s_efw_prototype_level3_1011cf28;
  pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc));
  pbVar4 = pbVar5;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100c5bc3:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_100c5bc8;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100c5bc3;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100c5bc8:
  if (iVar3 == 0) {
    return 2;
  }
  pcVar2 = s_efw_prototype_level2_1011cf10;
  while( true ) {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) break;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar6 == (uint)(bVar6 != 0);
}

