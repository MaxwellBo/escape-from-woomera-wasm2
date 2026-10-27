
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x1002763d) overlaps instruction at (ram,0x1002763b)
    */
/* WARNING: Removing unreachable block (ram,0x10027607) */
/* WARNING: Removing unreachable block (ram,0x10027613) */
/* WARNING: Removing unreachable block (ram,0x1002760b) */
/* WARNING: Removing unreachable block (ram,0x1002761b) */
/* WARNING: Removing unreachable block (ram,0x1002765b) */
/* WARNING: Removing unreachable block (ram,0x1002768b) */
/* WARNING: Removing unreachable block (ram,0x1002760f) */
/* WARNING: Removing unreachable block (ram,0x10027687) */
/* WARNING: Removing unreachable block (ram,0x10027683) */
/* WARNING: Removing unreachable block (ram,0x10027663) */
/* WARNING: Removing unreachable block (ram,0x10027623) */
/* WARNING: Removing unreachable block (ram,0x1002761f) */
/* WARNING: Removing unreachable block (ram,0x1002768f) */
/* WARNING: Removing unreachable block (ram,0x1002762f) */
/* WARNING: Removing unreachable block (ram,0x10027627) */
/* WARNING: Removing unreachable block (ram,0x1002762b) */
/* WARNING: Removing unreachable block (ram,0x10027693) */
/* WARNING: Removing unreachable block (ram,0x10027635) */
/* WARNING: Removing unreachable block (ram,0x10027637) */
/* WARNING: Removing unreachable block (ram,0x10027697) */

void __fastcall FUN_10027602(CBaseDoor *param_1,uint param_2,int param_3)

