
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100866a0(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_dc [9];
  undefined4 uStackY_b8;
  int *piStackY_b4;
  float *pfStackY_b0;
  float *pfStackY_ac;
  undefined4 uStackY_a8;
  undefined4 uStackY_a4;
  float local_88;
  float local_80 [4];
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44 [5];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pfVar3 = (float *)(DAT_10126a38 + 0x20);
  iVar7 = 3;
  pfVar6 = local_80;
  do {
    pfVar1 = pfVar3 + -3;
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar2 * *(float *)(DAT_10126a38 + 0x4546c) +
              *pfVar1 * *(float *)(DAT_10126a38 + 0x45468);
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  if ((((*(float *)(DAT_10126a38 + 0x45468) == _DAT_100dd5f8) &&
       (*(float *)(DAT_10126a38 + 0x4546c) == _DAT_100dd5f8)) &&
      (*(float *)(DAT_10126a38 + 0x45470) == _DAT_100dd5f8)) &&
     (*(int *)(DAT_10126a38 + 0xe8) != -0x11)) {
    local_80[2] = local_80[2] - _DAT_100de498;
  }
  else {
    local_80[2] = local_80[2] + *(float *)(DAT_10126a38 + 0x45470);
  }
  local_5c = local_80[0];
  local_58 = local_80[1];
  local_54 = local_80[2];
  fVar9 = (float10)FUN_10084210(&local_5c);
  if ((float10)*(float *)(DAT_10126a38 + 500) < fVar9) {
    FUN_10084280(local_80,(float)((float10)*(float *)(DAT_10126a38 + 500) / fVar9),local_80);
    fVar9 = (float10)*(float *)(DAT_10126a38 + 500);
  }
  fVar2 = (float)(fVar9 * (float10)_DAT_100dd600);
  *(float *)(DAT_10126a38 + 0x5c) =
       *(float *)(DAT_10126a38 + 0x74) + *(float *)(DAT_10126a38 + 0x5c);
  *(float *)(DAT_10126a38 + 0x60) =
       *(float *)(DAT_10126a38 + 0x78) + *(float *)(DAT_10126a38 + 0x60);
  *(float *)(DAT_10126a38 + 100) = *(float *)(DAT_10126a38 + 0x7c) + *(float *)(DAT_10126a38 + 100);
  local_50 = *(float *)(DAT_10126a38 + 0x5c);
  local_4c = *(undefined4 *)(DAT_10126a38 + 0x60);
  local_48 = *(undefined4 *)(DAT_10126a38 + 100);
  fVar9 = (float10)FUN_10084210(&local_50);
  if (fVar9 == (float10)_DAT_100dd5f8) {
    local_88 = 0.0;
  }
  else {
    fVar10 = fVar9 - (float10)*(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x1c) *
                     (float10)*(float *)(DAT_10126a38 + 0xc4) *
                     (float10)*(float *)(DAT_10126a38 + 0x10) * fVar9;
    local_88 = (float)fVar10;
    if (fVar10 < (float10)_DAT_100dd5f8) {
      local_88 = 0.0;
    }
    FUN_10084280((float *)(DAT_10126a38 + 0x5c),(float)((float10)local_88 / fVar9),
                 (float *)(DAT_10126a38 + 0x5c));
  }
  if (_DAT_100de1f0 <= fVar2) {
    local_88 = fVar2 - local_88;
    if (_DAT_100dd5f8 < local_88) {
      FUN_10084210(local_80);
      fVar2 = *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x10) * *(float *)(DAT_10126a38 + 0xc4)
              * *(float *)(DAT_10126a38 + 0x10) * fVar2;
      if (local_88 < fVar2) {
        fVar2 = local_88;
      }
      iVar7 = 0x5c;
      do {
        iVar4 = iVar7 + 4;
        *(float *)(iVar7 + DAT_10126a38) =
             fVar2 * *(float *)((int)afStackY_dc + iVar7) + *(float *)(iVar7 + DAT_10126a38);
        iVar7 = iVar4;
      } while (iVar4 < 0x68);
    }
    uStackY_a4 = 0x10086901;
    FUN_100840c0((float *)(DAT_10126a38 + 0x38),*(float *)(DAT_10126a38 + 0x10),
                 (float *)(DAT_10126a38 + 0x5c),local_80 + 3);
    local_68 = local_80[3];
    local_64 = local_70;
    uStackY_a4 = 0xffffffff;
    pfStackY_ac = local_80 + 3;
    uStackY_a8 = 0;
    pfStackY_b0 = &local_68;
    piStackY_b4 = local_44;
    local_60 = local_6c + *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x30) + _DAT_100dd618;
    uStackY_b8 = 0x1008694e;
    piVar5 = (int *)(**(code **)(DAT_10126a38 + 0x4f580))();
    piVar8 = local_44;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar8 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_44[1] == 0) && (local_44[0] == 0)) {
      *(undefined4 *)(DAT_10126a38 + 0x38) = uStack_30;
      *(undefined4 *)(DAT_10126a38 + 0x3c) = uStack_2c;
      *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_28;
      return;
    }
    FUN_10085990();
  }
  return;
}

