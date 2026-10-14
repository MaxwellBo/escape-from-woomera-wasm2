
void __fastcall FUN_1004bdf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xb8);
  if (iVar1 == 0) {
    pcVar3 = s_models_hgrunt_mdl_1010ea24;
  }
  else {
    pcVar3 = (char *)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  (*DAT_10121e08)(pcVar3);
  (*DAT_10121e0c)(s_weapons_dryfire1_wav_1010e9b4);
  (*DAT_10121e0c)(s_hgrunt_gr_mgun1_wav_1010e9e0);
  (*DAT_10121e0c)(s_hgrunt_gr_mgun2_wav_1010e9cc);
  (*DAT_10121e0c)(s_hgrunt_gr_die1_wav_1010eadc);
  (*DAT_10121e0c)(s_hgrunt_gr_die2_wav_1010eac8);
  (*DAT_10121e0c)(s_hgrunt_gr_die3_wav_1010eab4);
  (*DAT_10121e0c)(s_hgrunt_gr_pain1_wav_1010eaa0);
  (*DAT_10121e0c)(s_hgrunt_gr_pain2_wav_1010ea8c);
  (*DAT_10121e0c)(s_hgrunt_gr_pain3_wav_1010ea78);
  (*DAT_10121e0c)(s_hgrunt_gr_pain4_wav_1010ea64);
  (*DAT_10121e0c)(s_hgrunt_gr_pain5_wav_1010ea50);
  (*DAT_10121e0c)(s_hgrunt_gr_reload1_wav_1010ea0c);
  (*DAT_10121e0c)(s_weapons_glauncher_wav_1010e9f4);
  (*DAT_10121e0c)(s_weapons_sbarrel1_wav_1010e99c);
  (*DAT_10121e0c)(s_zombie_claw_miss2_wav_10101910);
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x368) = 100;
  }
  else {
    iVar1 = (*DAT_10121f70)(0,7);
    *(int *)(param_1 + 0x368) = iVar1 + 0x6d;
  }
  uVar2 = (*DAT_10121e08)(s_models_shell_mdl_1010dc34);
  *(undefined4 *)(param_1 + 0x36c) = uVar2;
  uVar2 = (*DAT_10121e08)(s_models_shotgunshell_mdl_1010ea38);
  *(undefined4 *)(param_1 + 0x370) = uVar2;
  return;
}

