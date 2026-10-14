
int __cdecl FUN_100af060(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  pcVar6 = s__locus_10102138;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100af096:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_100af09b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100af096;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100af09b:
  if (iVar4 != 0) {
    iVar4 = FUN_100af030(param_1,param_2);
    return iVar4;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 4) + 0x208);
    iVar4 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    iVar5 = (*DAT_10121f20)(uVar2);
    if (iVar5 <= iVar4) {
      return 0;
    }
  }
  return param_3;
}

