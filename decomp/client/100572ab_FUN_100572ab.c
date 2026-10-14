
undefined4 * FUN_100572ab(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_100577a8();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(char **)(unaff_EBP + -0x10) = s_;
  FUN_100576fe(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_100424b0(this,'\0');
  FUN_100422b0(this,puVar1,0,DAT_10064d2c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_10066094;
  return this_00;
}

