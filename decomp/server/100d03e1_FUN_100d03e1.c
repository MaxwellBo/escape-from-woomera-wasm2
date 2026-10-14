
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_100d03e1(char param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int unaff_EBX;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + '\x04');
  (&stack0x00000000)[uVar1 | 0xd040c10] = (&stack0x00000000)[uVar1 | 0xd040c10] + (char)param_2;
  (&stack0x00000000)[uVar1 | 0xd041c10] =
       (&stack0x00000000)[uVar1 | 0xd041c10] + (char)((uVar1 | 0xd041c10) >> 8);
  (&stack0x00000000)[uVar1 | 0xd043c10] =
       (&stack0x00000000)[uVar1 | 0xd043c10] + (char)((uint)param_2 >> 8);
  *(char *)(unaff_EBX + -0x76e371bc) = *(char *)(unaff_EBX + -0x76e371bc) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

