
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d1d0(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  puVar3 = (uint *)(*(int *)(param_1[1] + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
  bVar2 = FUN_100c8160(puVar3,s_Kitchen_Guard_101031e0);
  if (!bVar2) {
    bVar2 = FUN_100c8160(puVar3,s_efw_electrician_101031bc);
    if (bVar2) {
      (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_tradesman_mdl_101031a4);
      goto LAB_1000d39b;
    }
    bVar2 = FUN_100c8160(puVar3,s_efw_compound_gate_guard_1010318c);
    if (bVar2) {
      (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
      goto LAB_1000d39b;
    }
    bVar2 = FUN_100c8160(puVar3,s_Mail_Officer_1010317c);
    if (!bVar2) {
      bVar2 = FUN_100c8160(puVar3,s_Roster_Officer_1010316c);
      if (bVar2) {
        (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
        goto LAB_1000d39b;
      }
      bVar2 = FUN_100c8160(puVar3,s_Patrol_Guard_2_1010315c);
      if (bVar2) {
        (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
        goto LAB_1000d39b;
      }
      bVar2 = FUN_100c8160(puVar3,s_Patrol_Guard_3_1010314c);
      if (!bVar2) {
        bVar2 = FUN_100c8160(puVar3,s_Patrolling_Guard_1_10103138);
        if (bVar2) {
          (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
          goto LAB_1000d39b;
        }
        bVar2 = FUN_100c8160(puVar3,s_Patrol_Guard_5_10103128);
        if (bVar2) {
          (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
          goto LAB_1000d39b;
        }
        bVar2 = FUN_100c8160(puVar3,s_Patrol_Guard_4_10103118);
        if (!bVar2) {
          pcVar4 = s_Model_not_known_for_name___s_101030f8;
          FUN_100c80d0();
          (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc,pcVar4,
                          puVar3);
          goto LAB_1000d39b;
        }
      }
    }
  }
  (*DAT_10121e10)(*(undefined4 *)(param_1[1] + 0x208),s_models_security_mdl_101031cc);
LAB_1000d39b:
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42900000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  param_1[0xb4] = 0xf7;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a60;
  }
  iVar1 = param_1[1];
  uStack_18 = 0;
  uStack_14 = 0;
  *(undefined4 *)(iVar1 + 0x174) = 0;
  uStack_10 = 0x42480000;
  *(undefined4 *)(iVar1 + 0x178) = 0;
  *(undefined4 *)(iVar1 + 0x17c) = 0x42480000;
  param_1[0x70] = -0x40cccccd;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1[1] + 0x114) = 0;
  param_1[0xe1] = 0;
  param_1[0xae] = 0x7c0;
  (**(code **)(*param_1 + 0x134))();
  param_1[0x1f] = (int)CTalkMonster::FollowerUse;
  return;
}

