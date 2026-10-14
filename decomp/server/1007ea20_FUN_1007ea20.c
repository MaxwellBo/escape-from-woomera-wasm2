
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1007ea20(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  
  iVar5 = *(int *)(param_1[1] + 0x208);
  iVar3 = (**(code **)(*DAT_10121db8 + 0x24))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*DAT_10121db8 + 0x1c))();
    piVar4 = DAT_10124854;
    if (iVar3 != 0) {
      iVar3 = (*DAT_10121f70)(1,5);
      if (0 < iVar3) {
        do {
          piVar4 = (int *)FUN_100aec40((int)piVar4,s_info_player_deathmatch_10114ed8);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (((piVar4 == (int *)0x0) || (*(int *)(piVar4[1] + 0x208) == 0)) ||
         (iVar3 = (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208)), piVar6 = piVar4, iVar3 == 0)) {
        piVar4 = (int *)FUN_100aec40((int)piVar4,s_info_player_deathmatch_10114ed8);
        piVar6 = piVar4;
      }
      do {
        if (((piVar4 != (int *)0x0) && (iVar3 = FUN_1007e9b0(param_1,piVar4), iVar3 != 0)) &&
           ((iVar3 = piVar4[1], *(float *)(iVar3 + 8) != _DAT_100dd5f8 ||
            ((*(float *)(iVar3 + 0xc) != _DAT_100dd5f8 ||
             (*(float *)(iVar3 + 0x10) != _DAT_100dd5f8)))))) goto LAB_1007eccf;
        piVar4 = (int *)FUN_100aec40((int)piVar4,s_info_player_deathmatch_10114ed8);
      } while (piVar4 != piVar6);
      if (((piVar4 != (int *)0x0) && (*(int *)(piVar4[1] + 0x208) != 0)) &&
         (iVar3 = (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208)), iVar3 != 0)) {
        for (piVar6 = (int *)FUN_100aeba0(0,piVar4[1] + 8,0x43000000); piVar6 != (int *)0x0;
            piVar6 = (int *)FUN_100aeba0((int)piVar6,piVar4[1] + 8,0x43000000)) {
          iVar3 = (**(code **)(*piVar6 + 0xcc))();
          if ((iVar3 != 0) && (*(int *)(piVar6[1] + 0x208) != iVar5)) {
            iVar3 = (*DAT_10121f28)(0);
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = iVar3 + 0x80;
            }
            iVar7 = (*DAT_10121f28)(0);
            if (iVar7 != 0) {
              iVar7 = iVar7 + 0x80;
            }
            (**(code **)(*piVar6 + 0x60))(iVar7,iVar3,0x43960000,0);
          }
        }
        goto LAB_1007eccf;
      }
    }
LAB_1007eab5:
    if (*(int *)(DAT_10122044 + 0x10) != 0) {
      pbVar1 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0x10));
      iVar5 = -1;
      pbVar9 = pbVar1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
      if (iVar5 != -2) {
        piVar4 = (int *)FUN_100af030(0,pbVar1);
        if (piVar4 == (int *)0x0) goto LAB_1007ecee;
        if (*(int *)(piVar4[1] + 0x208) != 0) {
          (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208));
        }
        goto LAB_1007eccf;
      }
    }
    piVar4 = (int *)FUN_100aec40(0,s_info_player_start_10114ef0);
    if (piVar4 == (int *)0x0) goto LAB_1007ecee;
    if (*(int *)(piVar4[1] + 0x208) != 0) {
      (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208));
    }
  }
  else {
    piVar4 = (int *)FUN_100aec40((int)DAT_10124854,s_info_player_coop_10114f04);
    if ((((piVar4 == (int *)0x0) || (*(int *)(piVar4[1] + 0x208) == 0)) ||
        (iVar5 = (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208)), iVar5 == 0)) &&
       (((piVar4 = (int *)FUN_100aec40((int)DAT_10124854,s_info_player_start_10114ef0),
         piVar4 == (int *)0x0 || (*(int *)(piVar4[1] + 0x208) == 0)) ||
        (iVar5 = (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208)), iVar5 == 0)))) goto LAB_1007eab5;
  }
LAB_1007eccf:
  if (((piVar4 != (int *)0x0) && (*(int *)(piVar4[1] + 0x208) != 0)) &&
     (iVar5 = (*DAT_10121f20)(*(int *)(piVar4[1] + 0x208)), iVar5 != 0)) {
    DAT_10124854 = piVar4;
    return *(undefined4 *)(piVar4[1] + 0x208);
  }
LAB_1007ecee:
  (*DAT_10121efc)(4,s_PutClientInServer__no_info_playe_10114ea4);
  uVar8 = (*DAT_10121f28)(0);
  return uVar8;
}

