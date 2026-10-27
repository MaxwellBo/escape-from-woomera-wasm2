
void FUN_100af940(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  (*DAT_10121ec0)(2,DAT_101248e0,0,0);
  (*DAT_10121ec8)(param_1);
  (*DAT_10121ee0)(param_2);
  if (param_3 != 0) {
    (*DAT_10121ee0)(param_3);
  }
  if (param_4 != 0) {
    (*DAT_10121ee0)(param_4);
  }
  if (param_5 != 0) {
    (*DAT_10121ee0)(param_5);
  }
  if (param_6 != 0) {
    (*DAT_10121ee0)(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x100af9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10121ec4)();
  return;
}

