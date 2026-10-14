
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100c59c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined2 uVar13;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar12;
  float10 fVar14;
  undefined4 local_1c;
  float local_18;
  float local_14;
  byte local_10 [4];
  char local_c [4];
  char local_8 [4];
  char local_4 [4];
  
  local_c = (char  [4])s_efw_electrician_101031bc._4_4_;
  local_10 = (byte  [4])s_efw_electrician_101031bc._0_4_;
  local_8 = (char  [4])s_efw_electrician_101031bc._8_4_;
  local_4 = (char  [4])s_efw_electrician_101031bc._12_4_;
  iVar11 = FUN_100af030(0,local_10);
  uVar12 = 0;
  if (iVar11 != 0) {
    iVar1 = *(int *)(iVar11 + 4);
    fVar2 = *(float *)(iVar1 + 8);
    fVar3 = *(float *)(iVar1 + 0xc);
    fVar4 = *(float *)(iVar1 + 0x10);
    iVar1 = *(int *)(param_1 + 4);
    fVar5 = *(float *)(iVar1 + 8);
    fVar6 = *(float *)(iVar1 + 0xc);
    fVar7 = *(float *)(iVar1 + 0x10);
    fVar9 = fVar5 - fVar2;
    local_18 = fVar6 - fVar3;
    local_14 = fVar7 - fVar4;
    fVar10 = SQRT(fVar9 * fVar9 + local_18 * local_18 + local_14 * local_14);
    uVar13 = (undefined2)((uint)fVar7 >> 0x10);
    if (fVar10 == _DAT_100dd5f8) {
      local_1c = 0;
      local_18 = 0.0;
      local_14 = 1.0;
    }
    else {
      fVar10 = _DAT_100dd618 / fVar10;
      FUN_10001d60(&local_1c,fVar9 * fVar10,local_18 * fVar10,local_14 * fVar10);
      uVar13 = extraout_var;
    }
    fVar2 = fVar2 - fVar5;
    fVar3 = fVar3 - fVar6;
    fVar4 = fVar4 - fVar7;
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
    if (fVar2 < _DAT_100dd658 != 0) {
      return CONCAT31((int3)(CONCAT22(uVar13,(ushort)(fVar2 < _DAT_100dd658) << 8 |
                                             (ushort)(NAN(fVar2) || NAN(_DAT_100dd658)) << 10 |
                                             (ushort)(fVar2 == _DAT_100dd658) << 0xe) >> 8),1);
    }
    FUN_100af200(*(int *)(iVar11 + 4) + 0x50);
    fVar14 = (float10)FUN_100c9190();
    fVar8 = (float10)_DAT_100f939c;
    uVar12 = CONCAT22(extraout_var_00,
                      (ushort)(fVar14 < fVar8) << 8 | (ushort)(NAN(fVar14) || NAN(fVar8)) << 10 |
                      (ushort)(fVar14 == fVar8) << 0xe);
    if (fVar14 < fVar8) {
      return CONCAT31((int3)((uint)uVar12 >> 8),1);
    }
  }
  return uVar12;
}

