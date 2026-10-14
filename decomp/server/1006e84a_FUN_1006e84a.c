
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006e84a(undefined4 param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar7;
  undefined4 in_EAX;
  int iVar6;
  byte unaff_BL;
  int *piVar8;
  undefined4 *unaff_EBP;
  int unaff_EDI;
  undefined4 *puVar9;
  byte in_CF;
  bool bVar10;
  char *pcVar11;
  int iStack_7ef;
  int aiStack_7eb [489];
  undefined1 *puStack_44;
  undefined4 uStack_8;
  
  puStack_44 = &stack0xfffffffc;
  puVar9 = (undefined4 *)&stack0xfffffffc;
  cVar4 = '\x0f';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar9 = puVar9 + -1;
    *puVar9 = *unaff_EBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  bVar5 = (byte)in_EAX;
  bVar7 = (byte)((uint)in_EAX >> 8);
  bVar3 = bVar7 + bVar5;
  bVar10 = CARRY1(bVar7,bVar5) || CARRY1(bVar3,in_CF);
  pbVar2 = (byte *)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar3 + in_CF,bVar5)) + 6);
  bVar3 = *pbVar2;
  bVar5 = *pbVar2;
  *pbVar2 = bVar5 + unaff_BL + bVar10;
  *(char *)(unaff_EDI + -0x6feff920) =
       *(char *)(unaff_EDI + -0x6feff920) + (char)((uint)param_1 >> 8) +
       (CARRY1(bVar3,unaff_BL) || CARRY1(bVar5 + unaff_BL,bVar10));
  if ((DAT_10122780 == 0) || (DAT_10122784 == 0)) {
    pcVar11 = s_Graph_not_ready__101128c4;
    puStack_44 = &stack0xfffffffc;
  }
  else {
    iVar6 = FUN_1006bcd0(&DAT_10122780,&iStack_7ef,0,0x13,0,0);
    if (iVar6 != 0) {
      (*DAT_10121efc)(2,&DAT_101130d4,iVar6);
      iVar6 = iVar6 + -1;
      if (iVar6 < 1) {
        return;
      }
      piVar8 = aiStack_7eb;
      puVar9 = (undefined4 *)(DAT_1012278c + iStack_7ef * 0x58);
      do {
        puVar1 = (undefined4 *)(DAT_1012278c + *piVar8 * 0x58);
        (*DAT_10121ec0)(0,0x17,0,0);
        (*DAT_10121ec8)(0x66);
        (*DAT_10121edc)(*puVar9);
        (*DAT_10121edc)(puVar9[1]);
        (*DAT_10121edc)((float)puVar9[2] + _DAT_100de45c);
        (*DAT_10121edc)(*puVar1);
        (*DAT_10121edc)(puVar1[1]);
        (*DAT_10121edc)((float)puVar1[2] + _DAT_100de45c);
        (*DAT_10121ec4)();
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
        puVar9 = puVar1;
      } while (iVar6 != 0);
      return;
    }
    pcVar11 = s_No_Path__101130d8;
  }
  (*DAT_10121efc)(2,pcVar11);
  return;
}

