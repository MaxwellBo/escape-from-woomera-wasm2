
undefined4 __fastcall FUN_1001aa20(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  (*DAT_100a5038)(s_Flashlight_10078540,FUN_1001aa00);
  (*DAT_100a5038)(s_FlashBat_10078534,FUN_1001a9e0);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  FUN_1001c530(&DAT_100a3a40,param_1);
  return 1;
}

