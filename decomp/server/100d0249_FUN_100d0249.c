
/* WARNING: Control flow encountered bad instruction data */

void __fastcall FUN_100d0249(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int unaff_EBX;
  bool bVar9;
  
  cVar6 = (byte)param_1 + bRam0d029c10;
  pcVar2 = (char *)(param_2 + 0x28c100d + in_EAX);
  *pcVar2 = *pcVar2 + (char)param_2 + CARRY1((byte)param_1,bRam0d029c10);
  uVar5 = in_EAX | 0xd028410;
  pbVar1 = (byte *)(param_2 + 0xd + uVar5);
  bVar3 = *pbVar1;
  bVar8 = (byte)((uint)unaff_EBX >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  pbVar1 = (byte *)(param_2 + 0xd + uVar5);
  bVar7 = (byte)((uint)param_2 >> 8);
  bVar4 = *pbVar1 + bVar7;
  bVar9 = CARRY1(*pbVar1,bVar7) || CARRY1(bVar4,CARRY1(bVar3,bVar8));
  *pbVar1 = bVar4 + CARRY1(bVar3,bVar8);
  pbVar1 = (byte *)(param_2 + 0xd + uVar5);
  bVar3 = *pbVar1;
  bVar7 = (byte)((uint)param_1 >> 8);
  bVar4 = *pbVar1 + bVar7;
  *pbVar1 = bVar4 + bVar9;
  *(char *)(unaff_EBX + -0x761b71bc) =
       *(char *)(unaff_EBX + -0x761b71bc) + cVar6 + (CARRY1(bVar3,bVar7) || CARRY1(bVar4,bVar9));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

