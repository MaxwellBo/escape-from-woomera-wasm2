
void __fastcall FUN_10029420(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
                    /* WARNING: Could not recover jumptable at 0x1002942f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))();
  return;
}

