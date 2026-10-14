
void FUN_100c2640(int param_1)

{
  DAT_10132468[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x100c2654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_10132468 + 0x14))();
  return;
}

