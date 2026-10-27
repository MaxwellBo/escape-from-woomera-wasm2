
void __fastcall FUN_10013390(int param_1)

{
  if (*(char *)(param_1 + 0x177d8) == '\0') {
    *(undefined1 *)(param_1 + 0x177d8) = 1;
                    /* WARNING: Could not recover jumptable at 0x100133a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
    return;
  }
  return;
}

