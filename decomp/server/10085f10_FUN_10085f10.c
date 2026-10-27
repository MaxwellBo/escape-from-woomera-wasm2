
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085f10(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float local_a4 [4];
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88 [4];
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  undefined1 auStack_44 [68];
  
  local_a4[3] = *(float *)(DAT_10126a38 + 0x45468);
  fVar3 = *(float *)(DAT_10126a38 + 0x4546c);
  *(undefined4 *)(DAT_10126a38 + 0x1c) = 0;
  *(undefined4 *)(DAT_10126a38 + 0x28) = 0;
  FUN_10084210((float *)(DAT_10126a38 + 0x14));
  FUN_10084210((float *)(DAT_10126a38 + 0x20));
  pfVar4 = (float *)(DAT_10126a38 + 0x14);
  iVar8 = 2;
  pfVar6 = local_a4;
  do {
    pfVar1 = pfVar4 + 3;
    fVar2 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    iVar8 = iVar8 + -1;
    *pfVar6 = local_a4[3] * fVar2 + fVar3 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar8 != 0);
  local_a4[2] = 0.0;
  local_94 = local_a4[0];
  local_90 = local_a4[1];
  local_8c = 0;
  fVar10 = (float10)FUN_10084210(&local_94);
  local_e4 = (float)fVar10;
  if (*(float *)(DAT_10126a38 + 500) < local_e4) {
    FUN_10084280(local_a4,*(float *)(DAT_10126a38 + 500) / local_e4,local_a4);
    local_e4 = *(float *)(DAT_10126a38 + 500);
  }
  *(undefined4 *)(DAT_10126a38 + 100) = 0;
  FUN_10085e70(&local_94,local_e4,*(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x10));
  *(undefined4 *)(DAT_10126a38 + 100) = 0;
  *(float *)(DAT_10126a38 + 0x5c) =
       *(float *)(DAT_10126a38 + 0x74) + *(float *)(DAT_10126a38 + 0x5c);
  *(float *)(DAT_10126a38 + 0x60) =
       *(float *)(DAT_10126a38 + 0x78) + *(float *)(DAT_10126a38 + 0x60);
  *(float *)(DAT_10126a38 + 100) = *(float *)(DAT_10126a38 + 0x7c) + *(float *)(DAT_10126a38 + 100);
  fVar10 = FUN_100841e0((float *)(DAT_10126a38 + 0x5c));
  if ((float10)_DAT_100dd618 <= fVar10) {
    iVar8 = *(int *)(DAT_10126a38 + 0xe0);
    local_e0 = *(float *)(DAT_10126a38 + 0x5c) * *(float *)(DAT_10126a38 + 0x10) +
               *(float *)(DAT_10126a38 + 0x38);
    local_dc = *(float *)(DAT_10126a38 + 0x60) * *(float *)(DAT_10126a38 + 0x10) +
               *(float *)(DAT_10126a38 + 0x3c);
    local_d8 = *(float *)(DAT_10126a38 + 0x40);
    piVar5 = (int *)(**(code **)(DAT_10126a38 + 0x4f580))
                              (local_88,(float *)(DAT_10126a38 + 0x38),&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if (fStack_78 == _DAT_100dd618) {
      *(undefined4 *)(DAT_10126a38 + 0x38) = uStack_74;
      *(undefined4 *)(DAT_10126a38 + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_6c;
      return;
    }
    if (((iVar8 == -1) &&
        ((*(int *)(DAT_10126a38 + 0xe4) == 0 || (*(int *)(DAT_10126a38 + 0xe8) == -0x13)))) ||
       (*(float *)(DAT_10126a38 + 0xcc) != _DAT_100dd5f8)) {
      return;
    }
    fStack_d4 = *(float *)(DAT_10126a38 + 0x38);
    fStack_d0 = *(float *)(DAT_10126a38 + 0x3c);
    uStack_cc = *(undefined4 *)(DAT_10126a38 + 0x40);
    uStack_b0 = *(undefined4 *)(DAT_10126a38 + 0x5c);
    uStack_ac = *(undefined4 *)(DAT_10126a38 + 0x60);
    uStack_a8 = *(undefined4 *)(DAT_10126a38 + 100);
    FUN_10085990();
    fStack_c8 = *(float *)(DAT_10126a38 + 0x38);
    fStack_c4 = *(float *)(DAT_10126a38 + 0x3c);
    uStack_c0 = *(undefined4 *)(DAT_10126a38 + 0x40);
    uStack_bc = *(undefined4 *)(DAT_10126a38 + 0x5c);
    uStack_b8 = *(undefined4 *)(DAT_10126a38 + 0x60);
    uStack_b4 = *(undefined4 *)(DAT_10126a38 + 100);
    *(float *)(DAT_10126a38 + 0x38) = fStack_d4;
    *(float *)(DAT_10126a38 + 0x3c) = fStack_d0;
    *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_cc;
    *(undefined4 *)(DAT_10126a38 + 0x5c) = uStack_b0;
    *(undefined4 *)(DAT_10126a38 + 0x60) = uStack_ac;
    *(undefined4 *)(DAT_10126a38 + 100) = uStack_a8;
    local_e0 = *(float *)(DAT_10126a38 + 0x38);
    local_dc = *(float *)(DAT_10126a38 + 0x3c);
    local_d8 = *(float *)(DAT_10126a38 + 0x40) + *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_10126a38 + 0x4f580))
                              (auStack_44,DAT_10126a38 + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if ((local_88[1] == 0) && (local_88[0] == 0)) {
      *(undefined4 *)(DAT_10126a38 + 0x38) = uStack_74;
      *(undefined4 *)(DAT_10126a38 + 0x3c) = uStack_70;
      *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_6c;
    }
    FUN_10085990();
    local_e0 = *(float *)(DAT_10126a38 + 0x38);
    local_dc = *(float *)(DAT_10126a38 + 0x3c);
    local_d8 = *(float *)(DAT_10126a38 + 0x40) - *(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x30)
    ;
    piVar5 = (int *)(**(code **)(DAT_10126a38 + 0x4f580))
                              (auStack_44,DAT_10126a38 + 0x38,&local_e0,0,0xffffffff);
    piVar9 = local_88;
    for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar9 = piVar9 + 1;
    }
    if ((float)_DAT_100df298 <= fStack_60) {
      if ((local_88[1] == 0) && (local_88[0] == 0)) {
        *(undefined4 *)(DAT_10126a38 + 0x38) = uStack_74;
        *(undefined4 *)(DAT_10126a38 + 0x3c) = uStack_70;
        *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_6c;
      }
      *(undefined4 *)(DAT_10126a38 + 0x2c) = *(undefined4 *)(DAT_10126a38 + 0x38);
      *(undefined4 *)(DAT_10126a38 + 0x30) = *(undefined4 *)(DAT_10126a38 + 0x3c);
      *(undefined4 *)(DAT_10126a38 + 0x34) = *(undefined4 *)(DAT_10126a38 + 0x40);
      fVar2 = *(float *)(DAT_10126a38 + 0x30) - fStack_d0;
      fVar3 = *(float *)(DAT_10126a38 + 0x2c) - fStack_d4;
      if ((fStack_c4 - fStack_d0) * (fStack_c4 - fStack_d0) +
          (fStack_c8 - fStack_d4) * (fStack_c8 - fStack_d4) <= fVar2 * fVar2 + fVar3 * fVar3) {
        *(undefined4 *)(DAT_10126a38 + 100) = uStack_b4;
        return;
      }
    }
    *(float *)(DAT_10126a38 + 0x38) = fStack_c8;
    *(float *)(DAT_10126a38 + 0x3c) = fStack_c4;
    *(undefined4 *)(DAT_10126a38 + 0x40) = uStack_c0;
    *(undefined4 *)(DAT_10126a38 + 0x5c) = uStack_bc;
    *(undefined4 *)(DAT_10126a38 + 0x60) = uStack_b8;
    *(undefined4 *)(DAT_10126a38 + 100) = uStack_b4;
    return;
  }
  *(undefined4 *)(DAT_10126a38 + 0x5c) = 0;
  *(undefined4 *)(DAT_10126a38 + 0x60) = 0;
  *(undefined4 *)(DAT_10126a38 + 100) = 0;
  return;
}

