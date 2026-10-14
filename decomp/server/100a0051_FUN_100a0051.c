
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_100a0051(undefined4 param_1,uint param_2)

{
  uint *in_EAX;
  
  *in_EAX = *in_EAX | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

