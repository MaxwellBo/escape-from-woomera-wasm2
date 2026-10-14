
undefined4 __fastcall FUN_10017f50(int *param_1)

{
  (*DAT_100a5038)(s_SecAmmoVal_10077fe0,FUN_10017f10);
  (*DAT_100a5038)(s_SecAmmoIcon_10077fd4,FUN_10017f30);
  FUN_1001c530(&DAT_100a3a40,(int)param_1);
  param_1[5] = 0;
  param_1[6] = -1;
  param_1[7] = -1;
  param_1[8] = -1;
  param_1[9] = -1;
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

