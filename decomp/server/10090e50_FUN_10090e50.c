
undefined4 __thiscall FUN_10090e50(void *this,int *param_1)

{
  byte bVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) {
    bVar2 = FUN_10019450((uint *)(param_1 + 0x5a));
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return 0;
    }
    iVar3 = FUN_10019460((uint *)(param_1 + 0x5a));
    pcVar5 = s_player_10101c54;
    pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(iVar3 + 4));
    do {
      bVar1 = *pbVar4;
      bVar2 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10090ec6:
        iVar3 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
        goto LAB_10090ecb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar2 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10090ec6;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10090ecb:
    if (iVar3 != 0) {
      return 0;
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x194))
                    (((int)*(char *)(*(int *)((int)this + 4) + 0x1a0) & 4U) >> 2);
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

