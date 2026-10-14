
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10065d20(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  
  if ((DAT_10121db4 != 0) && (*(float *)(DAT_10121db4 + 0xc) == _DAT_100dd5f8)) {
    return 0;
  }
  bVar3 = FUN_1007ce90(param_1);
  if ((CONCAT31(extraout_var,bVar3) == 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 4) + 0x24),
     fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x20),
     SQRT(fVar1 * fVar1 + fVar2 * fVar2) <= _DAT_100df28c)) {
    return 0;
  }
  return 1;
}

