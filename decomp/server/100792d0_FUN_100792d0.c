
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100792d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (((param_1 != 0) && (iVar1 = *(int *)((int)this + 0x184), iVar1 != 0)) &&
     (((iVar2 = *(int *)(iVar1 + 0xbc), iVar2 == param_1 ||
       ((*(int *)(param_1 + 0xc4) != 0 && (iVar2 == *(int *)(param_1 + 0xc4))))) ||
      ((*(int *)(param_1 + 0xc0) != 0 && (iVar2 == *(int *)(param_1 + 0xc0))))))) {
    iVar2 = *(int *)(iVar1 + 4);
    if (*(float *)(iVar2 + 0x1f8) != _DAT_100dd5f8) {
      return 1;
    }
    fVar3 = *(float *)(*(int *)((int)this + 4) + 8) - *(float *)(iVar2 + 8);
    fVar4 = *(float *)(*(int *)((int)this + 4) + 0xc) - *(float *)(iVar2 + 0xc);
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    if (fVar3 < *(float *)(iVar1 + 0xc0)) {
      return 2;
    }
    if (fVar3 <= *(float *)(iVar1 + 0xc0) + _DAT_100df288) {
      return 1;
    }
  }
  return 0;
}

