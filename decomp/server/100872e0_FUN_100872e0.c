
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100872e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_8c [9];
  undefined4 uStackY_68;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [3];
  float local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(DAT_10126a38 + 0x1fc) == 3) || (*(int *)(DAT_10126a38 + 0x200) == 0)) {
    fVar11 = FUN_100841e0((float *)(DAT_10126a38 + 0x5c));
    if ((float10)_DAT_100dd618 <= fVar11) {
      iVar5 = *(int *)(DAT_10126a38 + 0x4f4f0);
      fVar12 = fVar11;
      if (fVar11 < (float10)*(float *)(iVar5 + 4)) {
        fVar12 = (float10)*(float *)(iVar5 + 4);
      }
      fVar12 = fVar11 - fVar12 * (float10)*(float *)(DAT_10126a38 + 0x10) *
                        (float10)*(float *)(iVar5 + 0x1c) * (float10)_DAT_100dd650;
      if (fVar12 < (float10)_DAT_100dd5f8) {
        fVar12 = (float10)_DAT_100dd5f8;
      }
      FUN_10084280((float *)(DAT_10126a38 + 0x5c),(float)(fVar12 / fVar11),
                   (float *)(DAT_10126a38 + 0x5c));
    }
    else {
      *(undefined4 *)(DAT_10126a38 + 0x5c) = DAT_10124914;
      *(undefined4 *)(DAT_10126a38 + 0x60) = DAT_10124918;
      *(undefined4 *)(DAT_10126a38 + 100) = DAT_1012491c;
    }
    fVar3 = *(float *)(DAT_10126a38 + 0x45468);
    fVar4 = *(float *)(DAT_10126a38 + 0x4546c);
    FUN_10084210((float *)(DAT_10126a38 + 0x14));
    FUN_10084210((float *)(DAT_10126a38 + 0x20));
    pfVar6 = (float *)(DAT_10126a38 + 0x14);
    iVar5 = 3;
    pfVar8 = local_24;
    do {
      pfVar1 = pfVar6 + 3;
      fVar2 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      iVar5 = iVar5 + -1;
      *pfVar8 = fVar3 * fVar2 + fVar4 * *pfVar1;
      pfVar8 = pfVar8 + 1;
    } while (iVar5 != 0);
    local_30[2] = local_24[2] + *(float *)(DAT_10126a38 + 0x45470);
    local_30[0] = local_24[0];
    local_30[1] = local_24[1];
    local_24[2] = local_30[2];
    fVar11 = (float10)FUN_10084210(local_30);
    iVar5 = *(int *)(DAT_10126a38 + 0x4f4f0);
    if ((float10)*(float *)(iVar5 + 0xc) < fVar11) {
      FUN_10084280(local_24,(float)((float10)*(float *)(iVar5 + 0xc) / fVar11),local_24);
      iVar5 = *(int *)(DAT_10126a38 + 0x4f4f0);
      fVar11 = (float10)*(float *)(iVar5 + 0xc);
    }
    fVar12 = fVar11 - ((float10)local_30[0] * (float10)*(float *)(DAT_10126a38 + 0x5c) +
                      (float10)local_30[1] * (float10)*(float *)(DAT_10126a38 + 0x60) +
                      (float10)local_30[2] * (float10)*(float *)(DAT_10126a38 + 100));
    fVar3 = (float)fVar12;
    if ((float10)_DAT_100dd5f8 < fVar12) {
      fVar11 = (float10)*(float *)(iVar5 + 0x10) * (float10)*(float *)(DAT_10126a38 + 0x10) * fVar11
      ;
      if ((float10)fVar3 < fVar11) {
        fVar11 = (float10)fVar3;
      }
      iVar5 = 0x5c;
      do {
        iVar10 = iVar5 + 4;
        *(float *)(iVar5 + DAT_10126a38) =
             (float)(fVar11 * (float10)*(float *)((int)afStackY_8c + iVar5) +
                    (float10)*(float *)(iVar5 + DAT_10126a38));
        iVar5 = iVar10;
      } while (iVar10 < 0x68);
      FUN_100840c0((float *)(DAT_10126a38 + 0x38),*(float *)(DAT_10126a38 + 0x10),
                   (float *)(DAT_10126a38 + 0x5c),(float *)(DAT_10126a38 + 0x38));
      return;
    }
  }
  else {
    iVar5 = *(int *)(DAT_10126a38 + 0x24c);
    iVar10 = 0;
    if (0 < iVar5) {
      piVar9 = (int *)(DAT_10126a38 + 0x2a0);
      do {
        if (*piVar9 == *(int *)(DAT_10126a38 + 0x200)) break;
        iVar10 = iVar10 + 1;
        piVar9 = piVar9 + 0x38;
      } while (iVar10 < iVar5);
    }
    if (iVar10 != iVar5) {
      local_24[3] = (float)DAT_10124914;
      local_14 = DAT_10124918;
      local_10 = DAT_1012491c;
      iVar5 = *(int *)(DAT_10126a38 + 0x1fc);
      if ((iVar5 == 4) && (*(int *)(DAT_10126a38 + 0x204) != 0)) {
        iVar7 = 0;
        if (0 < *(int *)(DAT_10126a38 + 0x24c)) {
          piVar9 = (int *)(DAT_10126a38 + 0x2a0);
          do {
            if (*piVar9 == *(int *)(DAT_10126a38 + 0x204)) break;
            iVar7 = iVar7 + 1;
            piVar9 = piVar9 + 0x38;
          } while (iVar7 < *(int *)(DAT_10126a38 + 0x24c));
        }
      }
      if (iVar5 == 1) {
        iVar5 = DAT_10126a38 + iVar10 * 0xe0;
        local_38 = *(undefined4 *)(iVar5 + 0x2a8);
        local_34 = *(undefined4 *)(iVar5 + 0x2ac);
        local_3c = 0.0;
      }
      else if (iVar5 != 4) {
        local_3c = *(float *)(DAT_10126a38 + 0x44);
        local_38 = *(undefined4 *)(DAT_10126a38 + 0x48);
        local_34 = *(undefined4 *)(DAT_10126a38 + 0x4c);
      }
      uStackY_68 = 0x100873f6;
      FUN_10087210(&local_3c,iVar10,local_24 + 3,&local_c);
      *(float *)(DAT_10126a38 + 0x38) = local_c;
      *(undefined4 *)(DAT_10126a38 + 0x3c) = local_8;
      *(undefined4 *)(DAT_10126a38 + 0x40) = local_4;
      *(float *)(DAT_10126a38 + 0x44) = local_3c;
      *(undefined4 *)(DAT_10126a38 + 0x48) = local_38;
      *(undefined4 *)(DAT_10126a38 + 0x4c) = local_34;
      *(undefined4 *)(DAT_10126a38 + 0x5c) = DAT_10124914;
      *(undefined4 *)(DAT_10126a38 + 0x60) = DAT_10124918;
      *(undefined4 *)(DAT_10126a38 + 100) = DAT_1012491c;
      return;
    }
  }
  return;
}

