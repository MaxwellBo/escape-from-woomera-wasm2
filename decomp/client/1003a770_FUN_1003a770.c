
Button * __thiscall FUN_1003a770(void *this,char *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  Button *pBVar5;
  Panel *pPVar6;
  Button *pBVar7;
  undefined4 *puVar8;
  Button *pBVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  Button BVar18;
  Button *local_21c;
  Button *local_214;
  char local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057fa0;
  local_c = ExceptionList;
  pcVar12 = s__CHANGETEAM_1007a6bc;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar14 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_1003a7d2:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_1003a7d7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar14 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_1003a7d2;
    pbVar3 = pbVar3 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003a7d7:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(300);
    local_4 = 0;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      BVar18 = (Button)0x0;
      lVar15 = __ftol();
      iVar4 = (int)lVar15;
      lVar15 = __ftol();
      iVar11 = (int)lVar15;
      lVar15 = __ftol();
      pBVar5 = FUN_10033020(pBVar5,param_1,0,(int)lVar15,iVar11,iVar4,BVar18);
    }
    local_4 = 0xffffffff;
    pPVar6 = FUN_100392d0(pBVar5,*(int *)((int)this + 0x208));
    *(Panel **)((int)this + *(int *)((int)this + 0x214) * 4 + 200) = pPVar6;
    *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + 1;
    puVar10 = (undefined4 *)((int)this + 0x840);
    iVar4 = 1;
    do {
      FUN_100499f0(local_20c,(byte *)s_jointeam__d_1007a6b0);
      pBVar7 = operator_new(0x130);
      local_4 = 1;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        lVar15 = __ftol();
        lVar16 = __ftol();
        FUN_10033020(pBVar7,s_teamname_1007a6a4,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
        *(undefined ***)pBVar7 = &PTR_setPos_10064838;
        *(int *)(pBVar7 + 300) = iVar4;
      }
      local_4 = 0xffffffff;
      *puVar10 = pBVar7;
      puVar8 = operator_new(0x108);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = &PTR_FUN_10060a40;
        _strncpy((char *)(puVar8 + 1),local_20c,0x100);
        *(undefined1 *)((int)puVar8 + 0x103) = 0;
        puVar8[0x41] = 0;
        *puVar8 = &PTR_FUN_10064834;
      }
      (**(code **)(*(int *)*puVar10 + 0x240))(puVar8);
      FUN_10038f20(pPVar6,(int *)*puVar10);
      puVar10 = puVar10 + 1;
      bVar14 = iVar4 < 4;
      iVar4 = iVar4 + 1;
    } while (bVar14);
    pBVar7 = operator_new(0x130);
    local_4 = 2;
    if (pBVar7 == (Button *)0x0) {
      pBVar9 = (Button *)0x0;
    }
    else {
      lVar15 = __ftol();
      lVar16 = __ftol();
      pcVar12 = FUN_10030c20(s__Team_AutoAssign_1007a690);
      FUN_10033020(pBVar7,pcVar12,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
      *(undefined ***)pBVar7 = &PTR_setPos_10064838;
      *(undefined4 *)(pBVar7 + 300) = 5;
      pBVar9 = pBVar7;
    }
    local_4 = 0xffffffff;
    *(Button **)((int)this + 0x850) = pBVar9;
    puVar10 = operator_new(0x108);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = &PTR_FUN_10060a40;
      _strncpy((char *)(puVar10 + 1),s_jointeam_5_1007a684,0x100);
      *(undefined1 *)((int)puVar10 + 0x103) = 0;
      puVar10[0x41] = 0;
    }
    (**(code **)(**(int **)((int)this + 0x850) + 0x240))(puVar10);
    FUN_10038f20(pPVar6,*(int **)((int)this + 0x850));
    pBVar9 = operator_new(300);
    pcStack_8 = (code *)0x3;
    if (pBVar9 == (Button *)0x0) {
      pBVar9 = (Button *)0x0;
    }
    else {
      lVar15 = __ftol();
      lVar16 = __ftol();
      pcVar12 = FUN_10030c20(s__Menu_Spectate_1007a674);
      FUN_10033020(pBVar9,pcVar12,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
      *(undefined ***)pBVar9 = &PTR_setPos_100645cc;
      this = pBVar7;
    }
    pcStack_8 = (code *)0xffffffff;
    *(Button **)((int)this + 0x854) = pBVar9;
    puVar10 = operator_new(0x108);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = &PTR_FUN_10060a40;
      _strncpy((char *)(puVar10 + 1),s_spectate_1007a668,0x100);
      *(undefined1 *)((int)puVar10 + 0x103) = 0;
      puVar10[0x41] = 0;
    }
    (**(code **)(**(int **)((int)this + 0x854) + 0x240))(puVar10);
    FUN_10038f20(pPVar6,*(int **)((int)this + 0x854));
    ExceptionList = local_c;
    return pBVar5;
  }
  pcVar12 = s__CHANGECLASS_1007a658;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar14 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_1003abbc:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_1003abc1;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar14 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_1003abbc;
    pbVar3 = pbVar3 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003abc1:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(0x130);
    local_4 = 4;
    if (pBVar5 == (Button *)0x0) {
      pBVar5 = (Button *)0x0;
    }
    else {
      lVar15 = __ftol();
      lVar16 = __ftol();
      FUN_10033020(pBVar5,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
      *(undefined ***)pBVar5 = &PTR_setPos_100607d0;
      *(undefined4 *)(pBVar5 + 300) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    pPVar6 = FUN_100392d0(pBVar5,*(int *)((int)this + 0x208));
    iVar4 = 1;
    *(Panel **)((int)this + *(int *)((int)this + 0x214) * 4 + 200) = pPVar6;
    iVar11 = 0;
    *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + 1;
    do {
      FUN_10030b50(*(char **)((int)&PTR_s__Scout_1007a108 + iVar11),local_20c,0x100);
      pBVar7 = operator_new(0x130);
      local_4 = 5;
      if (pBVar7 == (Button *)0x0) {
        pBVar7 = (Button *)0x0;
      }
      else {
        lVar15 = __ftol();
        lVar16 = __ftol();
        FUN_10033020(pBVar7,local_20c,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
        *(undefined ***)pBVar7 = &PTR_setPos_100607d0;
        *(int *)(pBVar7 + 300) = iVar4;
      }
      local_4 = 0xffffffff;
      FUN_100499f0(local_20c,&DAT_10078410);
      puVar10 = operator_new(0x108);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = &PTR_FUN_10060a40;
        _strncpy((char *)(puVar10 + 1),local_20c,0x100);
        *(undefined1 *)((int)puVar10 + 0x103) = 0;
        puVar10[0x41] = 0;
        *puVar10 = &PTR_FUN_10060a3c;
      }
      (**(code **)(*(int *)pBVar7 + 0x240))(puVar10);
      FUN_10038f20(pPVar6,(int *)pBVar7);
      iVar11 = iVar11 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar11 < 0x25);
    ExceptionList = local_c;
    return pBVar5;
  }
  pcVar12 = s__MAPBRIEFING_1007a648;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar14 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_1003add4:
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_1003add9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar14 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_1003add4;
    pbVar3 = pbVar3 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_1003add9:
  if (iVar4 == 0) {
    ExceptionList = &local_c;
    pBVar5 = operator_new(300);
    local_4 = 6;
    if (pBVar5 == (Button *)0x0) {
      local_214 = (Button *)0x0;
    }
    else {
      BVar18 = (Button)0x0;
      lVar15 = __ftol();
      iVar4 = (int)lVar15;
      lVar15 = __ftol();
      iVar11 = (int)lVar15;
      lVar15 = __ftol();
      local_214 = FUN_10033020(pBVar5,param_1,0,(int)lVar15,iVar11,iVar4,BVar18);
    }
    local_4 = 0xffffffff;
    puVar10 = operator_new(8);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      *puVar10 = &PTR_FUN_100605a0;
      puVar10[1] = 4;
    }
    (**(code **)(*(int *)local_214 + 0x240))(puVar10);
    puVar10 = operator_new(0xc);
    if (puVar10 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)((int)this + 0x208);
      *puVar10 = &PTR_FUN_10063050;
      puVar10[1] = uVar2;
      puVar10[2] = local_214;
      goto LAB_1003c6ab;
    }
  }
  else {
    pcVar12 = s__CLASSDESC_1007a63c;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar14 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_1003aefb:
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_1003af00;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar14 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_1003aefb;
      pbVar3 = pbVar3 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_1003af00:
    if (iVar4 == 0) {
      ExceptionList = &local_c;
      local_21c = operator_new(0x130);
      local_4 = 7;
      if (local_21c == (Button *)0x0) {
        local_214 = (Button *)0x0;
      }
      else {
        lVar15 = __ftol();
        lVar16 = __ftol();
        lVar17 = __ftol();
        FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0);
        *(undefined ***)local_21c = &PTR_setPos_100607d0;
        *(undefined4 *)(local_21c + 300) = 0;
        local_214 = local_21c;
      }
      local_4 = 0xffffffff;
      puVar10 = operator_new(8);
      if (puVar10 == (undefined4 *)0x0) {
LAB_1003afd5:
        puVar10 = (undefined4 *)0x0;
      }
      else {
        *puVar10 = &PTR_FUN_100605a0;
        puVar10[1] = 6;
      }
    }
    else {
      pcVar12 = s__SERVERINFO_1007a630;
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar14 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_1003b03c:
          iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_1003b041;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar14 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_1003b03c;
        pbVar3 = pbVar3 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_1003b041:
      if (iVar4 != 0) {
        pbVar13 = &DAT_1007a628;
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar14 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_1003b14a:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_1003b14f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar14 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_1003b14a;
          pbVar3 = pbVar3 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_1003b14f:
        if (iVar4 == 0) {
          ExceptionList = &local_c;
          pBVar5 = operator_new(0x134);
          local_4 = 9;
          if (pBVar5 == (Button *)0x0) {
            ExceptionList = local_c;
            return (Button *)0x0;
          }
          lVar15 = __ftol();
          BVar18 = (Button)0x0;
          iVar4 = (int)lVar15;
          lVar16 = __ftol();
          FUN_10033020(pBVar5,param_1,0,(int)lVar15,(int)lVar16,iVar4,BVar18);
          *(undefined ***)pBVar5 = &PTR_setPos_10064364;
          *(undefined4 *)(pBVar5 + 300) = 0;
          ExceptionList = local_c;
          return pBVar5;
        }
        pbVar13 = &DAT_1007a620;
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar14 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_1003b210:
            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_1003b215;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar14 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_1003b210;
          pbVar3 = pbVar3 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_1003b215:
        if (iVar4 == 0) {
          ExceptionList = &local_c;
          local_214 = operator_new(0x130);
          local_4 = 10;
          local_21c = local_214;
          if (local_214 == (Button *)0x0) {
LAB_1003b297:
            local_214 = (Button *)0x0;
          }
          else {
            lVar15 = __ftol();
            lVar16 = __ftol();
            FUN_10033020(local_214,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
            *(undefined ***)local_214 = &PTR_setPos_100640fc;
            *(undefined4 *)(local_214 + 300) = 0;
          }
LAB_1003b299:
          local_4 = 0xffffffff;
          puVar10 = operator_new(0x108);
          if (puVar10 == (undefined4 *)0x0) goto LAB_1003c676;
          *puVar10 = &PTR_FUN_10060a40;
          pcVar12 = s_feign_1007a618;
LAB_1003c556:
          _strncpy((char *)(puVar10 + 1),pcVar12,0x100);
          *(undefined1 *)((int)puVar10 + 0x103) = 0;
          puVar10[0x41] = 0;
        }
        else {
          pcVar12 = s__FEIGNSILENT_1007a608;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b301:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b306;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b301;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b306:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_21c = operator_new(0x130);
            local_4 = 0xb;
            if (local_21c == (Button *)0x0) {
              local_214 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_10033020(local_21c,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)local_21c = &PTR_setPos_100640fc;
              *(undefined4 *)(local_21c + 300) = 0;
              local_214 = local_21c;
            }
            local_4 = 0xffffffff;
            puVar10 = operator_new(0x108);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = &PTR_FUN_10060a40;
              pcVar12 = s_sfeign_1007a600;
              goto LAB_1003c556;
            }
            goto LAB_1003c676;
          }
          pcVar12 = s__FEIGNSTOP_1007a5f4;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b3f2:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b3f7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b3f2;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b3f7:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_214 = operator_new(0x130);
            local_4 = 0xc;
            local_21c = local_214;
            if (local_214 == (Button *)0x0) goto LAB_1003b297;
            lVar15 = __ftol();
            lVar16 = __ftol();
            FUN_10033020(local_214,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
            *(undefined ***)local_214 = &PTR_setPos_100640fc;
            *(undefined4 *)(local_214 + 300) = 1;
            goto LAB_1003b299;
          }
          pcVar12 = s__DISGUISEENEMY_1007a5e4;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b4ad:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b4b2;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b4ad;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b4b2:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xd;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_10033020(pBVar5,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10064364;
              *(undefined4 *)(pBVar5 + 300) = 2;
            }
LAB_1003b546:
            local_4 = 0xffffffff;
            FUN_1003a5f0(this,pBVar5,*(int *)((int)this + 0x208));
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar12 = s__DISGUISEFRIENDLY_1007a5c0;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b589:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b58e;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b589;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b58e:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xe;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_10033020(pBVar5,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10064364;
              *(undefined4 *)(pBVar5 + 300) = 3;
            }
            goto LAB_1003b546;
          }
          pcVar12 = s__DISGUISE_1007a5a0;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b658:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b65d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b658;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b65d:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x134);
            local_4 = 0xf;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_10033020(pBVar5,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10064364;
              *(undefined4 *)(pBVar5 + 300) = 0xc;
            }
            local_4 = 0xffffffff;
            pPVar6 = FUN_100392d0(pBVar5,*(int *)((int)this + 0x208));
            iVar4 = 1;
            puVar10 = (undefined4 *)((int)this + 0x85c);
            *(Panel **)((int)this + *(int *)((int)this + 0x214) * 4 + 200) = pPVar6;
            *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + 1;
            do {
              pBVar7 = operator_new(0x134);
              local_4 = 0x10;
              if (pBVar7 == (Button *)0x0) {
                pBVar7 = (Button *)0x0;
              }
              else {
                lVar15 = __ftol();
                lVar16 = __ftol();
                FUN_10033020(pBVar7,s_Disguise_1007a594,0,(int)lVar15,(int)lVar16,(int)lVar15,
                             (Button)0x0);
                *(undefined ***)pBVar7 = &PTR_setPos_10064364;
                *(uint *)(pBVar7 + 300) = (uint)((3 < iVar4) - 1U & 4 | 8);
              }
              local_4 = 0xffffffff;
              *puVar10 = pBVar7;
              FUN_10038f20(pPVar6,(int *)pBVar7);
              FUN_100499f0(local_10c,(byte *)s_disguise__d_1007a588);
              FUN_1003a5f0(this,*puVar10,(int)pPVar6);
              iVar4 = iVar4 + 1;
              puVar10 = puVar10 + 1;
            } while (iVar4 < 5);
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar12 = s__DETPACKSTART_1007a578;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003b836:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003b83b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003b836;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003b83b:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            pBVar5 = operator_new(0x130);
            local_4 = 0x11;
            if (pBVar5 == (Button *)0x0) {
              pBVar5 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              lVar17 = __ftol();
              FUN_10033020(pBVar5,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)pBVar5 = &PTR_setPos_10063e94;
              *(undefined4 *)(pBVar5 + 300) = 2;
            }
            local_4 = 0xffffffff;
            pPVar6 = FUN_100392d0(pBVar5,*(int *)((int)this + 0x208));
            *(Panel **)((int)this + *(int *)((int)this + 0x214) * 4 + 200) = pPVar6;
            *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + 1;
            pBVar7 = operator_new(300);
            local_4 = 0x12;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              BVar18 = (Button)0x0;
              iVar4 = (int)lVar15;
              lVar16 = __ftol();
              pBVar7 = FUN_10033020(pBVar7,(char *)((int)this + 0xa00),0,(int)lVar15,(int)lVar16,
                                    iVar4,BVar18);
            }
            local_4 = 0xffffffff;
            puVar10 = operator_new(0x108);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = &PTR_FUN_10060a40;
              _strncpy((char *)(puVar10 + 1),s_detstart_5_1007a56c,0x100);
              *(undefined1 *)((int)puVar10 + 0x103) = 0;
              puVar10[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar10);
            FUN_10038f20(pPVar6,(int *)pBVar7);
            pBVar7 = operator_new(300);
            pcStack_8 = (code *)0x13;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              BVar18 = (Button)0x0;
              iVar4 = (int)lVar15;
              lVar16 = __ftol();
              pBVar7 = FUN_10033020(pBVar7,(char *)((int)this + 0xa20),0,(int)lVar15,(int)lVar16,
                                    iVar4,BVar18);
            }
            pcStack_8 = (code *)0xffffffff;
            puVar10 = operator_new(0x108);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = &PTR_FUN_10060a40;
              _strncpy((char *)(puVar10 + 1),s_detstart_20_1007a560,0x100);
              *(undefined1 *)((int)puVar10 + 0x103) = 0;
              puVar10[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar10);
            FUN_10038f20(pPVar6,(int *)pBVar7);
            pBVar7 = operator_new(300);
            local_c = (void *)0x14;
            if (pBVar7 == (Button *)0x0) {
              pBVar7 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              BVar18 = (Button)0x0;
              iVar4 = (int)lVar15;
              lVar16 = __ftol();
              pBVar7 = FUN_10033020(pBVar7,(char *)((int)this + 0xa40),0,(int)lVar15,(int)lVar16,
                                    iVar4,BVar18);
            }
            local_c = (void *)0xffffffff;
            puVar10 = operator_new(0x108);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = &PTR_FUN_10060a40;
              _strncpy((char *)(puVar10 + 1),s_detstart_50_1007a554,0x100);
              *(undefined1 *)((int)puVar10 + 0x103) = 0;
              puVar10[0x41] = 0;
            }
            (**(code **)(*(int *)pBVar7 + 0x240))(puVar10);
            FUN_10038f20(pPVar6,(int *)pBVar7);
            ExceptionList = local_c;
            return pBVar5;
          }
          pcVar12 = s__DETPACKSTOP_1007a544;
          pbVar3 = param_2;
          do {
            bVar1 = *pbVar3;
            bVar14 = bVar1 < (byte)*pcVar12;
            if (bVar1 != *pcVar12) {
LAB_1003bba3:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_1003bba8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar14 = bVar1 < (byte)pcVar12[1];
            if (bVar1 != pcVar12[1]) goto LAB_1003bba3;
            pbVar3 = pbVar3 + 2;
            pcVar12 = pcVar12 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_1003bba8:
          if (iVar4 == 0) {
            ExceptionList = &local_c;
            local_21c = operator_new(0x130);
            local_4 = 0x15;
            if (local_21c == (Button *)0x0) {
              local_214 = (Button *)0x0;
            }
            else {
              lVar15 = __ftol();
              lVar16 = __ftol();
              FUN_10033020(local_21c,param_1,0,(int)lVar15,(int)lVar16,(int)lVar15,(Button)0x0);
              *(undefined ***)local_21c = &PTR_setPos_10063e94;
              *(undefined4 *)(local_21c + 300) = 1;
              local_214 = local_21c;
            }
            local_4 = 0xffffffff;
            puVar10 = operator_new(0x108);
            if (puVar10 != (undefined4 *)0x0) {
              *puVar10 = &PTR_FUN_10060a40;
              pcVar12 = s_detstop_1007a53c;
              goto LAB_1003c556;
            }
          }
          else {
            pcVar12 = s__BUILD_1007a534;
            pbVar3 = param_2;
            do {
              bVar1 = *pbVar3;
              bVar14 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_1003bc94:
                iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_1003bc99;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar14 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_1003bc94;
              pbVar3 = pbVar3 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_1003bc99:
            if (iVar4 == 0) {
              ExceptionList = &local_c;
              pBVar5 = operator_new(0x134);
              local_4 = 0x16;
              if (pBVar5 == (Button *)0x0) {
                ExceptionList = local_c;
                return (Button *)0x0;
              }
              BVar18 = (Button)0x0;
              lVar15 = __ftol();
              iVar4 = (int)lVar15;
              lVar15 = __ftol();
              iVar11 = (int)lVar15;
              lVar15 = __ftol();
              FUN_10033020(pBVar5,param_1,0,(int)lVar15,iVar11,iVar4,BVar18);
              *(undefined ***)pBVar5 = &PTR_setPos_10063c2c;
              *(undefined4 *)(pBVar5 + 300) = 4;
              *(undefined4 *)(pBVar5 + 0x130) = 0;
              ExceptionList = local_c;
              return pBVar5;
            }
            pcVar12 = s__BUILDSENTRY_1007a524;
            pbVar3 = param_2;
            do {
              bVar1 = *pbVar3;
              bVar14 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_1003bd64:
                iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_1003bd69;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar14 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_1003bd64;
              pbVar3 = pbVar3 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_1003bd69:
            if (iVar4 == 0) {
              ExceptionList = &local_c;
              local_21c = operator_new(0x134);
              local_4 = 0x17;
              if (local_21c == (Button *)0x0) {
                local_214 = (Button *)0x0;
              }
              else {
                lVar15 = __ftol();
                lVar16 = __ftol();
                lVar17 = __ftol();
                FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0);
                *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                *(undefined4 *)(local_21c + 300) = 8;
                *(undefined4 *)(local_21c + 0x130) = 1;
                local_214 = local_21c;
              }
              local_4 = 0xffffffff;
              puVar10 = operator_new(0x108);
              if (puVar10 != (undefined4 *)0x0) {
                *puVar10 = &PTR_FUN_10060a40;
                pcVar12 = s_build_2_1007a51c;
                goto LAB_1003c556;
              }
            }
            else {
              pcVar12 = s__BUILDDISPENSER_1007a50c;
              pbVar3 = param_2;
              do {
                bVar1 = *pbVar3;
                bVar14 = bVar1 < (byte)*pcVar12;
                if (bVar1 != *pcVar12) {
LAB_1003be6a:
                  iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_1003be6f;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar14 = bVar1 < (byte)pcVar12[1];
                if (bVar1 != pcVar12[1]) goto LAB_1003be6a;
                pbVar3 = pbVar3 + 2;
                pcVar12 = pcVar12 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_1003be6f:
              if (iVar4 == 0) {
                ExceptionList = &local_c;
                local_21c = operator_new(0x134);
                local_4 = 0x18;
                if (local_21c == (Button *)0x0) {
                  local_214 = (Button *)0x0;
                }
                else {
                  lVar15 = __ftol();
                  lVar16 = __ftol();
                  lVar17 = __ftol();
                  FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0);
                  *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                  *(undefined4 *)(local_21c + 300) = 8;
                  *(undefined4 *)(local_21c + 0x130) = 0;
                  local_214 = local_21c;
                }
                local_4 = 0xffffffff;
                puVar10 = operator_new(0x108);
                if (puVar10 != (undefined4 *)0x0) {
                  *puVar10 = &PTR_FUN_10060a40;
                  pcVar12 = s_build_1_1007a504;
                  goto LAB_1003c556;
                }
              }
              else {
                pcVar12 = s__ROTATESENTRY180_1007a4f0;
                pbVar3 = param_2;
                do {
                  bVar1 = *pbVar3;
                  bVar14 = bVar1 < (byte)*pcVar12;
                  if (bVar1 != *pcVar12) {
LAB_1003bf70:
                    iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                    goto LAB_1003bf75;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar14 = bVar1 < (byte)pcVar12[1];
                  if (bVar1 != pcVar12[1]) goto LAB_1003bf70;
                  pbVar3 = pbVar3 + 2;
                  pcVar12 = pcVar12 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_1003bf75:
                if (iVar4 == 0) {
                  ExceptionList = &local_c;
                  local_21c = operator_new(0x134);
                  local_4 = 0x19;
                  if (local_21c == (Button *)0x0) {
                    local_214 = (Button *)0x0;
                  }
                  else {
                    lVar15 = __ftol();
                    lVar16 = __ftol();
                    lVar17 = __ftol();
                    FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0
                                );
                    *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                    *(undefined4 *)(local_21c + 300) = 1;
                    *(undefined4 *)(local_21c + 0x130) = 1;
                    local_214 = local_21c;
                  }
                  local_4 = 0xffffffff;
                  puVar10 = operator_new(0x108);
                  if (puVar10 != (undefined4 *)0x0) {
                    *puVar10 = &PTR_FUN_10060a40;
                    pcVar12 = s_rotatesentry180_1007a4e0;
                    goto LAB_1003c556;
                  }
                }
                else {
                  pcVar12 = s__ROTATESENTRY_1007a4d0;
                  pbVar3 = param_2;
                  do {
                    bVar1 = *pbVar3;
                    bVar14 = bVar1 < (byte)*pcVar12;
                    if (bVar1 != *pcVar12) {
LAB_1003c073:
                      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                      goto LAB_1003c078;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar14 = bVar1 < (byte)pcVar12[1];
                    if (bVar1 != pcVar12[1]) goto LAB_1003c073;
                    pbVar3 = pbVar3 + 2;
                    pcVar12 = pcVar12 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_1003c078:
                  if (iVar4 == 0) {
                    ExceptionList = &local_c;
                    local_21c = operator_new(0x134);
                    local_4 = 0x1a;
                    if (local_21c == (Button *)0x0) {
                      local_214 = (Button *)0x0;
                    }
                    else {
                      lVar15 = __ftol();
                      lVar16 = __ftol();
                      lVar17 = __ftol();
                      FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                   (Button)0x0);
                      *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                      *(undefined4 *)(local_21c + 300) = 1;
                      *(undefined4 *)(local_21c + 0x130) = 1;
                      local_214 = local_21c;
                    }
                    local_4 = 0xffffffff;
                    puVar10 = operator_new(0x108);
                    if (puVar10 != (undefined4 *)0x0) {
                      *puVar10 = &PTR_FUN_10060a40;
                      pcVar12 = s_rotatesentry_1007a4c0;
                      goto LAB_1003c556;
                    }
                  }
                  else {
                    pcVar12 = s__DISMANTLEDISPENSER_1007a4ac;
                    pbVar3 = param_2;
                    do {
                      bVar1 = *pbVar3;
                      bVar14 = bVar1 < (byte)*pcVar12;
                      if (bVar1 != *pcVar12) {
LAB_1003c176:
                        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                        goto LAB_1003c17b;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar3[1];
                      bVar14 = bVar1 < (byte)pcVar12[1];
                      if (bVar1 != pcVar12[1]) goto LAB_1003c176;
                      pbVar3 = pbVar3 + 2;
                      pcVar12 = pcVar12 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_1003c17b:
                    if (iVar4 == 0) {
                      ExceptionList = &local_c;
                      local_21c = operator_new(0x134);
                      local_4 = 0x1b;
                      if (local_21c == (Button *)0x0) {
                        local_214 = (Button *)0x0;
                      }
                      else {
                        lVar15 = __ftol();
                        lVar16 = __ftol();
                        lVar17 = __ftol();
                        FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                     (Button)0x0);
                        *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                        *(undefined4 *)(local_21c + 300) = 1;
                        *(undefined4 *)(local_21c + 0x130) = 0;
                        local_214 = local_21c;
                      }
                      local_4 = 0xffffffff;
                      puVar10 = operator_new(0x108);
                      if (puVar10 != (undefined4 *)0x0) {
                        *puVar10 = &PTR_FUN_10060a40;
                        pcVar12 = s_dismantle_1_1007a4a0;
                        goto LAB_1003c556;
                      }
                    }
                    else {
                      pcVar12 = s__DISMANTLESENTRY_1007a48c;
                      pbVar3 = param_2;
                      do {
                        bVar1 = *pbVar3;
                        bVar14 = bVar1 < (byte)*pcVar12;
                        if (bVar1 != *pcVar12) {
LAB_1003c27c:
                          iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                          goto LAB_1003c281;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar3[1];
                        bVar14 = bVar1 < (byte)pcVar12[1];
                        if (bVar1 != pcVar12[1]) goto LAB_1003c27c;
                        pbVar3 = pbVar3 + 2;
                        pcVar12 = pcVar12 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_1003c281:
                      if (iVar4 == 0) {
                        ExceptionList = &local_c;
                        local_21c = operator_new(0x134);
                        local_4 = 0x1c;
                        if (local_21c == (Button *)0x0) {
                          local_214 = (Button *)0x0;
                        }
                        else {
                          lVar15 = __ftol();
                          lVar16 = __ftol();
                          lVar17 = __ftol();
                          FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                       (Button)0x0);
                          *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                          *(undefined4 *)(local_21c + 300) = 1;
                          *(undefined4 *)(local_21c + 0x130) = 1;
                          local_214 = local_21c;
                        }
                        local_4 = 0xffffffff;
                        puVar10 = operator_new(0x108);
                        if (puVar10 != (undefined4 *)0x0) {
                          *puVar10 = &PTR_FUN_10060a40;
                          pcVar12 = s_dismantle_2_1007a480;
                          goto LAB_1003c556;
                        }
                      }
                      else {
                        pcVar12 = s__DETONATEDISPENSER_1007a46c;
                        pbVar3 = param_2;
                        do {
                          bVar1 = *pbVar3;
                          bVar14 = bVar1 < (byte)*pcVar12;
                          if (bVar1 != *pcVar12) {
LAB_1003c37f:
                            iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                            goto LAB_1003c384;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar3[1];
                          bVar14 = bVar1 < (byte)pcVar12[1];
                          if (bVar1 != pcVar12[1]) goto LAB_1003c37f;
                          pbVar3 = pbVar3 + 2;
                          pcVar12 = pcVar12 + 2;
                        } while (bVar1 != 0);
                        iVar4 = 0;
LAB_1003c384:
                        if (iVar4 == 0) {
                          ExceptionList = &local_c;
                          local_21c = operator_new(0x134);
                          local_4 = 0x1d;
                          if (local_21c == (Button *)0x0) {
                            local_214 = (Button *)0x0;
                          }
                          else {
                            lVar15 = __ftol();
                            lVar16 = __ftol();
                            lVar17 = __ftol();
                            FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                         (Button)0x0);
                            *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                            *(undefined4 *)(local_21c + 300) = 1;
                            *(undefined4 *)(local_21c + 0x130) = 0;
                            local_214 = local_21c;
                          }
                          local_4 = 0xffffffff;
                          puVar10 = operator_new(0x108);
                          if (puVar10 != (undefined4 *)0x0) {
                            *puVar10 = &PTR_FUN_10060a40;
                            pcVar12 = s_detdispenser_1007a45c;
                            goto LAB_1003c556;
                          }
                        }
                        else {
                          pcVar12 = s__DETONATESENTRY_1007a44c;
                          pbVar3 = param_2;
                          do {
                            bVar1 = *pbVar3;
                            bVar14 = bVar1 < (byte)*pcVar12;
                            if (bVar1 != *pcVar12) {
LAB_1003c485:
                              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                              goto LAB_1003c48a;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar3[1];
                            bVar14 = bVar1 < (byte)pcVar12[1];
                            if (bVar1 != pcVar12[1]) goto LAB_1003c485;
                            pbVar3 = pbVar3 + 2;
                            pcVar12 = pcVar12 + 2;
                          } while (bVar1 != 0);
                          iVar4 = 0;
LAB_1003c48a:
                          if (iVar4 == 0) {
                            ExceptionList = &local_c;
                            local_21c = operator_new(0x134);
                            local_4 = 0x1e;
                            if (local_21c == (Button *)0x0) {
                              local_214 = (Button *)0x0;
                            }
                            else {
                              lVar15 = __ftol();
                              lVar16 = __ftol();
                              lVar17 = __ftol();
                              FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                           (Button)0x0);
                              *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                              *(undefined4 *)(local_21c + 300) = 1;
                              *(undefined4 *)(local_21c + 0x130) = 1;
                              local_214 = local_21c;
                            }
                            local_4 = 0xffffffff;
                            puVar10 = operator_new(0x108);
                            if (puVar10 != (undefined4 *)0x0) {
                              *puVar10 = &PTR_FUN_10060a40;
                              pcVar12 = s_detsentry_1007a440;
                              goto LAB_1003c556;
                            }
                          }
                          else {
                            pcVar12 = s__BUILDSTOP_1007a434;
                            do {
                              bVar1 = *param_2;
                              bVar14 = bVar1 < (byte)*pcVar12;
                              if (bVar1 != *pcVar12) {
LAB_1003c5a5:
                                iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                                goto LAB_1003c5aa;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = param_2[1];
                              bVar14 = bVar1 < (byte)pcVar12[1];
                              if (bVar1 != pcVar12[1]) goto LAB_1003c5a5;
                              param_2 = param_2 + 2;
                              pcVar12 = pcVar12 + 2;
                            } while (bVar1 != 0);
                            iVar4 = 0;
LAB_1003c5aa:
                            if (iVar4 != 0) {
                              return (Button *)0x0;
                            }
                            ExceptionList = &local_c;
                            local_21c = operator_new(0x134);
                            local_4 = 0x1f;
                            if (local_21c == (Button *)0x0) {
                              local_214 = (Button *)0x0;
                            }
                            else {
                              lVar15 = __ftol();
                              lVar16 = __ftol();
                              lVar17 = __ftol();
                              FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,
                                           (Button)0x0);
                              *(undefined ***)local_21c = &PTR_setPos_10063c2c;
                              *(undefined4 *)(local_21c + 300) = 2;
                              *(undefined4 *)(local_21c + 0x130) = 0;
                              local_214 = local_21c;
                            }
                            local_4 = 0xffffffff;
                            puVar10 = operator_new(0x108);
                            if (puVar10 != (undefined4 *)0x0) {
                              *puVar10 = &PTR_FUN_10060a40;
                              pcVar12 = s_build_1007a42c;
                              goto LAB_1003c556;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_1003c676:
          puVar10 = (undefined4 *)0x0;
        }
        (**(code **)(*(int *)local_214 + 0x240))(puVar10);
        puVar10 = operator_new(0xc);
        if (puVar10 != (undefined4 *)0x0) {
          uVar2 = *(undefined4 *)(local_21c + 0x208);
          *puVar10 = &PTR_FUN_10063050;
          puVar10[1] = uVar2;
          puVar10[2] = local_214;
          goto LAB_1003c6ab;
        }
        goto LAB_1003c6a9;
      }
      ExceptionList = &local_c;
      local_21c = operator_new(0x130);
      local_4 = 8;
      if (local_21c == (Button *)0x0) {
        local_214 = (Button *)0x0;
      }
      else {
        lVar15 = __ftol();
        lVar16 = __ftol();
        lVar17 = __ftol();
        FUN_10033020(local_21c,param_1,0,(int)lVar17,(int)lVar16,(int)lVar15,(Button)0x0);
        *(undefined ***)local_21c = &PTR_setPos_100607d0;
        *(undefined4 *)(local_21c + 300) = 0;
        local_214 = local_21c;
      }
      local_4 = 0xffffffff;
      puVar10 = operator_new(8);
      if (puVar10 == (undefined4 *)0x0) goto LAB_1003afd5;
      *puVar10 = &PTR_FUN_100605a0;
      puVar10[1] = 5;
    }
    (**(code **)(*(int *)local_214 + 0x240))(puVar10);
    puVar10 = operator_new(0xc);
    if (puVar10 != (undefined4 *)0x0) {
      uVar2 = *(undefined4 *)(local_21c + 0x208);
      *puVar10 = &PTR_FUN_10063050;
      puVar10[1] = uVar2;
      puVar10[2] = local_214;
      goto LAB_1003c6ab;
    }
  }
LAB_1003c6a9:
  puVar10 = (undefined4 *)0x0;
LAB_1003c6ab:
  (**(code **)(*(int *)local_214 + 0x70))(puVar10);
  ExceptionList = local_c;
  return local_214;
}

