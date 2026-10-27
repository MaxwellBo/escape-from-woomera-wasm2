
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1006c02d(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar12;
  undefined4 in_EAX;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar16;
  undefined2 in_ES;
  char in_CF;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uStack_8;
  
  pcVar1 = (char *)(unaff_EBP + -0x4223effa);
  bVar5 = (byte)param_1 & 0x1f;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 >> bVar5;
  bVar4 = (param_1 & 0x1f) == 0;
  bVar12 = (byte)((uint)in_EAX >> 8);
  bVar15 = (byte)((uint)param_2 >> 8);
  uStack_8 = CONCAT22(uStack_8._2_2_,in_ES);
  *(char *)(unaff_EBX + -0x74acbf14) =
       *(char *)(unaff_EBX + -0x74acbf14) + (char)in_EAX +
       (CARRY1(bVar15,bVar12) ||
       CARRY1(bVar15 + bVar12,bVar4 * in_CF | !bVar4 * ((cVar2 >> bVar5 - 1 & 1U) != 0)));
  *(undefined4 *)(uStack_8 + -4) = unaff_ESI;
  *(undefined4 *)(uStack_8 + -8) = unaff_EDI;
  if (*(int *)(*(int *)(param_1 + 0x24) + 0xc + unaff_EBX * 0x10) != *(int *)(param_1 + 0x1860)) {
    *(int *)(*(int *)(param_1 + 0x24) + 0xc + unaff_EBX * 0x10) = *(int *)(param_1 + 0x1860);
    iVar10 = *(int *)(param_1 + 0xc);
    iVar16 = unaff_EBX * 0x58;
    fVar6 = *(float *)(uStack_8 + 0x48) - *(float *)(iVar16 + 0xc + iVar10);
    fVar8 = *(float *)(uStack_8 + 0x4c) - *(float *)(iVar16 + 0x10 + iVar10);
    iVar10 = iVar16 + 0xc + iVar10;
    fVar7 = *(float *)(uStack_8 + 0x50) - *(float *)(iVar10 + 8);
    fVar6 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
    *(float *)(uStack_8 + 0x54) = fVar6;
    if (fVar6 < *(float *)(param_1 + 0x1828)) {
      *(int *)(uStack_8 + -0xc) = uStack_8 + 0xc;
      *(undefined4 *)(uStack_8 + -0x10) = 0;
      *(undefined4 *)(uStack_8 + -0x14) = 1;
      *(int *)(uStack_8 + -0x18) = iVar10;
      *(int *)(uStack_8 + -0x1c) = uStack_8 + 0x48;
      *(undefined4 *)(uStack_8 + -0x20) = 0x1006c0d4;
      FUN_100afc60(*(undefined4 *)(uStack_8 + -0x1c),*(undefined4 *)(uStack_8 + -0x18),
                   *(int *)(uStack_8 + -0x14),*(undefined4 *)(uStack_8 + -0x10),
                   *(undefined4 *)(uStack_8 + -0xc));
      if (*(float *)(uStack_8 + 0x1c) == (float)_DAT_100dd628) {
        uVar3 = *(undefined4 *)(uStack_8 + 0x54);
        *(undefined4 *)(uStack_8 + -0xc) = 0xbdf01006;
        *(int *)(param_1 + 0x182c) = unaff_EBX;
        *(undefined4 *)(param_1 + 0x1828) = uVar3;
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c108;
        lVar17 = __ftol();
        *(uint *)(uStack_8 + -0x10) = (uint)*(byte *)(iVar16 + 0x18 + *(int *)(param_1 + 0xc));
        *(undefined4 *)(uStack_8 + -0x14) = 0x1006c11d;
        lVar18 = __ftol();
        *(undefined4 *)(uStack_8 + -0x14) = 0x1006c12f;
        lVar19 = __ftol();
        *(int *)(uStack_8 + -0x14) =
             (((int)lVar18 - (int)lVar17) * 0x100) / (((int)lVar19 - (int)lVar17) + 1);
        *(int *)(uStack_8 + -0x18) = uStack_8 + 4;
        *(int *)(uStack_8 + -0x1c) = uStack_8 + 8;
        *(undefined4 *)(uStack_8 + -0x20) = 0x1006c149;
        FUN_1006c390(*(uint **)(uStack_8 + -0x1c),*(uint **)(uStack_8 + -0x18),
                     *(int *)(uStack_8 + -0x14),*(uint *)(uStack_8 + -0x10));
        if (*(int *)(uStack_8 + 4) < *(int *)(param_1 + 0x183c)) {
          *(int *)(param_1 + 0x183c) = *(int *)(uStack_8 + 4);
        }
        if (*(int *)(param_1 + 0x1830) < *(int *)(uStack_8 + 8)) {
          *(int *)(param_1 + 0x1830) = *(int *)(uStack_8 + 8);
        }
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c17f;
        lVar17 = __ftol();
        iVar9 = (int)lVar17;
        iVar10 = *(int *)(param_1 + 0xc);
        *(int *)(uStack_8 + 8) = iVar9;
        uVar14 = (uint)*(byte *)(iVar16 + 0x19 + iVar10);
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c197;
        lVar17 = __ftol();
        *(int *)(uStack_8 + 4) = ((int)lVar17 - iVar9) * 0x100;
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c1ad;
        lVar17 = __ftol();
        iVar10 = *(int *)(uStack_8 + 4) / (((int)lVar17 - iVar9) + 1);
        uVar13 = iVar10 * 2 - uVar14;
        if (iVar10 < (int)uVar14) {
          uVar11 = ((int)uVar13 < 0) - 1 & uVar13;
          uVar13 = uVar14;
        }
        else {
          uVar11 = uVar14;
          if (0xff < (int)uVar13) {
            uVar13 = 0xff;
          }
        }
        if ((int)uVar13 < *(int *)(param_1 + 0x1840)) {
          *(uint *)(param_1 + 0x1840) = uVar13;
        }
        if (*(int *)(param_1 + 0x1834) < (int)uVar11) {
          *(uint *)(param_1 + 0x1834) = uVar11;
        }
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c20a;
        lVar17 = __ftol();
        uVar14 = (uint)*(byte *)(iVar16 + 0x1a + *(int *)(param_1 + 0xc));
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c220;
        lVar18 = __ftol();
        *(undefined4 *)(uStack_8 + -0x10) = 0x1006c232;
        lVar19 = __ftol();
        iVar10 = (((int)lVar18 - (int)lVar17) * 0x100) / (((int)lVar19 - (int)lVar17) + 1);
        uVar13 = iVar10 * 2 - uVar14;
        if (iVar10 < (int)uVar14) {
          uVar11 = ((int)uVar13 < 0) - 1 & uVar13;
          uVar13 = uVar14;
        }
        else {
          uVar11 = uVar14;
          if (0xff < (int)uVar13) {
            uVar13 = 0xff;
          }
        }
        if ((int)uVar13 < *(int *)(param_1 + 0x1844)) {
          *(uint *)(param_1 + 0x1844) = uVar13;
        }
        if (*(int *)(param_1 + 0x1838) < (int)uVar11) {
          *(uint *)(param_1 + 0x1838) = uVar11;
        }
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c28a;
        lVar17 = __ftol();
        iVar10 = (int)lVar17;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c297;
        lVar17 = __ftol();
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c2a6;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x1848) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c2c6;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x1854) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c2e2;
        lVar17 = __ftol();
        iVar10 = (int)lVar17;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c2ef;
        lVar17 = __ftol();
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c2fe;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x184c) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c31e;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x1858) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c33a;
        lVar17 = __ftol();
        iVar10 = (int)lVar17;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c347;
        lVar17 = __ftol();
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c356;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x1850) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
        *(undefined4 *)(uStack_8 + -0xc) = 0x1006c376;
        lVar18 = __ftol();
        *(int *)(param_1 + 0x185c) = (((int)lVar18 - iVar10) * 0x100) / (((int)lVar17 - iVar10) + 1)
        ;
      }
    }
  }
  return;
}

