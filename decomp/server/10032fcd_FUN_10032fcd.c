
float10 __fastcall FUN_10032fcd(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar4;
  byte bVar5;
  char cVar9;
  uint in_EAX;
  undefined4 uVar8;
  int unaff_EBX;
  undefined4 *puVar10;
  undefined4 *unaff_EBP;
  float10 in_ST0;
  float10 fVar11;
  float10 extraout_ST0;
  undefined4 uStack_8;
  uint uVar3;
  byte bVar6;
  uint *puVar7;
  
  *(int *)(unaff_EBX + in_EAX) = *(int *)(unaff_EBX + in_EAX) + -0x10;
  bVar6 = (byte)param_2;
  bVar5 = bVar6 - 3;
  puVar7 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),bVar5);
  cVar9 = (char)((uint)param_2 >> 8);
  (&stack0x2cb61003)[(int)unaff_EBP] = (&stack0x2cb61003)[(int)unaff_EBP] + cVar9 + (bVar6 < 3);
  uVar2 = *puVar7;
  uVar3 = *puVar7;
  puVar10 = (undefined4 *)&stack0xfffffffc;
  cVar4 = '\x0f';
  do {
    unaff_EBP = unaff_EBP + -1;
    puVar10 = puVar10 + -1;
    *puVar10 = *unaff_EBP;
    cVar4 = cVar4 + -1;
  } while ('\0' < cVar4);
  fVar11 = (float10)*(int *)(unaff_EBX + (int)puVar7) - in_ST0;
  pcVar1 = (char *)(CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),
                                             CONCAT11(cVar9 + (char)((uint)param_1 >> 8) +
                                                      CARRY4(in_EAX,uVar2),bVar5)) >> 8),bVar6 - 6)
                   + 0x56909090);
  *pcVar1 = *pcVar1 + (char)in_EAX + (char)uVar3 + (bVar5 < 3);
  if (*(int *)(*(int *)(param_1 + 4) + 0x184) == 0) {
    uVar8 = (*DAT_10121eb8)();
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = uVar8;
    fVar11 = extraout_ST0;
    if (*(int *)(*(int *)(param_1 + 4) + 0x110) == 0) {
      fVar11 = (float10)(*DAT_10121efc)();
    }
  }
  return fVar11;
}

