
void __fastcall FUN_1003d46d(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  uint *in_EAX;
  int unaff_EBX;
  uint *puVar5;
  int unaff_EBP;
  int unaff_EDI;
  char in_CF;
  
  puVar5 = (uint *)(unaff_EBX + -1);
  bVar4 = (byte)param_1 & 0x1f;
  *puVar5 = *puVar5 << bVar4 | *puVar5 >> 0x20 - bVar4;
  bVar3 = (param_1 & 0x1f) == 0;
  *(char *)(unaff_EBP + -0x2d) =
       *(char *)(unaff_EBP + -0x2d) + (char)(param_2 >> 8) +
       (bVar3 * in_CF | !bVar3 * ((*puVar5 & 1) != 0));
  uVar1 = *in_EAX;
  bVar4 = (byte)param_1 & 0x1f;
  *puVar5 = *puVar5 << bVar4 | *puVar5 >> 0x20 - bVar4;
  bVar3 = (param_1 & 0x1f) == 0;
  *(char *)(unaff_EDI + -0x2d) =
       *(char *)(unaff_EDI + -0x2d) + (char)puVar5 +
       (bVar3 * CARRY4(param_2,uVar1) | !bVar3 * ((*puVar5 & 1) != 0));
  iVar2 = *(int *)(param_1 + 0xaa0);
  while (iVar2 != 0) {
    FUN_1003d4b0(param_1);
    iVar2 = *(int *)(param_1 + 0xaa0);
  }
  return;
}

