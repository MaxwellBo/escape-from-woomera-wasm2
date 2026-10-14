
undefined4 FUN_1005c270(byte *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  piVar2 = (int *)FUN_100af030(0,param_1);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    pcVar6 = s_game_team_master_10110690;
    pbVar4 = (byte *)(*(int *)piVar2[1] + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1005c2c9:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_1005c2ce;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1005c2c9;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_1005c2ce:
    if (iVar5 == 0) {
      uVar3 = (**(code **)(*piVar2 + 0xd4))();
      return uVar3;
    }
    piVar2 = (int *)FUN_100af030((int)piVar2,param_1);
  } while( true );
}

