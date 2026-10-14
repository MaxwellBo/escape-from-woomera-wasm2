
undefined4 FUN_1009c4c0(int param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  void *this;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = FUN_100b2630(&DAT_10122758,param_1,param_2);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  pcVar5 = s_menuselect_10117f8c;
  do {
    bVar1 = *param_2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1009c513:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1009c518;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1009c513;
    param_2 = param_2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1009c518:
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = (*DAT_10121f58)();
  if (iVar3 < 2) {
    return 1;
  }
  pbVar4 = (byte *)(*DAT_10121f54)(1);
  FUN_100c8388(this,pbVar4);
  return 1;
}

