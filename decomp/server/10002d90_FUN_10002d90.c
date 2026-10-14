
void __fastcall FUN_10002d90(int param_1)

{
  if (*(code **)(param_1 + 0x74) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10002d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x74))();
    return;
  }
  return;
}

