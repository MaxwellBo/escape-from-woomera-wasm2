
uint __thiscall FUN_100a30c0(void *this,int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar5 = *(int *)((int)this + 4);
  if (*(int *)(iVar5 + 0x1d0) == 0) {
    if ((param_1[0x69] & 8U) != 0) {
      return ~*(uint *)(iVar5 + 0x1a0) >> 1 & 1;
    }
    if ((param_1[0x69] & 0x20U) != 0) {
      return *(uint *)(iVar5 + 0x1a0) & 1;
    }
    pcVar6 = s_func_pushable_1010f458;
    pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *param_1);
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100a3147:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100a314c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100a3147;
      pbVar2 = pbVar2 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_100a314c:
    if (iVar3 != 0) {
      return *(uint *)(iVar5 + 0x1a0) & 8;
    }
    return *(uint *)(iVar5 + 0x1a0) & 4;
  }
  iVar3 = *(int *)(DAT_10122044 + 0x98);
  pbVar2 = (byte *)(iVar3 + *(int *)(iVar5 + 0x1d0));
  pbVar4 = (byte *)(*param_1 + iVar3);
  pbVar7 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_100a31a7:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_100a31ac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_100a31a7;
    pbVar4 = pbVar4 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_100a31ac:
  if (iVar5 == 0) {
    return 1;
  }
  if (param_1[0x73] != 0) {
    pbVar7 = (byte *)(param_1[0x73] + iVar3);
    do {
      bVar1 = *pbVar7;
      bVar8 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_100a31e6:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100a31eb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar8 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_100a31e6;
      pbVar7 = pbVar7 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_100a31eb:
    if (iVar5 == 0) {
      return 1;
    }
  }
  return 0;
}

