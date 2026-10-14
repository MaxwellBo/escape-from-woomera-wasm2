
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1008e580(int param_1)

{
  uint *puVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  
  if (*(float *)(param_1 + 0x388) <= *DAT_10122044) {
    puVar1 = (uint *)(param_1 + 0x168);
    bVar3 = FUN_10019450(puVar1);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      iVar4 = FUN_10019460(puVar1);
      fVar2 = *(float *)(*(int *)(iVar4 + 4) + 0x160);
      iVar4 = FUN_10019460(puVar1);
      if (fVar2 <= *(float *)(*(int *)(iVar4 + 4) + 0x1b0) * (float)_DAT_100dd648) {
        return 1;
      }
    }
  }
  return 0;
}

