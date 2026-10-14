
undefined4 __thiscall FUN_10082230(void *this,int *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x160))();
  iVar2 = *(int *)((int)this + iVar2 * 4 + 0x510);
  if (iVar2 != 0) {
    do {
      pbVar3 = (byte *)(**(int **)(iVar2 + 4) + *(int *)(DAT_10122044 + 0x98));
      pbVar5 = (byte *)(*(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98));
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_1008228f:
          iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_10082294;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_1008228f;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_10082294:
      if (iVar4 == 0) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0xe0);
    } while (iVar2 != 0);
  }
  return 0;
}

