
void FUN_10019310(int param_1)

{
  if ((param_1 != 0) && (*(int **)(param_1 + 0x7c) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10019321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x48))();
    return;
  }
  FUN_10019d90(param_1 + 0x80);
  return;
}

