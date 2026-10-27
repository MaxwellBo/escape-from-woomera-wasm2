
void FUN_100af9c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  (*DAT_10121ec0)(1,DAT_101248e0,0,*(undefined4 *)(param_1 + 0x208));
  (*DAT_10121ec8)(param_2);
  (*DAT_10121ee0)(param_3);
  if (param_4 != 0) {
    (*DAT_10121ee0)(param_4);
  }
  if (param_5 != 0) {
    (*DAT_10121ee0)(param_5);
  }
  if (param_6 != 0) {
    (*DAT_10121ee0)(param_6);
  }
  if (param_7 != 0) {
    (*DAT_10121ee0)(param_7);
  }
                    /* WARNING: Could not recover jumptable at 0x100afa3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10121ec4)();
  return;
}

