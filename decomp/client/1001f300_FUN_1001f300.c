
void __fastcall FUN_1001f300(int param_1)

{
  *(undefined4 *)(param_1 + 0x404) = 1;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0;
                    /* WARNING: Could not recover jumptable at 0x1001f31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_100a5148 + 0x10))();
  return;
}

