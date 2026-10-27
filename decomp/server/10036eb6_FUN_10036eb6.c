
/* WARNING: Instruction at (ram,0x10036f33) overlaps instruction at (ram,0x10036f32)
    */

void __fastcall FUN_10036eb6(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  uint *in_EAX;
  int iVar4;
  byte bVar5;
  void *this;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  char in_CF;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  *(char *)(unaff_EBX + 0x6d) = *(char *)(unaff_EBX + 0x6d) + (char)unaff_EBX + in_CF;
  uVar6 = param_2 + *in_EAX;
  uVar2 = in((short)uVar6);
  *unaff_EDI = uVar2;
  uVar7 = uVar6 + *in_EAX;
  bVar5 = (byte)((uint)param_1 >> 8);
  if (uVar7 == 0 || SCARRY4(uVar6,*in_EAX) != (int)uVar7 < 0) {
    *(char *)(uVar7 + 1) = (*(char *)(uVar7 + 1) - bVar5) - CARRY4(uVar6,*in_EAX);
  }
  else {
    uVar6 = *in_EAX;
    bVar3 = bVar5 - *(byte *)(unaff_ESI + 3);
    iVar4 = CONCAT22((short)((uint)param_1 >> 0x10),
                     CONCAT11(bVar3 - CARRY4(uVar7,*in_EAX),(char)param_1));
    *(char *)(iVar4 + 0x6e) =
         *(char *)(iVar4 + 0x6e) + (char)in_EAX +
         (bVar5 < *(byte *)(unaff_ESI + 3) || bVar3 < CARRY4(uVar7,*in_EAX));
    piVar1 = piRamda10036d;
    iVar8 = uVar7 + uVar6 + *in_EAX;
    uVar2 = in((short)iVar8);
    unaff_EDI[1] = uVar2;
    iVar8 = iVar8 + *piVar1;
    *(uint *)(unaff_ESI + 3) = *(uint *)(unaff_ESI + 3) & unaff_EBP;
    piVar1 = piVar1 + -0x1f1bdbdc;
    *(char *)piVar1 = (char)*piVar1 + (char)iVar8;
    in((short)iVar8);
    unaff_ESI = *(uint *)(iVar4 + 200);
    iVar8 = (*DAT_10121f70)(0,2,unaff_EDI + 2);
    if (iVar8 == 0) {
      iVar8 = (*DAT_10121f70)(0,0x22);
      iVar8 = iVar8 + 0x5f;
    }
    else {
      iVar8 = 100;
    }
    fVar9 = (float10)(*DAT_10121f74)(0x3f400000,0x3f800000);
    fVar10 = (float)fVar9;
    if (unaff_ESI != 6) {
      if (8 < unaff_ESI) {
        if (fVar10 != 0.0) {
          uVar12 = 0;
          uVar2 = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x208);
          uVar11 = 0x3f4ccccd;
          iVar4 = (*DAT_10121f70)(0,(int)fVar10 + -1);
          FUN_10094b20(this,uVar2,2,*(char **)(&stack0x00000014 + iVar4 * 4),fVar10,uVar11,uVar12,
                       iVar8);
        }
        return;
      }
      goto LAB_10036f55;
    }
  }
  iVar8 = (*DAT_10121f70)(0);
  if (iVar8 != 0) {
    unaff_ESI = 2;
  }
LAB_10036f55:
                    /* WARNING: Could not recover jumptable at 0x10036f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_10037054 + unaff_ESI * 4))();
  return;
}

