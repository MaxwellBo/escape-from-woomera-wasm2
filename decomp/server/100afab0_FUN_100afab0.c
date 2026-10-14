
void FUN_100afab0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*DAT_10121ec0)(2,DAT_101248dc,0,0);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
  (*DAT_10121ec8)(uVar1);
  (*DAT_10121ee0)(param_1);
                    /* WARNING: Could not recover jumptable at 0x100afaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10121ec4)();
  return;
}

