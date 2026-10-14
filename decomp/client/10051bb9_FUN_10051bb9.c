
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x10051bcb) */
/* WARNING: Removing unreachable block (ram,0x10051be3) */
/* WARNING: Removing unreachable block (ram,0x10051bee) */
/* WARNING: Removing unreachable block (ram,0x10051bea) */
/* WARNING: Removing unreachable block (ram,0x10051bf4) */
/* WARNING: Removing unreachable block (ram,0x10051c0e) */

undefined4 FUN_10051bb9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

