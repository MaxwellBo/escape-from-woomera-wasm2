
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x1008094a) overlaps instruction at (ram,0x10080949)
    */

void __fastcall FUN_1008092a(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte *in_EAX;
  undefined3 uVar7;
  char *pcVar6;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  char unaff_BL;
  int unaff_EDI;
  bool bVar11;
  byte *pbVar4;
  uint *puVar5;
  
  bVar10 = (byte)param_2;
  bVar3 = (byte)param_1;
  *param_1 = *param_1 << (bVar3 & 0x1f) | *param_1 >> 0x20 - (bVar3 & 0x1f);
  *in_EAX = *in_EAX | bVar10;
  uVar7 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = (char)in_EAX * '\x02' + CARRY1(bVar3,*in_EAX);
  pbVar4 = (byte *)CONCAT31(uVar7,cVar2);
  bVar8 = bVar3 + *in_EAX + *pbVar4;
  bVar3 = cVar2 + (char)((uint)param_2 >> 8) + CARRY1(bVar3 + *in_EAX,*pbVar4);
  puVar5 = (uint *)CONCAT31(uVar7,bVar3);
  uVar9 = CONCAT31((int3)((uint)param_1 >> 8),bVar8 + (byte)*puVar5);
  cVar2 = (char)((uint)in_EAX >> 8);
  *(byte *)puVar5 = (byte)*puVar5 + cVar2 + CARRY1(bVar8,(byte)*puVar5);
  uVar1 = *puVar5;
  *(char *)(unaff_EDI + 4) = *(char *)(unaff_EDI + 4) + unaff_BL + CARRY4(uVar9,*puVar5);
  *(byte *)puVar5 = (byte)*puVar5 | bVar10;
  if ((POPCOUNT((byte)*puVar5) & 1U) == 0) {
    bVar11 = false;
    *(byte *)puVar5 = (byte)*puVar5 | bVar10;
    pcVar6 = (char *)*(undefined6 *)((int)puVar5 + uVar9 + uVar1);
  }
  else {
    *(byte *)puVar5 = (byte)*puVar5 | bVar10;
    bVar8 = bVar3 + 8;
    bVar11 = 0xf7 < bVar8;
    pcVar6 = (char *)CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                              CONCAT11(cVar2 + bVar8 + (0xf7 < bVar3),bVar8)) >> 8),
                              bVar3 + 0x10);
  }
  *pcVar6 = *pcVar6 + unaff_BL + bVar11;
  pcVar6[0x6071008] = pcVar6[0x6071008] | bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

