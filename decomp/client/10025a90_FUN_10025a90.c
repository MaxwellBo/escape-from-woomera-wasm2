
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10025a90(void *param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  int iStack_18;
  float fStack_c;
  
  iStack_18 = 0;
  if (_DAT_10059a18 < *(float *)((int)param_1 + 0xd8)) {
    fVar3 = DAT_100a3a64 - *(float *)((int)param_1 + 0xd8);
    if (DAT_100a3a64 < *(float *)((int)param_1 + 0xd8)) {
      *(float *)((int)param_1 + 0xd8) = DAT_100a3a64;
    }
    iVar11 = *(int *)((int)param_1 + 0xdc);
    fStack_c = *(float *)(iVar11 + 0x14);
    if (fVar3 <= fStack_c + *(float *)(iVar11 + 0x18) + *(float *)(iVar11 + 0x1c)) {
      FUN_10025390(fStack_c,*(float *)(iVar11 + 0x18),*(float *)(iVar11 + 0x1c),fVar3);
      iVar9 = *(int *)((int)param_1 + 0xe4) * 0x10;
      piVar10 = (int *)(*(int *)((int)param_1 + 0xe0) * 0x10 + DAT_100a3ab4);
      iVar12 = *(int *)(iVar9 + 4 + DAT_100a3ab4) - *(int *)(iVar9 + DAT_100a3ab4);
      iVar11 = *(int *)(iVar9 + DAT_100a3ab4 + 0xc);
      iVar9 = *(int *)(iVar9 + DAT_100a3ab4 + 8);
      iVar4 = FUN_10025430(*(float *)(*(int *)((int)param_1 + 0xdc) + 0xc),
                           (piVar10[1] - *piVar10) + iVar12);
      iVar11 = FUN_100254b0(*(float *)(*(int *)((int)param_1 + 0xdc) + 0x10),iVar11 - iVar9);
      if (*(int *)((int)param_1 + 0xe4) < 0) {
        fStack_c = 0.0;
      }
      else {
        fStack_c = *(float *)(DAT_100a3ab0 + *(int *)((int)param_1 + 0xe4) * 4);
      }
      lVar14 = __ftol();
      uVar5 = (undefined4)lVar14;
      lVar14 = __ftol();
      uVar6 = (undefined4)lVar14;
      lVar14 = __ftol();
      (*DAT_100a5000)(fStack_c,(int)lVar14,uVar6,uVar5);
      (*DAT_100a500c)(0,iVar4,iVar11,*(int *)((int)param_1 + 0xe4) * 0x10 + DAT_100a3ab4);
      if (*(int *)((int)param_1 + 0xe0) < 0) {
        fStack_c = 0.0;
      }
      else {
        fStack_c = *(float *)(DAT_100a3ab0 + *(int *)((int)param_1 + 0xe0) * 4);
      }
      lVar14 = __ftol();
      uVar5 = (undefined4)lVar14;
      lVar14 = __ftol();
      uVar6 = (undefined4)lVar14;
      lVar14 = __ftol();
      (*DAT_100a5000)(fStack_c,(int)lVar14,uVar6,uVar5);
      (*DAT_100a500c)(0,iVar4 + iVar12,iVar11,*(int *)((int)param_1 + 0xe0) * 0x10 + DAT_100a3ab4);
      iStack_18 = 1;
    }
    else {
      *(undefined4 *)((int)param_1 + 0xd8) = 0;
    }
  }
  pfVar7 = (float *)((int)param_1 + 0x54);
  iVar11 = 0x10;
  do {
    if ((pfVar7[-0x10] != 0.0) && (DAT_100a3a64 < *pfVar7)) {
      *pfVar7 = ((DAT_100a3a64 + *(float *)((int)param_1 + 0x98)) - *pfVar7) + (float)_DAT_1005acd0;
    }
    pfVar7 = pfVar7 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  piVar10 = (int *)((int)param_1 + 0x14);
  iVar11 = 0x10;
  do {
    piVar2 = (int *)*piVar10;
    if (piVar2 != (int *)0x0) {
      iVar9 = *piVar2;
      if (-1 < iVar9) {
        if (iVar9 < 2) {
          fStack_c = (float)piVar10[0x10] + (float)piVar2[7] + (float)piVar2[6] + (float)piVar2[5];
        }
        else if (iVar9 == 2) {
          uVar8 = 0xffffffff;
          pcVar13 = (char *)piVar2[10];
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          fStack_c = (float)(~uVar8 - 1) * (float)piVar2[5] + (float)piVar10[0x10] +
                     (float)piVar2[7] + (float)piVar2[6];
        }
      }
      if (fStack_c < param_2) {
        *piVar10 = 0;
      }
      else {
        FUN_10025890(param_1,(int)piVar2,(int)(param_2 - (float)piVar10[0x10]));
        iStack_18 = iStack_18 + 1;
      }
    }
    piVar10 = piVar10 + 1;
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      *(float *)((int)param_1 + 0x98) = DAT_100a3a64;
      if (iStack_18 == 0) {
        *(uint *)((int)param_1 + 0x10) = *(uint *)((int)param_1 + 0x10) & 0xfffffffe;
      }
      return 1;
    }
  } while( true );
}

