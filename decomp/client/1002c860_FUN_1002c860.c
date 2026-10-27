
undefined4 __fastcall FUN_1002c860(int *param_1)

{
  FUN_1001c530(&DAT_100a3a40,(int)param_1);
  (*DAT_100a5038)(s_StatusText_10079ac4,FUN_1002c820);
  (*DAT_100a5038)(s_StatusValue_10079ab8,FUN_1002c840);
  (**(code **)(*param_1 + 0x14))();
  (*DAT_100a5028)(s_hud_centerid_10079aa8,&DAT_100779f0,1);
  return 1;
}

