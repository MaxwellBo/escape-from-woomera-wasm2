
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10035db0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x270) * 0x10;
  iVar1 = iVar5 + param_1;
  if ((*(byte *)(iVar5 + 0x1f8 + param_1) & 0x80) != 0) {
    iVar5 = *(int *)(param_1 + 4);
    fVar2 = *(float *)(iVar1 + 0x1ec) - *(float *)(iVar5 + 8);
    fVar3 = *(float *)(iVar1 + 0x1f0) - *(float *)(iVar5 + 0xc);
    fVar4 = *(float *)(iVar1 + 500) - *(float *)(iVar5 + 0x10);
    param_2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  }
  if (*(float *)(DAT_10122044 + 4) * *(float *)(param_1 + 0xcc) + _DAT_100ddb10 < param_2) {
    return 0;
  }
  return 1;
}

