
void __fastcall FUN_100608aa(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  byte bVar15;
  undefined4 in_EAX;
  byte bVar17;
  int iVar16;
  int unaff_EBX;
  undefined2 in_ES;
  byte in_CF;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float *pfStack_1c;
  byte bVar18;
  
  pbVar1 = (byte *)(param_2 + -0x63eff9f9);
  bVar14 = (byte)in_EAX;
  bVar19 = CARRY1(*pbVar1,bVar14) || CARRY1(*pbVar1 + bVar14,in_CF);
  *pbVar1 = *pbVar1 + bVar14 + in_CF;
  pbVar1 = (byte *)(unaff_EBX + 7);
  bVar17 = (byte)((uint)param_1 >> 8);
  bVar20 = CARRY1(*pbVar1,bVar17) || CARRY1(*pbVar1 + bVar17,bVar19);
  *pbVar1 = *pbVar1 + bVar17 + bVar19;
  pbVar1 = (byte *)(unaff_EBX + 0x42100606);
  bVar19 = CARRY1(*pbVar1,bVar17) || CARRY1(*pbVar1 + bVar17,bVar20);
  *pbVar1 = *pbVar1 + bVar17 + bVar20;
  bVar20 = CARRY1(bVar17,bVar17) || CARRY1(bVar17 * '\x02',bVar19);
  bVar17 = bVar17 * '\x02' + bVar19;
  bVar19 = CARRY1(bVar17,bVar17) || CARRY1(bVar17 * '\x02',bVar20);
  bVar18 = bVar17 * '\x02' + bVar20;
  iVar16 = CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(bVar18,(char)param_1));
  bVar15 = (byte)((uint)in_EAX >> 8);
  bVar17 = bVar15 + bVar18;
  bVar20 = CARRY1(bVar15,bVar18) || CARRY1(bVar17,bVar19);
  bVar21 = CARRY1(bRam7d100607,bVar18);
  bVar18 = bRam7d100607 + bVar18;
  bRam7d100607 = bVar18 + bVar20;
  pfStack_1c = (float *)CONCAT22(pfStack_1c._2_2_,in_ES);
  pcVar2 = (char *)(CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar17 + bVar19,bVar14)) +
                   -0x6f6f6f70);
  *pcVar2 = *pcVar2 + (char)param_2 + (bVar21 || CARRY1(bVar18,bVar20));
  FUN_100af200(*(int *)(iVar16 + 4) + 0x50);
  fVar3 = *(float *)(iVar16 + 0x2f4);
  fVar4 = *(float *)(DAT_10122044 + 0x38);
  fVar5 = *(float *)(DAT_10122044 + 0x3c);
  fVar6 = *(float *)(iVar16 + 0x2ec);
  fVar7 = *(float *)(DAT_10122044 + 0x44);
  fVar8 = *(float *)(DAT_10122044 + 0x48);
  fVar9 = *(float *)(iVar16 + 0x2f0);
  iVar16 = *(int *)(iVar16 + 4);
  fVar10 = *(float *)(DAT_10122044 + 0x2c);
  fVar11 = *(float *)(DAT_10122044 + 0x30);
  fVar12 = *(float *)(iVar16 + 0xc);
  fVar13 = *(float *)(iVar16 + 0x10);
  *pfStack_1c = fVar9 * *(float *)(DAT_10122044 + 0x28) + *(float *)(iVar16 + 8) +
                fVar6 * *(float *)(DAT_10122044 + 0x40) + fVar3 * *(float *)(DAT_10122044 + 0x34);
  pfStack_1c[1] = fVar9 * fVar10 + fVar12 + fVar6 * fVar7 + fVar3 * fVar4;
  pfStack_1c[2] = fVar9 * fVar11 + fVar13 + fVar6 * fVar8 + fVar3 * fVar5;
  return;
}

