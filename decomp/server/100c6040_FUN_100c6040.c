
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100c6040(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  (**(code **)(*param_1 + 0x2c))();
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  *(undefined4 *)(param_1[1] + 0x10c) = 2;
  *(undefined4 *)(param_1[1] + 0x16c) = 0x3f800000;
  *(uint *)(param_1[1] + 0x1a4) = *(uint *)(param_1[1] + 0x1a4) | 0x20;
  *(undefined4 *)(param_1[1] + 0x160) = 0x42a00000;
  *(undefined4 *)(param_1[1] + 0x11c) = 0x3f800000;
  puVar3 = (uint *)(*(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26]);
  bVar1 = FUN_100c8160(puVar3,s_Shala_1011d0d4);
  if (bVar1) {
    pcVar5 = s_models_detaineeFemaleT0_mdl_1011cfb0;
    uVar4 = *(undefined4 *)(param_1[1] + 0x208);
    goto LAB_100c622d;
  }
  bVar1 = FUN_100c8160(puVar3,&DAT_1011cba4);
  if (bVar1) {
    pcVar5 = s_models_detaineeMaleT0_mdl_1011d090;
  }
  else {
    bVar1 = FUN_100c8160(puVar3,s_Hassan_1011d0cc);
    if (bVar1) {
      pcVar5 = s_models_detaineeMaleT1_mdl_1011d074;
      uVar4 = *(undefined4 *)(param_1[1] + 0x208);
      goto LAB_100c622d;
    }
    bVar1 = FUN_100c8160(puVar3,s_Laleh_1011d0c4);
    if (bVar1) {
      pcVar5 = s_models_detaineeFemaleT1_mdl_1011cf94;
      uVar4 = *(undefined4 *)(param_1[1] + 0x208);
      goto LAB_100c622d;
    }
    bVar1 = FUN_100c8160(puVar3,s_Elika_1011d0bc);
    if (bVar1) {
      pcVar5 = s_models_detaineeFemaleT2_mdl_1011cf78;
    }
    else {
      bVar1 = FUN_100c8160(puVar3,s_Mouhtaz_1011ca18);
      if (bVar1) {
        pcVar5 = s_models_detaineeMaleT2_mdl_1011d058;
        uVar4 = *(undefined4 *)(param_1[1] + 0x208);
        goto LAB_100c622d;
      }
      bVar1 = FUN_100c8160(puVar3,s_Fashid_1011cb40);
      if (bVar1) {
        pcVar5 = s_models_detaineeMaleT3_mdl_1011d03c;
        uVar4 = *(undefined4 *)(param_1[1] + 0x208);
        goto LAB_100c622d;
      }
      bVar1 = FUN_100c8160(puVar3,s_Nasir_1011ca94);
      if (bVar1) {
        pcVar5 = s_models_detaineeMaleT4_mdl_1011d020;
      }
      else {
        bVar1 = FUN_100c8160(puVar3,s_Gholan_1011cd94);
        if (bVar1) {
          pcVar5 = s_models_detaineeMaleT5_mdl_1011d004;
          uVar4 = *(undefined4 *)(param_1[1] + 0x208);
          goto LAB_100c622d;
        }
        FUN_100c80d0();
        DAT_10132ccc = DAT_10132ccc + 1;
        uVar2 = DAT_10132ccc & 0x80000001;
        bVar1 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar1 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (!bVar1) {
          pcVar5 = s_models_detaineeMaleT6_mdl_1011cfe8;
          uVar4 = *(undefined4 *)(param_1[1] + 0x208);
          goto LAB_100c622d;
        }
        pcVar5 = s_models_detaineeMaleT7_mdl_1011cfcc;
      }
    }
  }
  uVar4 = *(undefined4 *)(param_1[1] + 0x208);
LAB_100c622d:
  (*DAT_10121e10)(uVar4,pcVar5);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x42900000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  (**(code **)(*param_1 + 0x1a8))(1);
  FUN_100085d0(param_1);
  param_1[0x1d] = (int)CRefugee::IdleThink;
  *(float *)(param_1[1] + 0x104) = *DAT_10122044 + _DAT_100dd618;
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  *(float *)(param_1[1] + 0x104) = *DAT_10122044 + _DAT_100f9398;
  *(undefined4 *)(param_1[1] + 0x138) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  return;
}

