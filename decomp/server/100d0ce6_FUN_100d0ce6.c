
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x100d0cf8) */
/* WARNING: Removing unreachable block (ram,0x100d0d10) */
/* WARNING: Removing unreachable block (ram,0x100d0d1b) */
/* WARNING: Removing unreachable block (ram,0x100d0d17) */
/* WARNING: Removing unreachable block (ram,0x100d0d21) */
/* WARNING: Removing unreachable block (ram,0x100d0d3b) */

undefined4 FUN_100d0ce6(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

