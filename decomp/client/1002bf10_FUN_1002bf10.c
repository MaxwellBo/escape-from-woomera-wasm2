
undefined4 __fastcall FUN_1002bf10(int *param_1)

{
  FUN_1001c530(&DAT_100a3a40,(int)param_1);
  (*DAT_100a5038)(s_SayText_10079a64,FUN_1002bef0);
  (**(code **)(*param_1 + 0x18))();
  (*DAT_100a5028)(s__hud_saytext_time_10079a4f + 1,&DAT_10077e90,0);
  param_1[4] = param_1[4] | 2;
  return 1;
}

