
undefined4 __fastcall FUN_100187e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (*DAT_100a5038)(s_Battery_10077ff0,FUN_100187c0);
  FUN_1001c530(&DAT_100a3a40,param_1);
  return 1;
}

