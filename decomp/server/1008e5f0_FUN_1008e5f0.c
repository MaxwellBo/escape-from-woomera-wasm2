
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008e5f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar4 = FUN_1008e580(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 4);
    iVar5 = FUN_10019460((uint *)(param_1 + 0x168));
    iVar5 = *(int *)(iVar5 + 4);
    fVar2 = *(float *)(iVar5 + 8) - *(float *)(iVar4 + 8);
    fVar3 = *(float *)(iVar5 + 0xc) - *(float *)(iVar4 + 0xc);
    fVar1 = *(float *)(iVar5 + 0x10) - *(float *)(iVar4 + 0x10);
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) <= _DAT_100dd61c) {
      piVar6 = (int *)FUN_10019460((uint *)(param_1 + 0x168));
      (**(code **)(*piVar6 + 100))(DAT_10126b78,0);
      *(float *)(param_1 + 0x388) = *DAT_10122044 + _DAT_100de498;
    }
  }
  return;
}

