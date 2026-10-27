
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100836a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  float afStack_5c [23];
  
  if ((param_1 < *(int *)(DAT_10126a38 + 0x24c)) && (0 < param_1)) {
    iVar4 = *(int *)(param_1 * 0xe0 + 0x280 + DAT_10126a38);
    iVar8 = param_1 * 0xe0 + 0x250 + DAT_10126a38;
    if (iVar4 != 0) {
      fVar9 = *(float *)(iVar8 + 0x24);
      fVar10 = *(float *)(iVar8 + 0x28);
      fVar5 = *(float *)(iVar8 + 0x2c);
      (**(code **)(DAT_10126a38 + 0x4f594))(iVar4,&fStack_6c,&fStack_84);
      uVar6 = 0;
      pfVar7 = afStack_5c;
      do {
        fVar1 = fStack_84;
        if ((uVar6 & 1) != 0) {
          fVar1 = fStack_6c;
        }
        fVar2 = fStack_80;
        if ((uVar6 & 2) != 0) {
          fVar2 = fStack_68;
        }
        fVar3 = fStack_7c;
        if ((uVar6 & 4) != 0) {
          fVar3 = fStack_64;
        }
        pfVar7[-1] = fVar1;
        uVar6 = uVar6 + 1;
        *pfVar7 = fVar2;
        pfVar7[1] = fVar3;
        pfVar7 = pfVar7 + 3;
      } while ((int)uVar6 < 8);
      if (((*(float *)(iVar8 + 0x54) != _DAT_100dd5f8) ||
          (*(float *)(iVar8 + 0x58) != _DAT_100dd5f8)) ||
         (*(float *)(iVar8 + 0x5c) != _DAT_100dd5f8)) {
        FUN_10083c20(iVar8 + 0x54,&fStack_9c,&fStack_90,&fStack_78);
        iVar8 = 8;
        pfVar7 = afStack_5c;
        do {
          fVar1 = pfVar7[-1];
          fVar2 = *pfVar7;
          fVar3 = pfVar7[1];
          iVar8 = iVar8 + -1;
          pfVar7[-1] = fStack_9c * fVar1 + fStack_98 * fVar2 + fStack_94 * fVar3;
          *pfVar7 = fStack_90 * fVar1 + fStack_8c * fVar2 + fStack_88 * fVar3;
          pfVar7[1] = fStack_78 * fVar1 + fStack_74 * fVar2 + fStack_70 * fVar3;
          pfVar7 = pfVar7 + 3;
        } while (iVar8 != 0);
      }
      iVar8 = 8;
      pfVar7 = afStack_5c;
      do {
        iVar8 = iVar8 + -1;
        pfVar7[-1] = fVar9 + pfVar7[-1];
        *pfVar7 = fVar10 + *pfVar7;
        pfVar7[1] = fVar5 + pfVar7[1];
        pfVar7 = pfVar7 + 3;
      } while (iVar8 != 0);
      piVar11 = (int *)0x101151e0;
      do {
        FUN_10083640(auStack_60 + piVar11[-1] * 0xc,auStack_60 + piVar11[-2] * 0xc,
                     auStack_60 + *piVar11 * 0xc,auStack_60 + piVar11[1] * 0xc,param_2,param_3);
        piVar11 = piVar11 + 4;
      } while ((int)piVar11 < 0x10115240);
      return;
    }
    uVar6 = 0;
    pfVar7 = afStack_5c;
    do {
      if ((uVar6 & 1) == 0) {
        fVar9 = *(float *)(iVar8 + 0x44);
      }
      else {
        fVar9 = *(float *)(iVar8 + 0x38);
      }
      if ((uVar6 & 2) == 0) {
        fVar10 = *(float *)(iVar8 + 0x48);
      }
      else {
        fVar10 = *(float *)(iVar8 + 0x3c);
      }
      if ((uVar6 & 4) == 0) {
        fVar5 = *(float *)(iVar8 + 0x4c);
      }
      else {
        fVar5 = *(float *)(iVar8 + 0x40);
      }
      uVar6 = uVar6 + 1;
      fVar1 = *(float *)(iVar8 + 0x28);
      fVar2 = *(float *)(iVar8 + 0x2c);
      pfVar7[-1] = fVar9 + *(float *)(iVar8 + 0x24);
      *pfVar7 = fVar10 + fVar1;
      pfVar7[1] = fVar5 + fVar2;
      pfVar7 = pfVar7 + 3;
    } while ((int)uVar6 < 8);
    piVar11 = (int *)0x101151e0;
    do {
      FUN_10083640(auStack_60 + piVar11[-1] * 0xc,auStack_60 + piVar11[-2] * 0xc,
                   auStack_60 + *piVar11 * 0xc,auStack_60 + piVar11[1] * 0xc,param_2,param_3);
      piVar11 = piVar11 + 4;
    } while ((int)piVar11 < 0x10115240);
  }
  return;
}

