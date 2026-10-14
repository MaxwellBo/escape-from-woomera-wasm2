
undefined4 __thiscall
FUN_1006b870(void *this,undefined4 param_1,int *param_2,uint param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  if ((*(int *)this == 0) || (*(int *)((int)this + 4) == 0)) {
    (*DAT_10121efc)(2,s_Graph_not_ready__101128c4);
    return 0;
  }
  if ((param_2 == (int *)0x0) || (iVar3 = (*DAT_10121f20)(param_2[0x82]), iVar3 == 0)) {
    (*DAT_10121efc)(2,s_dead_path_ent__101128f4);
    return 1;
  }
  pcVar6 = s_func_door_101076bc;
  pbVar1 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *param_2);
  pbVar4 = pbVar1;
  do {
    bVar2 = *pbVar4;
    bVar7 = bVar2 < (byte)*pcVar6;
    if (bVar2 != *pcVar6) {
LAB_1006b900:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_1006b905;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar7 = bVar2 < (byte)pcVar6[1];
    if (bVar2 != pcVar6[1]) goto LAB_1006b900;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_1006b905:
  if (iVar3 != 0) {
    pcVar6 = s_func_door_rotating_101076a8;
    pbVar4 = pbVar1;
    do {
      bVar2 = *pbVar4;
      bVar7 = bVar2 < (byte)*pcVar6;
      if (bVar2 != *pcVar6) {
LAB_1006b93c:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1006b941;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar7 = bVar2 < (byte)pcVar6[1];
      if (bVar2 != pcVar6[1]) goto LAB_1006b93c;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_1006b941:
    if (iVar3 != 0) {
      pcVar6 = s_func_breakable_1010f468;
      pbVar4 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar7 = bVar2 < (byte)*pcVar6;
        if (bVar2 != *pcVar6) {
LAB_1006b974:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_1006b979;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar7 = bVar2 < (byte)pcVar6[1];
        if (bVar2 != pcVar6[1]) goto LAB_1006b974;
        pbVar4 = pbVar4 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_1006b979:
      if ((iVar3 == 0) && (param_4 == 1)) {
        return 1;
      }
      (*DAT_10121efc)(2,s_Unhandled_Ent_in_Path__s_101128d8,pbVar1);
      return 0;
    }
  }
  iVar3 = param_2[0x82];
  if ((iVar3 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(iVar3 + 0x7c);
  }
  if ((param_2[0x68] & 0x100U) == 0) {
    iVar3 = (**(code **)(*piVar5 + 0x7c))();
    if ((iVar3 == 0) && ((*(byte *)(param_2 + 0x68) & 0x20) != 0)) {
      return 1;
    }
    if (((param_3 & 0x200) != 0) && (((param_2[0x68] & 0x200U) == 0 || (param_4 == 1)))) {
      return 1;
    }
  }
  else {
    if ((param_3 & 0x200) != 0) {
      return 1;
    }
    iVar3 = (**(code **)(*piVar5 + 0x7c))();
    if ((iVar3 == 0) && ((*(byte *)(param_2 + 0x68) & 0x20) != 0)) {
      return 1;
    }
  }
  return 0;
}

