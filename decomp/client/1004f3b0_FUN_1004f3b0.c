
/* WARNING: Control flow encountered bad instruction data */

void FUN_1004f3b0(void)

{
  char in_AL;
  
  if (-1 < in_AL) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

