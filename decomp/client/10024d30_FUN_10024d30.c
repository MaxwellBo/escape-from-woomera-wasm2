
void FUN_10024d30(void)

{
  DAT_100a9a10 = (*DAT_100a5028)(s_m_filter_1007954c,&DAT_100779f0,1);
  DAT_100a9ac4 = (*DAT_100a5028)(s_sensitivity_1007953c,&DAT_10079548,1);
  DAT_100a99e8 = (*DAT_100a5028)(s_joystick_100793e0,&DAT_100779f0,1);
  DAT_100a99f8 = (*DAT_100a5028)(s_joyname_10079534,s_joystick_100793e0,0);
  DAT_100a9a50 = (*DAT_100a5028)(s_joyadvanced_10079528,&DAT_100779f0,0);
  DAT_100a9a20 = (*DAT_100a5028)(s_joyadvaxisx_1007951c,&DAT_100779f0,0);
  DAT_100a9a1c = (*DAT_100a5028)(s_joyadvaxisy_10079510,&DAT_100779f0,0);
  DAT_100a9a18 = (*DAT_100a5028)(s_joyadvaxisz_10079504,&DAT_100779f0,0);
  DAT_100a9a08 = (*DAT_100a5028)(s_joyadvaxisr_100794f8,&DAT_100779f0,0);
  DAT_100a9a14 = (*DAT_100a5028)(s_joyadvaxisu_100794ec,&DAT_100779f0,0);
  DAT_100a9a0c = (*DAT_100a5028)(s_joyadvaxisv_100794e0,&DAT_100779f0,0);
  DAT_100a9a4c = (*DAT_100a5028)(s_joyforwardthreshold_100794c4,&DAT_100794d8,0);
  DAT_100a9a6c = (*DAT_100a5028)(s_joysidethreshold_100794b0,&DAT_100794d8,0);
  DAT_100a9aa4 = (*DAT_100a5028)(s_joypitchthreshold_1007949c,&DAT_100794d8,0);
  DAT_100a9a58 = (*DAT_100a5028)(s_joyyawthreshold_1007948c,&DAT_100794d8,0);
  DAT_100a9a54 = (*DAT_100a5028)(s_joyforwardsensitivity_1007946c,&DAT_10079484,0);
  DAT_100a9a44 = (*DAT_100a5028)(s_joysidesensitivity_10079458,&DAT_10079484,0);
  DAT_100a9ac0 = (*DAT_100a5028)(s_joypitchsensitivity_10079440,&DAT_10079454,0);
  DAT_100a9a48 = (*DAT_100a5028)(s_joyyawsensitivity_1007942c,&DAT_10079484,0);
  DAT_100a9a28 = (*DAT_100a5028)(s_joywwhack1_10079420,&DAT_10078e14,0);
  DAT_100a9a24 = (*DAT_100a5028)(s_joywwhack2_10079414,&DAT_10078e14,0);
  (*DAT_100a5034)(s_force_centerview_10079400,FUN_10023df0);
  (*DAT_100a5034)(s_joyadvancedupdate_100793ec,FUN_10024500);
  FUN_10023ea0();
  FUN_10024360();
  return;
}

