
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: Removing unreachable block (ram,0x100d9568) */
/* WARNING: Removing unreachable block (ram,0x100d957c) */
/* WARNING: Removing unreachable block (ram,0x100d9587) */
/* WARNING: Removing unreachable block (ram,0x100d9583) */
/* WARNING: Removing unreachable block (ram,0x100d958d) */

undefined4 FUN_100d9559(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

