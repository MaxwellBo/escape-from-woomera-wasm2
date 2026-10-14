
undefined4 __cdecl FUN_100a5420(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar2 = FUN_100af030(0,param_1);
  do {
    if (iVar2 == 0) {
      (*DAT_10121efc)(4,s_Can_t_find_landmark__s_101199d4,param_1);
      return 0;
    }
    pcVar5 = s_info_landmark_101199ec;
    pbVar3 = (byte *)(**(int **)(iVar2 + 4) + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_100a5479:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_100a547e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_100a5479;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100a547e:
    if (iVar4 == 0) {
      return *(undefined4 *)(*(int *)(iVar2 + 4) + 0x208);
    }
    iVar2 = FUN_100af030(iVar2,param_1);
  } while( true );
}

