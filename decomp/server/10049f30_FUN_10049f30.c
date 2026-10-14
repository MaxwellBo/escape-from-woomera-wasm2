
int __thiscall FUN_10049f30(void *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*(int *)((int)param_1 + 0x300) == 0) {
    pcVar4 = s_monster_alien_grunt_1010e950;
    pbVar2 = (byte *)(*(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_10049f80:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10049f85;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_10049f80;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10049f85:
    if (iVar3 == 0) {
      return 3;
    }
  }
  pcVar4 = s_monster_gargantua_1010e93c;
  pbVar2 = (byte *)(*(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_10049fbf:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_10049fc4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_10049fbf;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10049fc4:
  if (iVar3 == 0) {
    return 3;
  }
  iVar3 = FUN_1005fbb0(param_1,param_2);
  return iVar3;
}

