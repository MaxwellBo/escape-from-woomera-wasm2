
void __fastcall FUN_1007fb80(int *param_1)

{
  param_1[0x13e] = -1;
  param_1[0x13f] = -1;
  param_1[0x135] = param_1[0x135] | 0xc0;
  param_1[0x136] = 0;
  param_1[0xd7] = 0;
                    /* WARNING: Could not recover jumptable at 0x1007fbad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x23c))();
  return;
}

