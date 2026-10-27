
/* WARNING: Control flow encountered bad instruction data */

void FUN_1001a1aa(void)

{
  int in_EAX;
  
  *piRama18f1001 = *piRama18f1001 + (in_EAX >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

