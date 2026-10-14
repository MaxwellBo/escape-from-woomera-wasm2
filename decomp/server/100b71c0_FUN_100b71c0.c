
void __thiscall FUN_100b71c0(void *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = (**(code **)(*param_2 + 0xcc))();
  if (iVar2 == 0) {
    pcVar4 = s_monster_bigmomma_1011c20c;
    pbVar3 = (byte *)(*(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar3;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_100b7218:
        iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_100b721d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_100b7218;
      pbVar3 = pbVar3 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_100b721d:
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_100b7230(param_1);
  return;
}

