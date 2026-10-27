
/* WARNING: Instruction at (ram,0x1002e571) overlaps instruction at (ram,0x1002e56f)
    */

void __fastcall FUN_1002e559(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  char *in_EAX;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte *unaff_EBX;
  int unaff_ESI;
  byte *unaff_EDI;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = ZEXT48(in_EAX) * (ulonglong)CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + *in_EAX);
  pbVar6 = (byte *)lVar5;
  bVar8 = (byte)((ulonglong)lVar5 >> 0x20);
  bVar9 = CARRY1(bVar8,*pbVar6);
  bVar1 = *pbVar6;
  if (param_1 == 0) {
    if (*(int *)(iRam00000004 + 0xb8) != 0) {
      uRam000000d4 = (*DAT_10121e08)();
    }
    FUN_10036c90(uRam000000d0);
    return;
  }
  bVar2 = *unaff_EBX + (byte)unaff_EBX;
  bVar10 = CARRY1(*unaff_EBX,(byte)unaff_EBX) || CARRY1(bVar2,bVar9);
  *unaff_EBX = bVar2 + bVar9;
  bVar2 = *unaff_EDI;
  bVar7 = (byte)((uint)param_1 >> 8);
  bVar3 = *unaff_EDI + bVar7;
  *unaff_EDI = bVar3 + bVar10;
  *(char *)(unaff_ESI + -0x75) =
       *(char *)(unaff_ESI + -0x75) + bVar8 + bVar1 + (CARRY1(bVar2,bVar7) || CARRY1(bVar3,bVar10));
  pcVar4 = (code *)swi(1);
  (*pcVar4)();
  return;
}

