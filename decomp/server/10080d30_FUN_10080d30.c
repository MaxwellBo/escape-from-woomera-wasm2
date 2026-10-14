
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10080d30(int param_1)

{
  if ((*(float *)(param_1 + 700) <= _DAT_100dd5f8) && (*(int **)(param_1 + 0x528) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10080d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x528) + 0x13c))();
    return;
  }
  return;
}

