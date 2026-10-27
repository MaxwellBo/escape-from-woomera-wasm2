
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x100d944f) */
/* WARNING: Removing unreachable block (ram,0x100d9463) */
/* WARNING: Removing unreachable block (ram,0x100d946c) */
/* WARNING: Removing unreachable block (ram,0x100d9468) */
/* WARNING: Removing unreachable block (ram,0x100d9472) */

undefined4 FUN_100d9440(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

