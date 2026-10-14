
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_100bf7f1(undefined4 param_1,uint param_2)

{
  uint *in_EAX;
  byte bVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = param_2 | *in_EAX | *in_EAX;
  bVar1 = (byte)uVar2;
  *(char *)(unaff_EDI + 1) = *(char *)(unaff_EDI + 1) + bVar1;
  out((short)uVar2,(char)in_EAX);
  out(CONCAT11(0xed,bVar1 | (byte)*in_EAX) | (ushort)*in_EAX | (ushort)*in_EAX,in_EAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

