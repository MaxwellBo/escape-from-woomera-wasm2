
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10009690(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = *(float *)(iVar1 + 0xc) - _DAT_1005a184;
  fVar3 = *(float *)(iVar1 + 0x10) - _DAT_1005c36c;
  *(float *)(iVar1 + 0xc4) = *(float *)(iVar1 + 8) - _DAT_1005a184;
  *(float *)(iVar1 + 200) = fVar2;
  *(float *)(iVar1 + 0xcc) = fVar3;
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = *(float *)(iVar1 + 0xc) + _DAT_1005a184;
  fVar3 = *(float *)(iVar1 + 0x10) + _DAT_1005c368;
  *(float *)(iVar1 + 0xd0) = *(float *)(iVar1 + 8) + _DAT_1005a184;
  *(float *)(iVar1 + 0xd4) = fVar2;
  *(float *)(iVar1 + 0xd8) = fVar3;
  return;
}

