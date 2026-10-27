
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10071c50(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x308) == 0) {
    (*DAT_10121efc)(1,s_osprey_missing_target_10113698);
    return;
  }
  pfVar1 = (float *)(param_1 + 0x330);
  local_c = 0.0;
  local_4 = 0;
  *(float *)(param_1 + 0x324) = *pfVar1;
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x350);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x31c);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 800);
  iVar5 = *(int *)(*(int *)(param_1 + 0x308) + 4);
  *pfVar1 = *(float *)(iVar5 + 8);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(iVar5 + 0xc);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(iVar5 + 0x10);
  iVar5 = *(int *)(*(int *)(param_1 + 0x308) + 4);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(iVar5 + 0x58);
  local_8 = *(undefined4 *)(param_1 + 0x34c);
  FUN_100af210(&local_c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x308) + 4);
  if (*(float *)(iVar5 + 0x1f8) != _DAT_100dd5f8) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = *(undefined4 *)(iVar5 + 0x1f8);
  }
  iVar5 = *(int *)(param_1 + 4);
  fVar2 = *(float *)(iVar5 + 0x1f8);
  fVar3 = *(float *)(DAT_10122044 + 0x2c);
  fVar4 = *(float *)(DAT_10122044 + 0x30);
  *(float *)(param_1 + 0x318) = fVar2 * *(float *)(DAT_10122044 + 0x28);
  *(float *)(param_1 + 0x31c) = fVar2 * fVar3;
  *(float *)(param_1 + 800) = fVar2 * fVar4;
  *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x354) + *(float *)(param_1 + 0x358);
  fVar2 = *(float *)(param_1 + 0x324) - *pfVar1;
  fVar4 = *(float *)(param_1 + 0x328) - *(float *)(param_1 + 0x334);
  fVar3 = *(float *)(param_1 + 0x32c) - *(float *)(param_1 + 0x338);
  fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  *(float *)(param_1 + 0x358) =
       (fVar2 + fVar2) /
       (SQRT(*(float *)(param_1 + 0x314) * *(float *)(param_1 + 0x314) +
             *(float *)(param_1 + 0x310) * *(float *)(param_1 + 0x310) +
             *(float *)(param_1 + 0x30c) * *(float *)(param_1 + 0x30c)) + *(float *)(iVar5 + 0x1f8))
  ;
  fVar2 = *(float *)(param_1 + 0x340) - *(float *)(param_1 + 0x34c);
  if (_DAT_100de530 <= fVar2) {
    if (fVar2 <= _DAT_100ddaec) goto LAB_10071e67;
    fVar2 = *(float *)(param_1 + 0x340) - _DAT_100ddae8;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x340) + _DAT_100ddae8;
  }
  *(float *)(param_1 + 0x340) = fVar2;
LAB_10071e67:
  if (*(float *)(iVar5 + 0x1f8) < _DAT_100de4a8) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x368) = 0xc2b40000;
  return;
}

