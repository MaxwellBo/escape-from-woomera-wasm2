
/* WARNING: Control flow encountered bad instruction data */

void FUN_1004f600(void)

{
  byte in_AL;
  char in_SF;
  char in_OF;
  
  while( true ) {
    if (in_OF == in_SF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_OF != in_SF) break;
    in_OF = '\0';
    in_AL = in_AL | 0xe8;
    in_SF = (char)in_AL < '\0';
  }
  FUN_1004f080();
  return;
}

