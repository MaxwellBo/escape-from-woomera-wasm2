
void __fastcall FUN_10024fa0(int *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
                    /* WARNING: Could not recover jumptable at 0x10024faa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}

