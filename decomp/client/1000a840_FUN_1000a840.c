
void __fastcall FUN_1000a840(int param_1)

{
  if (*(int **)(param_1 + 0x528) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x528) + 300))();
    return;
  }
  return;
}

