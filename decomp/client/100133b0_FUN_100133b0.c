
void __fastcall FUN_100133b0(int param_1)

{
  *(undefined1 *)(param_1 + 0x177d8) = 0;
                    /* WARNING: Could not recover jumptable at 0x100133bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x17734) + 8))();
  return;
}

