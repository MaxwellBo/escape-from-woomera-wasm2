
void __fastcall FUN_10039a30(void *param_1)

{
  byte bVar1;
  char cVar2;
  void *pvVar3;
  Panel *pPVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  Button *pBVar8;
  undefined4 *puVar9;
  int iVar10;
  void *this;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  byte *pbVar14;
  char *pcVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  byte local_630 [1024];
  char local_230;
  undefined4 local_22f;
  undefined1 local_131;
  byte local_130;
  byte local_12f [2];
  byte abStack_12d [124];
  undefined1 local_b1;
  char local_b0 [1];
  undefined4 uStack_af;
  byte local_90;
  undefined4 local_8f;
  undefined1 local_71;
  char local_70;
  undefined4 local_6f;
  undefined1 local_51;
  char local_50 [4];
  char local_4c [4];
  char local_48 [2];
  char local_46;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined1 local_31;
  Button *local_30;
  Panel *local_2c;
  Button *local_28;
  int local_24;
  void *local_20;
  char local_19;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  pcStack_c = FUN_10057dac;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff9c0;
  ExceptionList = &local_10;
  local_20 = param_1;
  pPVar4 = operator_new(0x25c);
  local_8 = 0;
  local_2c = pPVar4;
  if (pPVar4 == (Panel *)0x0) {
    pPVar4 = (Panel *)0x0;
  }
  else {
    lVar17 = __ftol();
    local_24 = (int)lVar17;
    lVar17 = __ftol();
    vgui::Panel::Panel(pPVar4,0,(int)lVar17,local_24,300);
    *(int *)(pPVar4 + 0xc4) = (int)lVar17;
    *(undefined ***)pPVar4 = &PTR_setPos_1006307c;
    *(undefined4 *)(pPVar4 + 0xbc) = 0;
    *(undefined4 *)(pPVar4 + 0xc0) = 0;
    *(undefined4 *)(pPVar4 + 600) = 0;
  }
  *(Panel **)((int)param_1 + 200) = pPVar4;
  local_8 = 0xffffffff;
  (**(code **)(*(int *)pPVar4 + 0x40))(param_1);
  (**(code **)(**(int **)((int)param_1 + 200) + 0x24))(0);
  *(undefined4 *)((int)param_1 + 0x214) = 1;
  *(undefined4 *)((int)param_1 + 0x228) = 0;
  *(undefined4 *)((int)param_1 + 0x224) = 0;
  *(undefined4 *)((int)param_1 + 0x220) = 0;
  *(undefined4 *)((int)param_1 + 0x218) = 0;
  iVar5 = (*DAT_100a512c)(s_commandmenu_txt_1007a414,5,0);
  if (iVar5 == 0) {
    (*DAT_100a5094)(s_Unable_to_open_commandmenu_txt_1007a3f4);
    FUN_1003cac0(param_1,(int *)0x0);
    ExceptionList = local_10;
    return;
  }
  local_8 = 1;
  FUN_10030b50(s__DetpackSet_For5Seconds_1007a3dc,(char *)((int)param_1 + 0xa00),0x20);
  FUN_10030b50(s__DetpackSet_For20Seconds_1007a3c0,(char *)((int)param_1 + 0xa20),0x20);
  FUN_10030b50(s__DetpackSet_For50Seconds_1007a3a4,(char *)((int)param_1 + 0xa40),0x20);
  *(undefined4 *)((int)param_1 + 0x208) = *(undefined4 *)((int)param_1 + 200);
  local_4c[0] = s_file_start_1007a398[4];
  local_4c[1] = s_file_start_1007a398[5];
  local_4c[2] = s_file_start_1007a398[6];
  local_4c[3] = s_file_start_1007a398[7];
  local_45 = 0;
  local_48[0] = s_file_start_1007a398[8];
  local_48[1] = s_file_start_1007a398[9];
  local_41 = 0;
  local_50[0] = s_file_start_1007a398[0];
  local_50[1] = s_file_start_1007a398[1];
  local_50[2] = s_file_start_1007a398[2];
  local_50[3] = s_file_start_1007a398[3];
  local_3d = 0;
  local_39 = 0;
  local_35 = 0;
  local_46 = s_file_start_1007a398[10];
  local_31 = 0;
  do {
    iVar5 = (*DAT_100a5130)(iVar5,local_630);
    iVar10 = -1;
    local_18 = iVar5;
    pbVar6 = local_630;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    if ((iVar10 == -2) || (0x4f < *(int *)((int)param_1 + 0x214))) {
      local_8 = 0xffffffff;
      FUN_1003ce70(param_1,0);
      FUN_1003cac0(param_1,(int *)0x0);
      (*DAT_100a5134)(iVar5);
      *(undefined4 *)((int)param_1 + 0xc4) = 1;
      ExceptionList = local_10;
      return;
    }
    while (local_630[0] != 0x7d) {
      iVar5 = -1;
      pbVar6 = local_630;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
      if (iVar5 == -2) break;
      local_70 = s_[0];
      puVar9 = &local_6f;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      _local_b0 = CONCAT31((undefined3)uStack_af,s_[0]);
      puVar9 = &uStack_af;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      local_90 = s_[0];
      puVar9 = &local_8f;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      local_130 = s_[0];
      pbVar6 = local_12f;
      for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6 = pbVar6 + 4;
      }
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      local_230 = s_[0];
      puVar9 = &local_22f;
      for (iVar5 = 0x3f; pvVar3 = local_20, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      local_24 = 0;
      local_2c = (Panel *)0x0;
      local_28 = (Button *)0x0;
      local_19 = '\x01';
      if (*(int *)((int)pvVar3 + 0x208) == 0) {
        (*DAT_100a5090)(s_Error_in_Commandmenu_txt_file_af_1007a36c,local_50);
        *(undefined4 *)((int)pvVar3 + 0xc4) = 0;
        ExceptionList = local_10;
        return;
      }
      _strncpy((char *)&local_90,(char *)local_630,0x20);
      local_71 = 0;
      pcVar13 = s_CUSTOM_1007a364;
      pbVar6 = &local_90;
      do {
        bVar1 = *pbVar6;
        bVar16 = bVar1 < (byte)*pcVar13;
        if (bVar1 != *pcVar13) {
LAB_10039d57:
          iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
          goto LAB_10039d5c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar16 = bVar1 < (byte)pcVar13[1];
        if (bVar1 != pcVar13[1]) goto LAB_10039d57;
        pbVar6 = pbVar6 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_10039d5c:
      if (iVar5 == 0) {
        local_2c = (Panel *)0x1;
        iVar5 = local_24;
LAB_10039d67:
        local_24 = iVar5;
        iVar10 = (*DAT_100a5130)(local_18,local_630);
      }
      else {
        pbVar14 = &DAT_1007a360;
        pbVar6 = &local_90;
        do {
          bVar1 = *pbVar6;
          bVar16 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_10039db1:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_10039db6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar16 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_10039db1;
          pbVar6 = pbVar6 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_10039db6:
        if (iVar5 == 0) {
          uVar7 = (*DAT_100a5130)(local_18,local_630);
          _strncpy(&local_230,(char *)local_630,0x100);
          local_131 = 0;
          iVar10 = (*DAT_100a5130)(uVar7,local_630);
        }
        else {
          iVar5 = _strncmp((char *)&local_90,&DAT_1007a358,4);
          if (iVar5 == 0) {
            local_28 = (Button *)FUN_100499e5(this,(byte *)((int)&local_8f + 3));
            iVar10 = (*DAT_100a5130)(local_18,local_630);
          }
          else {
            for (iVar5 = 1; iVar10 = local_18, iVar5 < 10; iVar5 = iVar5 + 1) {
              pbVar14 = *(byte **)(iVar5 * 4 + 0x1007a0d8);
              pbVar6 = local_630;
              do {
                bVar1 = *pbVar6;
                bVar16 = bVar1 < *pbVar14;
                if (bVar1 != *pbVar14) {
LAB_10039e83:
                  iVar10 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                  goto LAB_10039e88;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar16 = bVar1 < pbVar14[1];
                if (bVar1 != pbVar14[1]) goto LAB_10039e83;
                pbVar6 = pbVar6 + 2;
                pbVar14 = pbVar14 + 2;
              } while (bVar1 != 0);
              iVar10 = 0;
LAB_10039e88:
              if (iVar10 == 0) goto LAB_10039d67;
            }
          }
        }
      }
      _strncpy(local_b0,(char *)local_630,0x20);
      local_51 = 0;
      uVar7 = (*DAT_100a5130)(iVar10,local_630);
      _strncpy(&local_70,(char *)local_630,0x20);
      uVar11 = 0xffffffff;
      local_51 = 0;
      pcVar13 = &local_70;
      do {
        pcVar15 = pcVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar13 + 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar2 != '\0');
      uVar11 = ~uVar11;
      pcVar13 = pcVar15 + -uVar11;
      pcVar15 = local_50;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      local_18 = (*DAT_100a5130)(uVar7,local_630);
      _strncpy((char *)&local_130,(char *)local_630,0x80);
      local_b1 = 0;
      if (local_2c == (Panel *)0x0) {
        if (local_230 == '\0') {
          if (local_28 == (Button *)0x0) {
            pBVar8 = operator_new(300);
            local_30 = pBVar8;
            local_8._0_1_ = 4;
            if (pBVar8 == (Button *)0x0) {
              pBVar8 = (Button *)0x0;
            }
            else {
              local_28 = *(Button **)(*(int *)((int)local_20 + 0x208) + 600);
              lVar17 = __ftol();
              iVar5 = (int)lVar17;
              lVar17 = __ftol();
              iVar10 = (int)lVar17;
              lVar17 = __ftol();
              pBVar8 = FUN_10033080(pBVar8,local_24,&local_70,0,(int)lVar17,iVar10,iVar5);
            }
            local_8 = CONCAT31(local_8._1_3_,1);
          }
          else {
            pBVar8 = operator_new(0x130);
            local_30 = pBVar8;
            local_8._0_1_ = 3;
            if (pBVar8 == (Button *)0x0) goto LAB_1003a065;
            local_24 = *(int *)(*(int *)((int)local_20 + 0x208) + 600);
            lVar17 = __ftol();
            lVar18 = __ftol();
            lVar19 = __ftol();
            FUN_10033020(pBVar8,&local_70,0,(int)lVar19,(int)lVar18,(int)lVar17,(Button)0x0);
            *(undefined ***)pBVar8 = &PTR_setPos_10063530;
            *(Button **)(pBVar8 + 300) = local_28;
            local_8 = CONCAT31(local_8._1_3_,1);
          }
        }
        else {
          pBVar8 = operator_new(0x22c);
          local_28 = pBVar8;
          local_8._0_1_ = 2;
          if (pBVar8 == (Button *)0x0) {
LAB_1003a065:
            local_8 = CONCAT31(local_8._1_3_,1);
            pBVar8 = (Button *)0x0;
          }
          else {
            local_24 = *(int *)(*(int *)((int)local_20 + 0x208) + 600);
            lVar17 = __ftol();
            lVar18 = __ftol();
            lVar19 = __ftol();
            FUN_10033020(pBVar8,&local_70,0,(int)lVar19,(int)lVar18,(int)lVar17,(Button)0x0);
            *(undefined ***)pBVar8 = &PTR_setPos_10063798;
            FUN_100499f0(pBVar8 + 300,(byte *)s_maps__s_bsp_1007a34c);
            local_8 = CONCAT31(local_8._1_3_,1);
          }
        }
      }
      else {
        pBVar8 = FUN_1003a770(local_20,&local_70,&local_130);
        local_18 = (*DAT_100a5130)(local_18,local_630);
        if (local_630[0] == 0x7b) {
          uVar11 = 0xffffffff;
          pbVar6 = local_630;
          do {
            pbVar14 = pbVar6;
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar6 + 1;
            bVar1 = *pbVar6;
            pbVar6 = pbVar14;
          } while (bVar1 != 0);
          uVar11 = ~uVar11;
          pbVar6 = pbVar14 + -uVar11;
          pbVar14 = &local_130;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar14 = pbVar14 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pbVar14 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar14 = pbVar14 + 1;
          }
        }
        else {
          local_19 = '\0';
        }
      }
      pvVar3 = local_20;
      if (pBVar8 != (Button *)0x0) {
        FUN_10038f20(*(void **)((int)local_20 + 0x208),(int *)pBVar8);
        FUN_100331f0(pBVar8,(char)_local_b0);
        vgui::Slider2::setButtonOffset((Slider2 *)pBVar8,*(int *)((int)pvVar3 + 0x208));
        (**(code **)(*(int *)pBVar8 + 0x20c))(3);
      }
      if (local_130 == 0x7b) {
        if (*(int *)((int)pvVar3 + 0x214) < 0x50) {
          pPVar4 = FUN_100392d0(pBVar8,*(int *)((int)pvVar3 + 0x208));
          *(Panel **)((int)pvVar3 + *(int *)((int)pvVar3 + 0x214) * 4 + 200) = pPVar4;
          *(undefined4 *)((int)pvVar3 + 0x208) =
               *(undefined4 *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x214) * 4 + 200);
          *(int *)((int)pvVar3 + 0x214) = *(int *)((int)pvVar3 + 0x214) + 1;
        }
        else {
          (*DAT_100a5090)(s_Too_many_menus_in_commandmenu_tx_1007a31c,local_50);
        }
      }
      else if (local_2c == (Panel *)0x0) {
        puVar9 = operator_new(0x108);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = &PTR_FUN_10060a40;
          _strncpy((char *)(puVar9 + 1),(char *)&local_130,0x100);
          *(undefined1 *)((int)puVar9 + 0x103) = 0;
          puVar9[0x41] = 0;
        }
        (**(code **)(*(int *)pBVar8 + 0x240))(puVar9);
        puVar9 = operator_new(0xc);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          uVar7 = *(undefined4 *)((int)pvVar3 + 0x208);
          *puVar9 = &PTR_FUN_10063050;
          puVar9[1] = uVar7;
          puVar9[2] = pBVar8;
        }
        (**(code **)(*(int *)pBVar8 + 0x70))(puVar9);
      }
      if (local_19 != '\0') {
        local_18 = (*DAT_100a5130)(local_18,local_630);
      }
    }
    *(undefined4 *)((int)local_20 + 0x208) = *(undefined4 *)(*(int *)((int)local_20 + 0x208) + 0xbc)
    ;
    param_1 = local_20;
    iVar5 = local_18;
  } while( true );
}

