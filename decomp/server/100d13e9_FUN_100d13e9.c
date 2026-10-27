
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_100d13e9(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -4) = 0xffffffff;
  *(int *)(iVar1 + -8) = unaff_EBP + -0x10;
  *(undefined4 *)(iVar1 + -0xc) = 0x100d13fb;
  __local_unwind2(*(int *)(iVar1 + -8),*(int *)(iVar1 + -4));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

