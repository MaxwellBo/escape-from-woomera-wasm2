
undefined4 FUN_10073eb0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(param_1 + 0x80);
  }
  pcVar5 = s_path_track_101137c0;
  pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10073f01:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10073f06;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10073f01;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10073f06:
  if ((iVar3 == 0) && (param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  return 0;
}

