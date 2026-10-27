
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10068b70(int param_1)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined4 *puVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  iVar2 = *(int *)(param_1 + 4);
  local_10 = *(float *)(param_1 + 0x324) + *(float *)(iVar2 + 0x58);
  local_14 = *(float *)(param_1 + 800) + *(float *)(iVar2 + 0x54);
  local_18 = *(float *)(param_1 + 0x31c) + *(float *)(iVar2 + 0x50);
  FUN_100af210(&local_18);
  if (_DAT_100dd5f8 <=
      *(float *)(param_1 + 0x340) * *(float *)(DAT_10122044 + 0x40) +
      *(float *)(param_1 + 0x344) * *(float *)(DAT_10122044 + 0x44) +
      *(float *)(param_1 + 0x348) * *(float *)(DAT_10122044 + 0x48)) {
    if (_DAT_100de530 < *(float *)(param_1 + 800)) {
      fVar4 = *(float *)(param_1 + 800) - _DAT_100dd620;
      goto LAB_10068c1b;
    }
  }
  else if (*(float *)(param_1 + 800) < _DAT_100ddaec) {
    fVar4 = *(float *)(param_1 + 800) + _DAT_100dd620;
LAB_10068c1b:
    *(float *)(param_1 + 800) = fVar4;
  }
  *(float *)(param_1 + 800) = *(float *)(param_1 + 800) * (float)_DAT_100de518;
  local_4 = *(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x318) +
            *(float *)(*(int *)(param_1 + 4) + 0x10) +
            *(float *)(param_1 + 0x308) * *(float *)(DAT_10122044 + 0x3c) * _DAT_100ddacc;
  FUN_100af210((float *)(*(int *)(param_1 + 4) + 0x50));
  pfVar1 = (float *)(param_1 + 0x310);
  *pfVar1 = *(float *)(DAT_10122044 + 0x34) * *(float *)(param_1 + 0x308) + *pfVar1;
  *(float *)(param_1 + 0x314) =
       *(float *)(DAT_10122044 + 0x38) * *(float *)(param_1 + 0x308) + *(float *)(param_1 + 0x314);
  *(float *)(param_1 + 0x318) =
       *(float *)(DAT_10122044 + 0x3c) * *(float *)(param_1 + 0x308) + *(float *)(param_1 + 0x318);
  *pfVar1 = ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x40)) * (float)_DAT_100de4f0) *
            *pfVar1;
  *(float *)(param_1 + 0x314) =
       ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x44)) * (float)_DAT_100de4f0) *
       *(float *)(param_1 + 0x314);
  *(float *)(param_1 + 0x318) =
       ((float)_DAT_100dd628 - ABS(*(float *)(DAT_10122044 + 0x48)) * (float)_DAT_100de4f0) *
       *(float *)(param_1 + 0x318);
  FUN_10001d60(&local_18,*pfVar1 * _DAT_100de4e8,*(float *)(param_1 + 0x314) * _DAT_100de4e8,
               *(float *)(param_1 + 0x318) * _DAT_100de4e8);
  *pfVar1 = local_18;
  *(float *)(param_1 + 0x314) = local_14;
  bVar3 = _DAT_100dd61c <= *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x318) = local_10;
  if ((bVar3) || (*(float *)(param_1 + 0x354) <= local_4)) {
    if ((*(float *)(param_1 + 0x308) <= _DAT_100de49c) || (local_4 <= *(float *)(param_1 + 0x354)))
    goto LAB_10068dc1;
    fVar4 = *(float *)(param_1 + 0x308) - _DAT_100dd63c;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x308) + _DAT_100dd63c;
  }
  *(float *)(param_1 + 0x308) = fVar4;
LAB_10068dc1:
  FUN_10001d60(&local_18,*pfVar1 * _DAT_100de1f0,*(float *)(param_1 + 0x314) * _DAT_100de1f0,
               *(float *)(param_1 + 0x318) * _DAT_100de1f0);
  iVar2 = *(int *)(param_1 + 4);
  FUN_10001d60(local_c,local_18 + *(float *)(iVar2 + 8),local_14 + *(float *)(iVar2 + 0xc),
               local_10 + *(float *)(iVar2 + 0x10));
  FUN_100afe10(param_1,local_c);
  FUN_10001d60(local_c,*(float *)(param_1 + 0x31c) * _DAT_100de1f0,
               *(float *)(param_1 + 800) * _DAT_100de1f0,*(float *)(param_1 + 0x324) * _DAT_100de1f0
              );
  puVar5 = (undefined4 *)FUN_1000b550((void *)(*(int *)(param_1 + 4) + 0x50),&local_18,local_c);
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x50) = *puVar5;
  *(undefined4 *)(iVar2 + 0x54) = puVar5[1];
  *(undefined4 *)(iVar2 + 0x58) = puVar5[2];
  return;
}

