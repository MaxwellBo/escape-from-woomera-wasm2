
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b5d20(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  
  DAT_10122060 = param_1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  DAT_10124854 = 0;
  (*DAT_10121ef8)(s_sv_gravity_1010c524,&DAT_1011c034);
  (*DAT_10121ef8)(s_sv_stepsize_1011c024,&DAT_1011c030);
  (*DAT_10121ef8)(s_room_type_1011c018,&DAT_101083f8);
  if (DAT_10121db8 != (undefined4 *)0x0) {
    FUN_100c8ce6((undefined *)DAT_10121db8);
  }
  DAT_10121db8 = FUN_1003dd90();
  iVar1 = (*DAT_10121e5c)();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x80;
  }
  iVar3 = *(int *)(iVar1 + 0x208);
  if ((iVar3 == 0) || (piVar2 = *(int **)(iVar3 + 0x7c), piVar2 == (int *)0x0)) {
    piVar2 = (int *)(*DAT_10121f04)(iVar3,0x8c8);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = (int)&PTR_FUN_100f1b28;
    }
    piVar2[1] = iVar1;
  }
  DAT_10131058 = piVar2;
  (**(code **)(*piVar2 + 0x28))();
  if (DAT_10131058 == (int *)0x0) {
    (*DAT_10121efc)(1,s___COULD_NOT_CREATE_SOUNDENT___1011bff8);
  }
  FUN_100b60d0();
  FUN_10094750();
  FUN_10094da0();
  FUN_100b2f80();
  FUN_1001c030();
  (*DAT_10121e0c)(s_common_null_wav_10103c74);
  (*DAT_10121e0c)(s_items_suitchargeok1_wav_1010d4a8);
  (*DAT_10121e0c)(s_items_gunpickup2_wav_1010fab8);
  (*DAT_10121e0c)(s_common_bodydrop3_wav_101113f4);
  (*DAT_10121e0c)(s_common_bodydrop4_wav_101113dc);
  (*DAT_10121eec)(s_sv_language_1011bfec);
  lVar6 = __ftol();
  DAT_10121de8 = (int)lVar6;
  if (DAT_10121de8 == 1) {
    (*DAT_10121e08)(s_models_germangibs_mdl_10105fc8);
  }
  else {
    (*DAT_10121e08)(s_models_hgibs_mdl_10105fb4);
    (*DAT_10121e08)(s_models_agibs_mdl_10105fe0);
  }
  (*DAT_10121e0c)(s_weapons_ric1_wav_1011bfd8);
  (*DAT_10121e0c)(s_weapons_ric2_wav_1011bfc4);
  (*DAT_10121e0c)(s_weapons_ric3_wav_1011bfb0);
  (*DAT_10121e0c)(s_weapons_ric4_wav_1010cf50);
  (*DAT_10121e0c)(s_weapons_ric5_wav_1010cf3c);
  (*DAT_10121e08)(s_sprites_null_spr_10108000);
  iVar1 = 0;
  do {
    iVar3 = FUN_100570c0(iVar1);
    (*DAT_10121eb4)(iVar1,iVar3 + *(int *)(DAT_10122044 + 0x98));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xe);
  (*DAT_10121eb4)(0x3f,&DAT_10103c18);
  ppuVar5 = (undefined **)&DAT_1011bb7c;
  do {
    puVar4 = (undefined *)(*DAT_10121eb8)(ppuVar5[-1]);
    *ppuVar5 = puVar4;
    ppuVar5 = ppuVar5 + 2;
  } while (ppuVar5 < &PTR_DAT_1011bccc);
  FUN_1006b5b0(&DAT_10122780);
  iVar1 = FUN_1006f380((char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc)));
  if (iVar1 == 0) {
    FUN_1006b640();
  }
  else {
    iVar1 = FUN_1006ec50(&DAT_10122780,
                         (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(DAT_10122044 + 0xc)));
    if (iVar1 == 0) {
      (*DAT_10121efc)(1,s__Error_opening__NOD_file_1011bf94);
      FUN_1006b640();
    }
    else {
      (*DAT_10121efc)(1,s__Graph_Loaded__1011bf80);
    }
  }
  fVar7 = *(float *)(*(int *)(param_1 + 4) + 0x1f8);
  if (fVar7 <= _DAT_100dd5f8) {
    fVar7 = 4096.0;
  }
  (*DAT_10121ef4)(s_sv_zmax_1011bf78,fVar7);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1d0);
  if (iVar1 != 0) {
    (*DAT_10121efc)(2,s_Chapter_title___s_1011bf64,*(int *)(DAT_10122044 + 0x98) + iVar1);
    piVar2 = (int *)FUN_1001a1f0(0x1011bf58,&DAT_10121dd8,&DAT_10121dd8,0);
    if (piVar2 != (int *)0x0) {
      piVar2[0x1d] = (int)CBaseEntity::SUB_CallUseToggle;
      *(undefined4 *)(piVar2[1] + 0x1d4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0);
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1d0) = 0;
      (**(code **)(*piVar2 + 8))(0x3e99999a);
      *(undefined4 *)(piVar2[1] + 0x1a0) = 1;
    }
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f800000;
  }
  (*DAT_10121ef4)(s_v_dark_1011bf50,uVar8);
  DAT_10121dc8 = ((int)*(char *)(*(int *)(param_1 + 4) + 0x1a0) & 2U) >> 1;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 4) == 0) {
    (*DAT_10121ef4)(s_mp_defaultteam_1010c3e4,0);
    return;
  }
  (*DAT_10121ef4)(s_mp_defaultteam_1010c3e4,0x3f800000);
  return;
}

