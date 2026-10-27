
void __fastcall FUN_1007c92d(int *param_1,char *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined6 uVar3;
  byte in_AL;
  byte bVar4;
  char cVar5;
  byte unaff_BL;
  undefined6 *unaff_EDI;
  byte in_AF;
  uint uVar6;
  char *pcVar7;
  
  bVar1 = 9 < (in_AL & 0xf) | in_AF;
  *(undefined1 *)unaff_EDI = 0x10;
  *(undefined1 *)unaff_EDI = 0x10;
  uVar3 = *unaff_EDI;
  *param_2 = *param_2 + (char)param_2 + CARRY1(unaff_BL,(byte)((uint)param_2 >> 8));
  *(undefined1 *)unaff_EDI = 0x10;
  bVar1 = 9 < ((byte)uVar3 & 0xf) | 9 < (in_AL + bVar1 * -6 & 0xf) | bVar1;
  bVar4 = (byte)uVar3 + bVar1 * -6;
  *(undefined1 *)unaff_EDI = 0x10;
  bVar1 = 9 < (bVar4 & 0xf) | bVar1;
  uVar6 = CONCAT31((int3)((uint6)uVar3 >> 8),bVar4 + bVar1 * '\x06') & 0xffffff0f;
  cVar5 = (char)uVar6;
  pcVar7 = (char *)CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint6)uVar3 >> 8) + bVar1,cVar5)
                           );
  *(undefined1 *)unaff_EDI = 0x10;
  *pcVar7 = *pcVar7 + cVar5;
  *(char *)param_1 = (char)*param_1 + cVar5;
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *(char *)param_1 = (char)*param_1 + cVar5;
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  *param_1 = (int)(pcVar7 + *param_1);
  pcVar7[-0x74a96f70] = pcVar7[-0x74a96f70] + (char)param_2;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

