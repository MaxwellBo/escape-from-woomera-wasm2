
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x100d8908) */
/* WARNING: Removing unreachable block (ram,0x100d890f) */
/* WARNING: Removing unreachable block (ram,0x100d8914) */
/* WARNING: Removing unreachable block (ram,0x100d8944) */
/* WARNING: Removing unreachable block (ram,0x100d894b) */

undefined4 FUN_100d88f9(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

