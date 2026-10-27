
undefined4 __cdecl FUN_1002a500(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((*(int **)(param_1 + 4))[0x2d] != 0) {
    pcVar4 = s_env_beam_101080fc;
    pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_1002a550:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1002a555;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_1002a550;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002a555:
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 1;
}

