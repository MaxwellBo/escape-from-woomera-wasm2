
void __cdecl FUN_100c7da0(uint *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uStack_18;
  char acStack_14 [4];
  char acStack_10 [4];
  char acStack_c [4];
  char acStack_8 [8];
  
  iVar4 = (**(code **)(*param_2 + 0xcc))();
  if (iVar4 != 0) {
    bVar1 = FUN_100c8160(param_1,s_efw_kitchen_door_1011d718);
    if (bVar1) {
      uVar5 = FUN_100c2f70(param_2,(byte *)s_weapon_efw_Pliers_101054a4);
      if ((char)uVar5 == '\0') {
        cVar2 = FUN_100c3430(s_OnKitchenRoster_1011d708);
        if (cVar2 == '\0') {
          FUN_100ba040((byte *)s_Kitchen_Guard_101031e0,s_Where_do_you_think_you_re_going__1011d618,
                       4);
          return;
        }
        uVar3 = FUN_100c5b80();
        if (CONCAT31(extraout_var,uVar3) == 0) {
          cVar2 = FUN_100c3430(s_HasEnteredTheKitchenForTheFirstT_1011d6e4);
          if (cVar2 == '\0') {
            FUN_100c3500(s_HasEnteredTheKitchenForTheFirstT_1011d6e4,1);
            FUN_100ba040((byte *)s_Kitchen_Guard_101031e0,
                         s_RAR_124__Go_in__you_re_on_the_ro_1011d6bc,4);
          }
          FUN_10098c10((uint *)s_efw_actual_kitchen_door_1011d6a4,param_2,param_3,1,0);
          return;
        }
        if (CONCAT31(extraout_var,uVar3) == 2) {
          cVar2 = FUN_100c3430(s_HasEnteredTheKitchenInChapterTwo_1011d680);
          if (cVar2 == '\0') {
            FUN_100c3500(s_HasEnteredTheKitchenInChapterTwo_1011d680,1);
            FUN_100ba040((byte *)s_Kitchen_Guard_101031e0,s_Back_again__OK__go_on_in__1011d664,4);
            FUN_10098c10((uint *)s_efw_actual_kitchen_door_1011d6a4,param_2,param_3,1,0);
            return;
          }
        }
      }
      else {
        iVar4 = (**(code **)(*param_2 + 0xcc))();
        if ((iVar4 != 0) && (param_2 != (int *)0x0)) {
          FUN_100c81d0((int)param_2,0x3c);
          return;
        }
      }
    }
    else {
      bVar1 = FUN_100c8160(param_1,s_efw_2ndcompound_entry_1011d600);
      if (bVar1) {
        cVar2 = FUN_100c3430(s_Player_sIDTagOnFence_1011c678);
        if (cVar2 == '\0') {
          cVar2 = FUN_100c3430(s_HeardCompoundGateGuardOnce_1011d5d0);
          if (cVar2 == '\0') {
            FUN_100ba040((byte *)s_efw_compound_gate_guard_1010318c,
                         s_Hold_it__To_enter_the_main_compo_1011d53c,4);
            FUN_100c3500(s_HeardCompoundGateGuardOnce_1011d5d0,1);
            return;
          }
          FUN_100ba040((byte *)s_efw_compound_gate_guard_1010318c,
                       s_No_tag_on_the_board__no_entry__L_1011d4f4,4);
          return;
        }
        acStack_10[0] = s_efw_compound_gate_1011d5ec[8];
        acStack_10[1] = s_efw_compound_gate_1011d5ec[9];
        acStack_10[2] = s_efw_compound_gate_1011d5ec[10];
        acStack_10[3] = s_efw_compound_gate_1011d5ec[0xb];
        uStack_18._0_1_ = s_efw_compound_gate_1011d5ec[0];
        uStack_18._1_1_ = s_efw_compound_gate_1011d5ec[1];
        uStack_18._2_1_ = s_efw_compound_gate_1011d5ec[2];
        uStack_18._3_1_ = s_efw_compound_gate_1011d5ec[3];
        acStack_14[0] = s_efw_compound_gate_1011d5ec[4];
        acStack_14[1] = s_efw_compound_gate_1011d5ec[5];
        acStack_14[2] = s_efw_compound_gate_1011d5ec[6];
        acStack_14[3] = s_efw_compound_gate_1011d5ec[7];
        acStack_c[0] = s_efw_compound_gate_1011d5ec[0xc];
        acStack_c[1] = s_efw_compound_gate_1011d5ec[0xd];
        acStack_c[2] = s_efw_compound_gate_1011d5ec[0xe];
        acStack_c[3] = s_efw_compound_gate_1011d5ec[0xf];
        acStack_8[0] = s_efw_compound_gate_1011d5ec[0x10];
        acStack_8[1] = s_efw_compound_gate_1011d5ec[0x11];
        piVar6 = (int *)FUN_100af060(0,(byte *)&uStack_18,0);
        iVar4 = (**(code **)(*piVar6 + 0x7c))();
        if (iVar4 != 0) {
          FUN_10098c10(&uStack_18,param_2,param_3,1,0);
          return;
        }
      }
      else {
        bVar1 = FUN_100c8160(param_1,s_efw_1stcompound_entry_1011d4dc);
        if (bVar1) {
          cVar2 = FUN_100c3430(s_Player_sIDTagOnFence_1011c678);
          if (cVar2 == '\0') {
            puVar7 = (uint *)s_efw_1stcompound_gate_1011d4c4;
            puVar8 = &uStack_18;
            for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *(char *)puVar8 = (char)*puVar7;
            FUN_10098c10(&uStack_18,param_2,param_3,1,0);
            return;
          }
          FUN_100ba040((byte *)s_efw_compound_gate_guard_1010318c,
                       s_The_gate_doesn_t_open_til_you_co_1011d480,4);
          return;
        }
        bVar1 = FUN_100c8160(param_1,s_efw_approach_bin_1011d46c);
        if (bVar1) {
          iVar4 = (**(code **)(*param_2 + 0xcc))();
          if ((iVar4 != 0) && (param_2 != (int *)0x0)) {
            uVar5 = FUN_100c2f70(param_2,(byte *)s_weapon_efw_Pliers_101054a4);
            if ((char)uVar5 == '\0') {
              FUN_1007f800(param_2,0x101054a4);
              FUN_100c81d0((int)param_2,0x45);
              FUN_100c4d70(15.0);
            }
          }
        }
      }
    }
  }
  return;
}

