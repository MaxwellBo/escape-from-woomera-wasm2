
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_1009a810(int param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar1 = (uint *)(param_1 + 0x168);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    piVar3 = (int *)FUN_10019460(puVar1);
    iVar4 = (**(code **)(*piVar3 + 0xb8))();
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 4);
      iVar5 = FUN_10019460(puVar1);
      iVar5 = *(int *)(iVar5 + 4);
      fVar6 = (float10)*(float *)(iVar5 + 8) - (float10)*(float *)(iVar4 + 8);
      fVar7 = (float10)*(float *)(iVar5 + 0xc) - (float10)*(float *)(iVar4 + 0xc);
      fVar8 = (float10)*(float *)(iVar5 + 0x10) - (float10)*(float *)(iVar4 + 0x10);
      return SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
    }
  }
  return (float10)_DAT_100df2a0;
}

