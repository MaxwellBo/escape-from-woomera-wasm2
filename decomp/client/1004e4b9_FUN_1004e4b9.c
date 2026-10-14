
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_1004e4b9(undefined4 param_1,undefined4 param_2)

{
  byte bVar2;
  byte bVar3;
  undefined4 uVar1;
  byte bVar4;
  int unaff_EBX;
  char in_CF;
  bool bVar5;
  bool bVar6;
  
  bVar4 = (byte)((uint)param_2 >> 8);
  uVar1 = in(4);
  cRame5041004 = cRame5041004 + (char)param_1 + in_CF;
  bVar5 = 0xef < (byte)uVar1;
  in(4);
  bVar3 = (byte)((uint)uVar1 >> 8);
  bVar2 = bVar3 + bVar4;
  bVar6 = CARRY1(bVar3,bVar4) || CARRY1(bVar2,bVar5);
  bVar2 = bVar2 + bVar5;
  in(4);
  bVar4 = (byte)((uint)param_1 >> 8);
  bVar3 = bVar2 + bVar4;
  bVar5 = CARRY1(bVar2,bVar4) || CARRY1(bVar3,bVar6);
  bVar3 = bVar3 + bVar6;
  in(4);
  bVar2 = bVar3 * '\x02' + bVar5;
  in(4);
  in(4);
  *(char *)(unaff_EBX + -0x761b71bc) =
       *(char *)(unaff_EBX + -0x761b71bc) + (char)param_1 +
       (CARRY1(bVar2,(byte)unaff_EBX) ||
       CARRY1(bVar2 + (byte)unaff_EBX,CARRY1(bVar3,bVar3) || CARRY1(bVar3 * '\x02',bVar5)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

