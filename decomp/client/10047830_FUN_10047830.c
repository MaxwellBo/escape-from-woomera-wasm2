
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __cdecl FUN_10047830(Panel *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  Panel *pPVar8;
  undefined4 uVar9;
  InputSignal *pIVar10;
  void *this;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  char *pcVar15;
  undefined4 *puVar16;
  float10 fVar17;
  undefined1 local_40 [4];
  char *local_3c;
  Panel local_30 [16];
  undefined4 local_20 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10058649;
  local_c = ExceptionList;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar14 = false;
  if ((int)param_1 < 0x3c) {
    return (Panel *)0x0;
  }
  pcVar15 = s_Escape_From_Woomera_1007ba28;
  puVar16 = local_20;
  for (iVar11 = 5; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar16 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    puVar16 = puVar16 + 1;
  }
  pcVar15 = s_<error>_1007ba20;
  if (param_1 + -0x3c < (Panel *)0x16) {
    pcVar15 = *(char **)(s_efw_UseWithMarker__d__c_1007ae08 + (int)param_1 * 4 + 0x14);
  }
  if (param_1 == (Panel *)0x3f) {
    ExceptionList = &local_c;
    pPVar8 = operator_new(0xe8);
    local_4 = 0;
    param_1 = pPVar8;
    if (pPVar8 == (Panel *)0x0) goto LAB_1004793b;
    FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
    *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
    FUN_10048ad0(pPVar8 + 0xd8,&DAT_100bc9b0);
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
    pcVar15 = s_Storyboard_EFW_Storyboards_Hidin_1007b9f4;
  }
  else {
    if (param_1 == (Panel *)0x4f) {
      ExceptionList = &local_c;
      pPVar8 = operator_new(0xe8);
      local_4 = 2;
      param_1 = pPVar8;
      if (pPVar8 == (Panel *)0x0) {
        pPVar8 = (Panel *)0x0;
      }
      else {
        param_1._0_1_ = SUB41(pPVar8,0);
        local_40[0] = param_1._0_1_;
        FUN_100424b0(local_40,'\0');
        uVar12 = 0xffffffff;
        pcVar15 = s_efw_changelevel_efw_prototype_le_1007b9cc;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar1 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar1 != '\0');
        uVar12 = ~uVar12 - 1;
        uVar9 = FUN_100429c0(local_40,uVar12,'\x01');
        if ((char)uVar9 != '\0') {
          pcVar15 = s_efw_changelevel_efw_prototype_le_1007b9cc;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)local_3c = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            local_3c = local_3c + 4;
          }
          for (uVar13 = uVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *local_3c = *pcVar15;
            pcVar15 = pcVar15 + 1;
            local_3c = local_3c + 1;
          }
          FUN_100429a0(local_40,uVar12);
        }
        bVar14 = true;
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
        *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
        FUN_10048ad0(pPVar8 + 0xd8,local_40);
        local_4 = 4;
        *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
        uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Decoy_1007b9a0);
        *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
        pIVar10 = operator_new(4);
        if (pIVar10 == (InputSignal *)0x0) {
          vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
        }
        else {
          *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
          vgui::Panel::addInputSignal(pPVar8,pIVar10);
        }
      }
      local_4 = 0xffffffff;
      if (bVar14) {
        FUN_100424b0(local_40,'\x01');
      }
      goto LAB_1004838c;
    }
    if (param_1 == (Panel *)0x43) {
      ExceptionList = &local_c;
      pPVar8 = operator_new(0xe8);
      local_4 = 6;
      param_1 = pPVar8;
      if (pPVar8 == (Panel *)0x0) goto LAB_1004793b;
      FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
      *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
      FUN_10048ad0(pPVar8 + 0xd8,&DAT_100bc9c0);
      local_4 = CONCAT31(local_4._1_3_,7);
      *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
      pcVar15 = s_Storyboard_EFW_Storyboards_Hidin_1007b974;
    }
    else {
      if (param_1 == (Panel *)0x50) {
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 8;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) {
          pPVar8 = (Panel *)0x0;
        }
        else {
          param_1._0_1_ = SUB41(pPVar8,0);
          local_40[0] = param_1._0_1_;
          FUN_100424b0(local_40,'\0');
          uVar12 = 0xffffffff;
          pcVar15 = s_efw_changelevel_efw_prototype_le_1007b94c;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12 - 1;
          uVar9 = FUN_100429c0(local_40,uVar12,'\x01');
          if ((char)uVar9 != '\0') {
            pcVar15 = s_efw_changelevel_efw_prototype_le_1007b94c;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)local_3c = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              local_3c = local_3c + 4;
            }
            for (uVar13 = uVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *local_3c = *pcVar15;
              pcVar15 = pcVar15 + 1;
              local_3c = local_3c + 1;
            }
            FUN_100429a0(local_40,uVar12);
          }
          bVar2 = true;
          local_4 = CONCAT31(local_4._1_3_,9);
          FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
          *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
          FUN_10048ad0(pPVar8 + 0xd8,local_40);
          local_4 = 10;
          *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
          uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Dec_R_1007b920);
          *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
          pIVar10 = operator_new(4);
          if (pIVar10 == (InputSignal *)0x0) {
            vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
          }
          else {
            *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
            vgui::Panel::addInputSignal(pPVar8,pIVar10);
          }
        }
        local_4 = 0xffffffff;
        if (bVar2) {
          FUN_100424b0(local_40,'\x01');
        }
        goto LAB_1004838c;
      }
      if (param_1 == (Panel *)0x52) {
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 0xc;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) {
          pPVar8 = (Panel *)0x0;
        }
        else {
          param_1._0_1_ = SUB41(pPVar8,0);
          local_40[0] = param_1._0_1_;
          FUN_100424b0(local_40,'\0');
          uVar12 = 0xffffffff;
          pcVar15 = s_;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12 - 1;
          uVar9 = FUN_100429c0(local_40,uVar12,'\x01');
          if ((char)uVar9 != '\0') {
            pcVar15 = s_;
            for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)local_3c = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              local_3c = local_3c + 4;
            }
            for (uVar13 = uVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              *local_3c = *pcVar15;
              pcVar15 = pcVar15 + 1;
              local_3c = local_3c + 1;
            }
            FUN_100429a0(local_40,uVar12);
          }
          bVar3 = true;
          local_4 = CONCAT31(local_4._1_3_,0xd);
          FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
          *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
          FUN_10048ad0(pPVar8 + 0xd8,local_40);
          local_4 = 0xe;
          *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
          uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Help__1007b8f4);
          *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
          pIVar10 = operator_new(4);
          if (pIVar10 == (InputSignal *)0x0) {
            vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
          }
          else {
            *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
            vgui::Panel::addInputSignal(pPVar8,pIVar10);
          }
        }
        local_4 = 0xffffffff;
        if (bVar3) {
          FUN_100424b0(local_40,'\x01');
        }
        goto LAB_1004838c;
      }
      if (param_1 == (Panel *)0x51) {
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 0x10;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) {
          pPVar8 = (Panel *)0x0;
        }
        else {
          param_1._0_1_ = SUB41(pPVar8,0);
          local_40[0] = param_1._0_1_;
          FUN_100424b0(local_40,'\0');
          uVar12 = 0xffffffff;
          pcVar15 = s_;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          FUN_10042900(local_40,(undefined4 *)s_,~uVar12 - 1);
          bVar4 = true;
          local_4 = CONCAT31(local_4._1_3_,0x11);
          FUN_10048a70(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
          *(undefined ***)pPVar8 = &PTR_setPos_100651dc;
          FUN_10048ad0(pPVar8 + 0xd8,local_40);
          local_4 = 0x12;
          *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
          uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Isola_1007b8c8);
          *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
          pIVar10 = operator_new(4);
          if (pIVar10 == (InputSignal *)0x0) {
            vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
          }
          else {
            *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
            vgui::Panel::addInputSignal(pPVar8,pIVar10);
          }
        }
        local_4 = 0xffffffff;
        if (bVar4) {
          FUN_100424b0(local_40,'\x01');
        }
        goto LAB_1004838c;
      }
      if (param_1 == (Panel *)0x46) {
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 0x14;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) {
          pPVar8 = (Panel *)0x0;
        }
        else {
          param_1._0_1_ = SUB41(pPVar8,0);
          local_40[0] = param_1._0_1_;
          FUN_100424b0(local_40,'\0');
          uVar12 = 0xffffffff;
          pcVar15 = s_efw_changelevel_efw_prototype_le_1007b9cc;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar15 + 1;
          } while (cVar1 != '\0');
          FUN_10042900(local_40,(undefined4 *)s_efw_changelevel_efw_prototype_le_1007b9cc,
                       ~uVar12 - 1);
          bVar5 = true;
          local_4 = CONCAT31(local_4._1_3_,0x15);
          FUN_100483d0(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
          FUN_10048ad0(pPVar8 + 0xd8,local_40);
          local_4 = 0x16;
          *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
          uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Isola_1007b8c8);
          *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
          pIVar10 = operator_new(4);
          if (pIVar10 == (InputSignal *)0x0) {
            vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
          }
          else {
            *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
            vgui::Panel::addInputSignal(pPVar8,pIVar10);
          }
        }
        local_4 = 0xffffffff;
        if (bVar5) {
          FUN_100424b0(local_40,'\x01');
        }
        goto LAB_1004838c;
      }
      if (param_1 == (Panel *)0x49) {
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 0x18;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) {
LAB_1004793b:
          pPVar8 = (Panel *)0x0;
          local_4 = 0xffffffff;
          goto LAB_1004838c;
        }
        FUN_100483d0(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
        FUN_10048ad0(pPVar8 + 0xd8,&DAT_100bc960);
        local_4 = CONCAT31(local_4._1_3_,0x19);
        *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
        pcVar15 = s_Storyboard_EFW_Storyboards_Intro_1007b898;
      }
      else {
        if (param_1 != (Panel *)0x4a) {
          if (param_1 == (Panel *)0x4b) {
            ExceptionList = &local_c;
            pPVar8 = operator_new(0xe8);
            local_4 = 0x1c;
            param_1 = pPVar8;
            if (pPVar8 == (Panel *)0x0) {
              pPVar8 = (Panel *)0x0;
            }
            else {
              param_1._0_1_ = SUB41(pPVar8,0);
              local_40[0] = param_1._0_1_;
              FUN_100424b0(local_40,'\0');
              uVar12 = 0xffffffff;
              pcVar15 = s_;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              FUN_10042900(local_40,(undefined4 *)s_,~uVar12 - 1);
              bVar6 = true;
              local_4 = CONCAT31(local_4._1_3_,0x1d);
              FUN_100483d0(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
              FUN_10048ad0(pPVar8 + 0xd8,local_40);
              local_4 = 0x1e;
              *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
              uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Intro_1007b838);
              *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
              pIVar10 = operator_new(4);
              if (pIVar10 == (InputSignal *)0x0) {
                vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
              }
              else {
                *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
                vgui::Panel::addInputSignal(pPVar8,pIVar10);
              }
            }
            local_4 = 0xffffffff;
            if (bVar6) {
              FUN_100424b0(local_40,'\x01');
            }
            goto LAB_1004838c;
          }
          if (param_1 == (Panel *)0x4c) {
            ExceptionList = &local_c;
            pPVar8 = operator_new(0xe8);
            local_4 = 0x20;
            param_1 = pPVar8;
            if (pPVar8 == (Panel *)0x0) {
              pPVar8 = (Panel *)0x0;
            }
            else {
              param_1._0_1_ = SUB41(pPVar8,0);
              local_40[0] = param_1._0_1_;
              FUN_100424b0(local_40,'\0');
              uVar12 = 0xffffffff;
              pcVar15 = s_efw_changelevel_efw_prototype_le_1007b810;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar15;
                pcVar15 = pcVar15 + 1;
              } while (cVar1 != '\0');
              FUN_10042900(local_40,(undefined4 *)s_efw_changelevel_efw_prototype_le_1007b810,
                           ~uVar12 - 1);
              bVar7 = true;
              local_4 = CONCAT31(local_4._1_3_,0x21);
              FUN_100483d0(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
              FUN_10048ad0(pPVar8 + 0xd8,local_40);
              local_4 = 0x22;
              *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
              uVar9 = (*DAT_100a4ff0)(s_Storyboard_EFW_Storyboards_Endin_1007b7e0);
              *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
              pIVar10 = operator_new(4);
              if (pIVar10 == (InputSignal *)0x0) {
                vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
              }
              else {
                *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
                vgui::Panel::addInputSignal(pPVar8,pIVar10);
              }
            }
            local_4 = 0xffffffff;
            if (bVar7) {
              FUN_100424b0(local_40,'\x01');
            }
            goto LAB_1004838c;
          }
          if (param_1 == (Panel *)0x4d) {
            ExceptionList = &local_c;
            param_1 = operator_new(0xe8);
            local_4 = 0x24;
            if (param_1 == (Panel *)0x0) goto LAB_10048380;
            pPVar8 = FUN_100484b0(param_1,s_Storyboard_EFW_Sb_Ending_Iso_spr_1007b7bc,
                                  (Panel *)&DAT_100bc9a0);
            goto LAB_10048382;
          }
          if (param_1 == (Panel *)0x4e) {
            ExceptionList = &local_c;
            this = operator_new(0xe8);
            local_4 = 0x25;
            if (this == (void *)0x0) {
              pPVar8 = (Panel *)0x0;
            }
            else {
              FUN_100469a0(local_30,s_efw_changelevel_efw_prototype_le_1007b810,
                           (undefined1 *)&param_1);
              local_4 = CONCAT31(local_4._1_3_,0x26);
              pPVar8 = FUN_100484b0(this,s_Storyboard_EFW_Sb_Ending_Dep_spr_1007b798,local_30);
            }
            local_4 = 0xffffffff;
            if (this != (void *)0x0) {
              FUN_100424b0(local_30,'\x01');
            }
            goto LAB_1004838c;
          }
          if (param_1 == (Panel *)0x48) {
            ExceptionList = &local_c;
            fVar17 = FUN_10044870();
            if ((fVar17 - (float10)_DAT_100bc9f4 <= (float10)_DAT_10064f9c) &&
               ((float10)_DAT_10059a18 <= fVar17 - (float10)_DAT_100bc9f4)) {
              ExceptionList = local_c;
              return (Panel *)0x0;
            }
            param_1 = operator_new(0xd4);
            local_4 = 0x28;
            if (param_1 == (Panel *)0x0) {
LAB_10048380:
              pPVar8 = (Panel *)0x0;
            }
            else {
              pPVar8 = FUN_10048650(param_1);
            }
          }
          else {
            ExceptionList = &local_c;
            param_1 = operator_new(0xe4);
            local_4 = 0x29;
            if (param_1 == (Panel *)0x0) goto LAB_10048380;
            pPVar8 = FUN_10048790(param_1,pcVar15,local_20,1,0,0,DAT_100a4dcc,DAT_100a4dd0,0,0);
          }
LAB_10048382:
          local_4 = 0xffffffff;
          goto LAB_1004838c;
        }
        ExceptionList = &local_c;
        pPVar8 = operator_new(0xe8);
        local_4 = 0x1a;
        param_1 = pPVar8;
        if (pPVar8 == (Panel *)0x0) goto LAB_1004793b;
        FUN_100483d0(pPVar8,0,0,0,DAT_100a4dcc,DAT_100a4dd0);
        FUN_10048ad0(pPVar8 + 0xd8,&DAT_100bc970);
        local_4 = CONCAT31(local_4._1_3_,0x1b);
        *(undefined ***)pPVar8 = &PTR_setPos_10064fcc;
        pcVar15 = s_Storyboard_EFW_Storyboards_Intro_1007b868;
      }
    }
  }
  uVar9 = (*DAT_100a4ff0)(pcVar15);
  *(undefined4 *)(pPVar8 + 0xd4) = uVar9;
  pIVar10 = operator_new(4);
  if (pIVar10 == (InputSignal *)0x0) {
    vgui::Panel::addInputSignal(pPVar8,(InputSignal *)0x0);
    local_4 = 0xffffffff;
  }
  else {
    *(undefined ***)pIVar10 = &PTR_LAB_10064fa0;
    vgui::Panel::addInputSignal(pPVar8,pIVar10);
    local_4 = 0xffffffff;
  }
LAB_1004838c:
  if (pPVar8 == (Panel *)0x0) {
    ExceptionList = local_c;
    return (Panel *)0x0;
  }
  (**(code **)(*(int *)pPVar8 + 0x40))(param_2);
  ExceptionList = pvStack_10;
  return pPVar8;
}

