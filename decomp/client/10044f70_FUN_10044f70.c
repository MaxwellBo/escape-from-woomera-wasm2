
/* WARNING: Removing unreachable block (ram,0x10045966) */
/* WARNING: Removing unreachable block (ram,0x10045985) */
/* WARNING: Removing unreachable block (ram,0x10045994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10044f70(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  char *pcVar18;
  uint uVar19;
  bool bVar20;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *local_40;
  undefined4 *puStack_3c;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 auStack_28 [3];
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  uint uStack_4;
  
  piVar6 = param_1;
  uStack_4 = 0xffffffff;
  pcStack_8 = FUN_10058380;
  pvStack_c = ExceptionList;
  local_34 = param_1[9];
  local_30 = param_1[10];
  local_2c = param_1[0xb];
  ExceptionList = &pvStack_c;
  iVar8 = (**(code **)(DAT_100a5138 + 0x30))(&local_34,&local_40);
  if (iVar8 == 1) {
    ExceptionList = pvStack_c;
    return;
  }
  fVar3 = (float)DAT_100a4dcc;
  local_40 = (undefined4 *)(((float)local_40 + _DAT_10059eb0) * fVar3 * _DAT_10059cec);
  fVar4 = (float)DAT_100a4dd0;
  puStack_3c = (undefined4 *)((_DAT_10059eb0 - (float)puStack_3c) * fVar4 * _DAT_10059cec);
  if ((float)local_40 <= _DAT_10064f44) {
    ExceptionList = pvStack_c;
    return;
  }
  if ((float)puStack_3c <= _DAT_10064f44) {
    ExceptionList = pvStack_c;
    return;
  }
  if (fVar3 - _DAT_10064f44 <= (float)local_40) {
    ExceptionList = pvStack_c;
    return;
  }
  if (fVar4 - _DAT_10064f44 <= (float)puStack_3c) {
    ExceptionList = pvStack_c;
    return;
  }
  puStack_4c = (undefined4 *)(fVar3 - (float)_DAT_100601f4);
  if ((float)local_40 < (float)_DAT_100601f4) {
    local_40 = _DAT_100601f4;
  }
  if ((float)puStack_4c < (float)local_40) {
    local_40 = puStack_4c;
  }
  puStack_48 = (undefined4 *)(fVar4 - (float)_DAT_100601f4);
  if ((float)puStack_3c < (float)_DAT_100601f4) {
    puStack_3c = _DAT_100601f4;
  }
  if ((float)puStack_48 < (float)puStack_3c) {
    puStack_3c = puStack_48;
  }
  auStack_1c[0] = param_1._0_1_;
  piStack_18 = (int *)0x0;
  piStack_14 = (int *)0x0;
  uStack_10 = 0;
  iVar8 = *piVar6;
  uStack_4 = 0;
  if (iVar8 == 0) {
    puVar9 = operator_new(0x44);
    uStack_4._0_1_ = 1;
    puStack_4c = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      puStack_48 = (undefined4 *)0x0;
    }
    else {
      uVar10 = (*DAT_100a4ff0)(s_sprites_efw_speech_bubble_spr_1007ae6c);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = uVar10;
      *puVar9 = &PTR_LAB_10064f60;
      uStack_4._0_1_ = 2;
      puVar9[4] = piVar6;
      puVar9[5] = 0xffffffff;
      FUN_100469a0(puVar9 + 6,s_Talk_to__C_1007ae60,&uStack_4e);
      uStack_4._0_1_ = 3;
      FUN_100469a0(puVar9 + 10,s_efw_Talk__c_1007ae54,&uStack_4d);
      uStack_4._0_1_ = 4;
      FUN_100083d0(puVar9 + 0xe,&local_40);
      *puVar9 = &PTR_FUN_10064f48;
      puStack_48 = puVar9;
    }
    uStack_4 = (uint)uStack_4._1_3_ << 8;
    FUN_10046e20(auStack_1c,piStack_14,1,&puStack_48);
    iVar8 = 0;
    puStack_48 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
    do {
      iVar14 = (&DAT_100a37a8)[(int)puVar11 + iVar8];
      if ((iVar14 != 0) && (*(int *)(iVar14 + 0x9c) != 0)) {
        puVar9 = operator_new(0x44);
        puStack_44 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          puStack_4c = (undefined4 *)0x0;
        }
        else {
          uVar10 = *(undefined4 *)(iVar14 + 0xbc);
          uVar2 = *(undefined4 *)(iVar14 + 0x9c);
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = uVar10;
          *puVar9 = &PTR_LAB_10064f60;
          uStack_4._0_1_ = 6;
          puVar9[4] = param_1;
          puVar9[5] = uVar2;
          FUN_100469a0(puVar9 + 6,s_Give__i_to__C_1007ae44,&uStack_4d);
          uStack_4._0_1_ = 7;
          FUN_100469a0(puVar9 + 10,s_efw_Give__d__c_1007ae34,&uStack_4e);
          uStack_4 = CONCAT31(uStack_4._1_3_,8);
          FUN_100083d0(puVar9 + 0xe,&local_40);
          *puVar9 = &PTR_FUN_10064f48;
          puStack_4c = puVar9;
        }
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_10046e20(auStack_1c,piStack_14,1,&puStack_4c);
        puVar11 = puStack_48;
      }
      iVar8 = iVar8 + 1;
      if (9 < iVar8) {
        iVar8 = 0;
        puVar11 = (undefined4 *)((int)puVar11 + 0xb);
        puStack_48 = puVar11;
      }
      puVar9 = DAT_100bc330;
      piVar5 = piStack_18;
    } while ((int)puVar11 < 0x37);
    goto joined_r0x100457f5;
  }
  puVar9 = DAT_100bc330;
  piVar5 = piStack_18;
  if (iVar8 == 1) {
    pbVar13 = (byte *)(piVar6 + 1);
    pcVar18 = s_efw_IDTag_Position_100771d4;
    pbVar12 = pbVar13;
    do {
      bVar1 = *pbVar12;
      bVar20 = bVar1 < (byte)*pcVar18;
      if (bVar1 != *pcVar18) {
LAB_100452cf:
        iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_100452d4;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar20 = bVar1 < (byte)pcVar18[1];
      if (bVar1 != pcVar18[1]) goto LAB_100452cf;
      pbVar12 = pbVar12 + 2;
      pcVar18 = pcVar18 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_100452d4:
    if (iVar8 == 0) {
      iVar8 = FUN_10044f30(0x14);
      puVar9 = DAT_100bc330;
      piVar5 = piStack_18;
      if (iVar8 != 0) {
        puVar9 = operator_new(0x44);
        puStack_44 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          puStack_48 = (undefined4 *)0x0;
        }
        else {
          uVar10 = *(undefined4 *)(iVar8 + 0xbc);
          uVar2 = *(undefined4 *)(iVar8 + 0x9c);
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = uVar10;
          *puVar9 = &PTR_LAB_10064f60;
          uStack_4._0_1_ = 10;
          puVar9[4] = param_1;
          puVar9[5] = uVar2;
          FUN_100469a0(puVar9 + 6,s_Place__i_on_fence_1007ae20,(undefined1 *)&param_1);
          uStack_4._0_1_ = 0xb;
          FUN_100469a0(puVar9 + 10,s_efw_UseWithMarker__d__c_1007ae08,&uStack_4d);
          uStack_4 = CONCAT31(uStack_4._1_3_,0xc);
          FUN_100083d0(puVar9 + 0xe,&local_40);
          *puVar9 = &PTR_FUN_10064f48;
          puStack_48 = puVar9;
        }
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_10046e20(auStack_1c,piStack_14,1,&puStack_48);
        puVar9 = DAT_100bc330;
        piVar5 = piStack_18;
      }
      goto joined_r0x100457f5;
    }
    pcVar18 = s_efw_kitchen_bin_10076eb8;
    pbVar12 = pbVar13;
    do {
      bVar1 = *pbVar12;
      bVar20 = bVar1 < (byte)*pcVar18;
      if (bVar1 != *pcVar18) {
LAB_100453c1:
        iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_100453c6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar20 = bVar1 < (byte)pcVar18[1];
      if (bVar1 != pcVar18[1]) goto LAB_100453c1;
      pbVar12 = pbVar12 + 2;
      pcVar18 = pcVar18 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_100453c6:
    if (iVar8 == 0) {
      iVar8 = FUN_10044f30(0x10);
      puVar9 = DAT_100bc330;
      piVar5 = piStack_18;
      if (iVar8 != 0) {
        puVar9 = operator_new(0x44);
        puStack_44 = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          puStack_48 = (undefined4 *)0x0;
        }
        else {
          uVar10 = *(undefined4 *)(iVar8 + 0xbc);
          uVar2 = *(undefined4 *)(iVar8 + 0x9c);
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = uVar10;
          *puVar9 = &PTR_LAB_10064f60;
          uStack_4._0_1_ = 0xe;
          puVar9[4] = param_1;
          puVar9[5] = uVar2;
          FUN_100469a0(puVar9 + 6,s_Hide__i_in_bin_1007adf8,(undefined1 *)&param_1);
          uStack_4._0_1_ = 0xf;
          FUN_100469a0(puVar9 + 10,s_efw_UseWithMarker__d__c_1007ae08,&uStack_4d);
          uStack_4 = CONCAT31(uStack_4._1_3_,0x10);
          FUN_100083d0(puVar9 + 0xe,&local_40);
          *puVar9 = &PTR_FUN_10064f48;
          puStack_48 = puVar9;
        }
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_10046e20(auStack_1c,piStack_14,1,&puStack_48);
        puVar9 = DAT_100bc330;
        piVar5 = piStack_18;
      }
      goto joined_r0x100457f5;
    }
    pcVar18 = s_efw_hiding_place_1007ade4;
    pbVar12 = pbVar13;
    do {
      bVar1 = *pbVar12;
      bVar20 = bVar1 < (byte)*pcVar18;
      if (bVar1 != *pcVar18) {
LAB_100454b3:
        iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_100454b8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar20 = bVar1 < (byte)pcVar18[1];
      if (bVar1 != pcVar18[1]) goto LAB_100454b3;
      pbVar12 = pbVar12 + 2;
      pcVar18 = pcVar18 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_100454b8:
    if (iVar8 == 0) {
      puVar9 = operator_new(0x44);
      uStack_4._0_1_ = 0x11;
      puStack_44 = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puStack_48 = (undefined4 *)0x0;
      }
      else {
        uVar10 = (*DAT_100a4ff0)(s_sprites_efw_hide_icon_spr_1007adc8);
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = uVar10;
        *puVar9 = &PTR_LAB_10064f60;
        uStack_4._0_1_ = 0x12;
        puVar9[4] = piVar6;
        puVar9[5] = 0xffffffff;
        FUN_100469a0(puVar9 + 6,s_Hide_under_the_building_1007adb0,(undefined1 *)&param_1);
        uStack_4._0_1_ = 0x13;
        FUN_100469a0(puVar9 + 10,s_efw_HideUnderBuilding_1007ad98,&uStack_4d);
        uStack_4._0_1_ = 0x14;
        FUN_100083d0(puVar9 + 0xe,&local_40);
        *puVar9 = &PTR_FUN_10064f48;
        puStack_48 = puVar9;
      }
      uStack_4 = (uint)uStack_4._1_3_ << 8;
      FUN_10046e20(auStack_1c,piStack_14,1,&puStack_48);
      puVar9 = DAT_100bc330;
      piVar5 = piStack_18;
      goto joined_r0x100457f5;
    }
    pcVar18 = s_efw_cage_door_10076f48;
    pbVar12 = pbVar13;
    do {
      bVar1 = *pbVar12;
      bVar20 = bVar1 < (byte)*pcVar18;
      if (bVar1 != *pcVar18) {
LAB_10045598:
        iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
        goto LAB_1004559d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar12[1];
      bVar20 = bVar1 < (byte)pcVar18[1];
      if (bVar1 != pcVar18[1]) goto LAB_10045598;
      pbVar12 = pbVar12 + 2;
      pcVar18 = pcVar18 + 2;
    } while (bVar1 != 0);
    iVar8 = 0;
LAB_1004559d:
    if (iVar8 != 0) {
      pcVar18 = s_efw_PliersMarker_1007ad64;
      do {
        bVar1 = *pbVar13;
        bVar20 = bVar1 < (byte)*pcVar18;
        if (bVar1 != *pcVar18) {
LAB_10045683:
          iVar8 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
          goto LAB_10045688;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar13[1];
        bVar20 = bVar1 < (byte)pcVar18[1];
        if (bVar1 != pcVar18[1]) goto LAB_10045683;
        pbVar13 = pbVar13 + 2;
        pcVar18 = pcVar18 + 2;
      } while (bVar1 != 0);
      iVar8 = 0;
LAB_10045688:
      if (iVar8 != 0) goto joined_r0x100457f5;
      puVar9 = operator_new(0x44);
      uStack_4._0_1_ = 0x19;
      puStack_44 = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puStack_48 = (undefined4 *)0x0;
      }
      else {
        uVar10 = (*DAT_100a4ff0)(s_sprites_efw_item_pliers_spr_1007ad48);
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = uVar10;
        *puVar9 = &PTR_LAB_10064f60;
        uStack_4._0_1_ = 0x1a;
        puVar9[4] = piVar6;
        puVar9[5] = 0xffffffff;
        FUN_100469a0(puVar9 + 6,s_Take_pliers_1007ad3c,(undefined1 *)&param_1);
        uStack_4._0_1_ = 0x1b;
        FUN_100469a0(puVar9 + 10,s_efw_PickupPliers_1007ad28,&uStack_4d);
        uStack_4._0_1_ = 0x1c;
        FUN_100083d0(puVar9 + 0xe,&local_40);
        *puVar9 = &PTR_FUN_10064f48;
        puStack_48 = puVar9;
      }
      goto LAB_100457dc;
    }
    iVar8 = FUN_10044f30(0x11);
    puVar9 = DAT_100bc330;
    piVar5 = piStack_18;
    if (iVar8 == 0) goto joined_r0x100457f5;
    puVar9 = operator_new(0x44);
    puStack_44 = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      puStack_48 = (undefined4 *)0x0;
    }
    else {
      uVar10 = *(undefined4 *)(iVar8 + 0xbc);
      uVar2 = *(undefined4 *)(iVar8 + 0x9c);
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = uVar10;
      *puVar9 = &PTR_LAB_10064f60;
      puVar9[4] = param_1;
      uStack_4._0_1_ = 0x16;
      puVar9[5] = uVar2;
      FUN_100469a0(puVar9 + 6,s_Force_open_cage_door_with__i_1007ad78,(undefined1 *)&param_1);
      uStack_4._0_1_ = 0x17;
      FUN_100469a0(puVar9 + 10,s_efw_UseWithMarker__d__c_1007ae08,&uStack_4d);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x18);
      FUN_100083d0(puVar9 + 0xe,&local_40);
      *puVar9 = &PTR_FUN_10064f48;
      puStack_48 = puVar9;
    }
    uStack_4 = uStack_4 >> 8;
  }
  else {
    if (iVar8 < 100) goto joined_r0x100457f5;
    iVar14 = FUN_10044f30(iVar8 + -100);
    puVar9 = operator_new(0x44);
    uStack_4._0_1_ = 0x1d;
    puStack_44 = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      puStack_48 = (undefined4 *)0x0;
    }
    else {
      if (iVar14 == 0) {
        uVar10 = (*DAT_100a4ff0)(s_sprites_efw_give_icon_spr_1007ad0c);
      }
      else {
        uVar10 = *(undefined4 *)(iVar14 + 0xbc);
      }
      FUN_10045a30(puVar9,uVar10);
      uStack_4._0_1_ = 0x1e;
      puVar9[4] = param_1;
      puVar9[5] = iVar8 + -100;
      FUN_100469a0(puVar9 + 6,s_Pick_up__i_1007ad00,(undefined1 *)&param_1);
      uStack_4._0_1_ = 0x1f;
      FUN_100469a0(puVar9 + 10,s_efw_Pickup__u_1007acf0,&uStack_4d);
      uStack_4._0_1_ = 0x20;
      FUN_100083d0(puVar9 + 0xe,&local_40);
      *puVar9 = &PTR_FUN_10064f48;
      puStack_48 = puVar9;
    }
LAB_100457dc:
    uStack_4 = (uint)uStack_4._1_3_;
  }
  uStack_4 = uStack_4 << 8;
  FUN_10046ab0(auStack_1c,piStack_14,&puStack_48);
  puVar9 = DAT_100bc330;
  piVar5 = piStack_18;
joined_r0x100457f5:
  for (; piVar7 = piStack_14, piVar6 = piStack_18, DAT_100bc330 = puVar9, piVar5 != piStack_14;
      piVar5 = piVar5 + 1) {
    if (piStack_18 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)piStack_14 - (int)piStack_18 >> 2;
    }
    iVar14 = *piVar5;
    *(int *)(iVar14 + 4) = (int)piVar5 - (int)piStack_18 >> 2;
    *(int *)(iVar14 + 8) = iVar8;
    puVar9 = DAT_100bc330;
  }
  uVar19 = (int)piStack_14 - (int)piStack_18 >> 2;
  param_1 = piStack_14;
  if ((uint)((int)DAT_100bc334 - (int)puVar9 >> 2) < uVar19) {
    uVar15 = FUN_10046a90(0x100bc328);
    uVar16 = uVar19;
    if (uVar19 < uVar15) {
      uVar16 = FUN_10046a90(0x100bc328);
    }
    iVar8 = FUN_10046a90(0x100bc328);
    puStack_48 = (undefined4 *)(iVar8 + uVar16);
    puVar11 = puStack_48;
    if ((int)puStack_48 < 0) {
      puVar11 = (undefined4 *)0x0;
    }
    puVar11 = operator_new((int)puVar11 << 2);
    puVar17 = FUN_10046c50(DAT_100bc32c,puVar9,puVar11);
    puVar17 = FUN_10046c50(piVar6,param_1,puVar17);
    FUN_10046c50(puVar9,DAT_100bc330,puVar17);
    FUN_10001ad0();
    FUN_10049a73((undefined *)DAT_100bc32c);
    DAT_100bc334 = puVar11 + (int)puStack_48;
    iVar8 = FUN_10046a90(0x100bc328);
    DAT_100bc330 = puVar11 + iVar8 + uVar19;
    DAT_100bc32c = puVar11;
  }
  else if (uVar19 != 0) {
    FUN_10046c50(puVar9,puVar9,puVar9 + uVar19);
    FUN_10046c50(piVar6 + ((int)DAT_100bc330 - (int)puVar9 >> 2),piVar7,DAT_100bc330);
    FUN_10047590(piVar6,piVar6 + ((int)DAT_100bc330 - (int)puVar9 >> 2),puVar9);
    DAT_100bc330 = DAT_100bc330 + uVar19;
  }
  if ((piStack_18 != (int *)0x0) && (((int)piStack_14 - (int)piStack_18 & 0xfffffffcU) != 0)) {
    FUN_100083d0(auStack_28,&local_40);
    FUN_10047030(&DAT_100bc340,DAT_100bc348,1,auStack_28);
  }
  uStack_4 = 0xffffffff;
  FUN_10001ad0();
  FUN_10049a73((undefined *)piStack_18);
  ExceptionList = pvStack_c;
  return;
}

