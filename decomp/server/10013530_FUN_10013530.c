
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10013530(void *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*DAT_10122044 - *(float *)((int)param_1 + 0x30c) < _DAT_100dd5d8) {
    pcVar4 = s_monster_headcrab_101040d0;
    pbVar2 = (byte *)(*(int *)param_2[1] + (int)DAT_10122044[0x26]);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1001358f:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_10013594;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1001358f;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_10013594:
    if (iVar3 == 0) {
      return;
    }
  }
  FUN_1005fbb0(param_1,param_2);
  return;
}

