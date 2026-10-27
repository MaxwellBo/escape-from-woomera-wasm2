
undefined4 __thiscall FUN_10019f50(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(param_1 + 4);
  if ((((*(float *)(iVar2 + 0xc4) <= *(float *)(iVar1 + 0xd0)) &&
       (*(float *)(iVar2 + 200) <= *(float *)(iVar1 + 0xd4))) &&
      (*(float *)(iVar2 + 0xcc) <= *(float *)(iVar1 + 0xd8))) &&
     (((*(float *)(iVar1 + 0xc4) <= *(float *)(iVar2 + 0xd0) &&
       (*(float *)(iVar1 + 200) <= *(float *)(iVar2 + 0xd4))) &&
      (*(float *)(iVar1 + 0xcc) <= *(float *)(iVar2 + 0xd8))))) {
    return 1;
  }
  return 0;
}