{
  CBaseDoor CVar1;
  byte bVar2;
  char cVar3;
  CBaseDoor *in_EAX;
  CBaseDoor *pCVar4;
  byte *pbVar5;
  int iVar6;
  undefined3 extraout_var;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  char *pcVar13;
  byte *unaff_EDI;
  bool bVar14;
  bool bVar16;
  bool bVar17;
  bool bVar15;
  
  bVar7 = (byte)param_1;
  bVar11 = (byte)((uint)param_1 >> 8);
  bVar12 = (byte)in_EAX;
  bVar8 = (byte)param_2;
  cVar3 = (char)unaff_EBX;
  bVar14 = CARRY1(bRam45100273,bVar11);
  bVar16 = 0xfe < (byte)(bRam45100273 + bVar11);
  bVar15 = bVar14 || bVar16;
  bRam45100273 = bRam45100273 + bVar11 + 1;
  if (bVar14 || bVar16) {
    *(char *)(unaff_EBP + 0x73) = *(char *)(unaff_EBP + 0x73) + cVar3 + bVar15;
    param_2 = (uint)(byte)(bVar8 + (char)*in_EAX);
    if (CARRY1(bVar8,(byte)*in_EAX)) {
      cVar3 = bVar12 - 0x11;
      pcVar13 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar3);
      unaff_EBX[-0x676e7500] = unaff_EBX[-0x676e7500] + bVar7 + (bVar12 < 0x11);
      *pcVar13 = *pcVar13 + cVar3;
      *unaff_EBX = *unaff_EBX + cVar3;
      return;
    }
  }
  else {
    bVar10 = (byte)(param_2 >> 8);
    if (!bVar14 && !bVar16) {
      if (bVar14 || bVar16) {
        pbVar5 = unaff_EDI + -0x63effd8d;
        bVar16 = CARRY1(*pbVar5,bVar12) || CARRY1(*pbVar5 + bVar12,bVar15);
        *pbVar5 = *pbVar5 + bVar12 + bVar15;
        bVar2 = *pbVar5;
      }
      else {
        bVar16 = false;
        bVar14 = true;
        bVar2 = bRam45100273;
        if (bVar15) goto code_r0x10027647;
      }
      bVar14 = bVar2 == 0;
      if (bVar16) {
        pCVar4 = param_1 + -0x39effd8d;
        bVar15 = CARRY1((byte)*pCVar4,bVar10) || CARRY1((char)*pCVar4 + bVar10,bVar16);
        *pCVar4 = (CBaseDoor)((char)*pCVar4 + bVar10 + bVar16);
        bVar14 = *pCVar4 == (CBaseDoor)0x0;
      }
      else {
        bVar15 = false;
        if (bVar16) {
          bVar15 = CARRY1(bVar10,bVar12) || 0xfe < (byte)(bVar10 + bVar12);
          cVar9 = bVar10 + bVar12 + 1;
          param_2 = CONCAT22((short)(param_2 >> 0x10),CONCAT11(cVar9,bVar8));
          bVar14 = cVar9 == '\0';
        }
      }
      bVar12 = (byte)param_2;
      if (bVar15) {
        *(char *)(unaff_ESI + 0x74) = *(char *)(unaff_ESI + 0x74) + bVar11 + bVar15;
        cVar9 = bVar12 + (char)*in_EAX;
        bVar14 = cVar9 == '\0';
        param_2 = (uint)CONCAT11(in_EAX[CONCAT31((int3)(param_2 >> 8),cVar9) + 0x10],cVar9);
        pCVar4 = param_1;
        param_1 = in_EAX;
        bVar15 = CARRY1(bVar12,(byte)*in_EAX);
      }
      else {
        pCVar4 = in_EAX;
        if (!bVar14) {
          pbVar5 = (byte *)(param_2 + 0x91100274);
          bVar11 = *pbVar5;
          bVar12 = *pbVar5;
          *pbVar5 = bVar12 + bVar7 + bVar15;
          bVar14 = *pbVar5 == 0;
          bVar15 = CARRY1(bVar11,bVar7) || CARRY1(bVar12 + bVar7,bVar15);
        }
      }
      bVar12 = (byte)((uint)param_1 >> 8);
      if (bVar14) {
        bVar16 = true;
      }
      else {
        pbVar5 = (byte *)(unaff_EBP + -0x39effd8c);
        bVar7 = *pbVar5;
        bVar11 = *pbVar5;
        *pbVar5 = bVar11 + bVar12 + bVar15;
        bVar16 = *pbVar5 == 0;
        bVar15 = CARRY1(bVar7,bVar12) || CARRY1(bVar11 + bVar12,bVar15);
      }
      bVar14 = bVar15;
      if (!bVar16) {
        bVar7 = (byte)param_1;
        bVar14 = CARRY1(bVar12,bVar7) || CARRY1(bVar12 + bVar7,bVar15);
        cVar9 = bVar12 + bVar7 + bVar15;
        param_1 = (CBaseDoor *)CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar9,bVar7));
        bVar16 = cVar9 == '\0';
      }
      bVar12 = (byte)((uint)pCVar4 >> 8);
      bVar15 = bVar14;
      if (!bVar16) {
        bVar11 = (byte)(param_2 >> 8);
        bVar7 = bVar11 + bVar12;
        bVar15 = CARRY1(bVar11,bVar12) || CARRY1(bVar7,bVar14);
        cVar9 = bVar7 + bVar14;
        param_2 = (uint)CONCAT11(cVar9,(char)param_2);
        bVar16 = cVar9 == '\0';
      }
      bVar14 = bVar15;
      if (!bVar16) {
        bVar12 = (byte)((uint)unaff_EBX >> 8);
        bVar14 = CARRY1(bVar12,bVar12) || CARRY1(bVar12 * '\x02',bVar15);
        cVar9 = bVar12 * '\x02' + bVar15;
        unaff_EBX = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar9,cVar3));
        bVar16 = cVar9 == '\0';
      }
      bVar12 = (byte)param_2;
      bVar15 = bVar14;
      if (!bVar16) {
        bVar15 = CARRY1(*unaff_EDI,bVar12) || CARRY1(*unaff_EDI + bVar12,bVar14);
        *unaff_EDI = *unaff_EDI + bVar12 + bVar14;
        bVar16 = *unaff_EDI == 0;
      }
      bVar7 = (byte)((uint)param_1 >> 8);
      if (bVar16) {
        unaff_EBX[0x75] = unaff_EBX[0x75] + bVar12 + bVar15;
        CVar1 = *pCVar4;
        param_2 = CONCAT31((int3)(param_2 >> 8),bVar12 + (char)*pCVar4);
        bVar14 = (byte)(bVar12 + (char)*pCVar4) == '\0';
        bVar7 = in((short)param_2);
        *unaff_EDI = bVar7;
        bVar17 = CARRY1(bVar12,(byte)CVar1);
      }
      else {
        bVar14 = false;
        bVar17 = bVar15;
        if (bVar16) {
          pbVar5 = (byte *)(unaff_EBP + 2 + unaff_ESI * 2);
          bVar12 = *pbVar5 + bVar7;
          bVar17 = CARRY1(*pbVar5,bVar7) || CARRY1(bVar12,bVar15);
          *pbVar5 = bVar12 + bVar15;
          goto code_r0x1002767f;
        }
      }
      if (!bVar14) {
        pcVar13 = s_player_10101c54;
        pbVar5 = (byte *)(**(int **)(param_3 + 4) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar12 = *pbVar5;
          bVar16 = bVar12 < (byte)*pcVar13;
          if (bVar12 != *pcVar13) {
LAB_100276ea:
            iVar6 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_100276ef;
          }
          if (bVar12 == 0) break;
          bVar12 = pbVar5[1];
          bVar16 = bVar12 < (byte)pcVar13[1];
          if (bVar12 != pcVar13[1]) goto LAB_100276ea;
          pbVar5 = pbVar5 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar12 != 0);
        iVar6 = 0;
LAB_100276ef:
        if (iVar6 == 0) {
          if ((*(int *)(param_1 + 0x158) != 0) &&
             (bVar16 = FUN_100b0030(*(int *)(param_1 + 0x158),param_3),
             CONCAT31(extraout_var,bVar16) == 0)) {
            FUN_10026660(*(int *)(param_1 + 4),(int *)(param_1 + 0x160),1,0.0);
          }
          iVar6 = *(int *)(param_1 + 4);
          if ((*(int *)(iVar6 + 0x1cc) != 0) && ((*(uint *)(iVar6 + 0x1a0) & 0x400) == 0)) {
            FUN_10026660(iVar6,(int *)(param_1 + 0x160),1,0.0);
            return;
          }
          FUN_10019420(param_1 + 0xc0,param_3);
          iVar6 = FUN_10027840(param_1);
          if (iVar6 != 0) {
            *(undefined4 *)(param_1 + 0x78) = 0;
          }
        }
        return;
      }
code_r0x1002767f:
      unaff_EBX[0x75] = unaff_EBX[0x75] + (char)(param_2 >> 8) + bVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(param_2 + 0x73) = *(char *)(param_2 + 0x73) + bVar10 + bVar15;
  }
  bVar14 = CARRY1((byte)param_2,(byte)*in_EAX);
  LOCK();
  iVar6 = *(int *)(unaff_EBX + 2);
  *(int *)(unaff_EBX + 2) = unaff_ESI;
  UNLOCK();
  unaff_ESI = iVar6;
code_r0x10027647:
  unaff_EBX[unaff_ESI * 2 + 0x73b11002] = unaff_EBX[unaff_ESI * 2 + 0x73b11002] + cVar3 + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

