
undefined4 __fastcall FUN_100166d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1001c530(&DAT_100a3a40,(int)param_1);
  (*DAT_100a5038)(s_CurWeapon_10077f48,FUN_10016520);
  (*DAT_100a5038)(s_WeaponList_10077f3c,FUN_10016540);
  (*DAT_100a5038)(s_AmmoPickup_10077f30,FUN_10016580);
  (*DAT_100a5038)(s_WeapPickup_10077f24,FUN_100165a0);
  (*DAT_100a5038)(s_ItemPickup_10077f18,FUN_100165e0);
  (*DAT_100a5038)(s_HideWeapon_10077f0c,FUN_100165c0);
  (*DAT_100a5038)(s_AmmoX_10077f04,FUN_10016560);
  (*DAT_100a5034)(s_slot1_10077efc,FUN_10016600);
  (*DAT_100a5034)(s_slot2_10077ef4,FUN_10016610);
  (*DAT_100a5034)(s_slot3_10077eec,FUN_10016620);
  (*DAT_100a5034)(s_slot4_10077ee4,FUN_10016630);
  (*DAT_100a5034)(s_slot5_10077edc,FUN_10016640);
  (*DAT_100a5034)(s_slot6_10077ed4,&LAB_10016650);
  (*DAT_100a5034)(s_slot7_10077ecc,&LAB_10016660);
  (*DAT_100a5034)(s_slot8_10077ec4,&LAB_10016670);
  (*DAT_100a5034)(s_slot9_10077ebc,&LAB_10016680);
  (*DAT_100a5034)(s_slot10_10077eb4,&LAB_10016690);
  (*DAT_100a5034)(s_cancelselect_10077ea4,&LAB_100166a0);
  (*DAT_100a5034)(s_invnext_10077e9c,&LAB_100166b0);
  (*DAT_100a5034)(s_invprev_10077e94,&LAB_100166c0);
  (**(code **)(*param_1 + 0x14))(param_1);
  (*DAT_100a5028)(s_hud_drawhistory_time_10077e78,&DAT_10077e90,0);
  (*DAT_100a5028)(s_hud_fastswitch_10077e68,&DAT_100779f0,1);
  param_1[4] = param_1[4] | 1;
  puVar2 = &DAT_100a0ea8;
  for (iVar1 = 0xa40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_100a3930 = 0;
  puVar2 = &DAT_100a37a8;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100a38b0;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_100a3978;
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

