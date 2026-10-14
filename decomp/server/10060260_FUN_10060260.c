
void __thiscall FUN_10060260(void *this,float param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_4;
  
  if (*(int *)((int)this + 0x284) == 0xb) {
    iVar1 = *(int *)((int)this + 4);
    fVar2 = -param_2;
    param_3 = local_4 - *(float *)(iVar1 + 0x10);
    param_2 = param_1 - *(float *)(iVar1 + 0xc);
    param_1 = fVar2 - *(float *)(iVar1 + 8);
    fVar3 = (float10)FUN_100afde0(&param_1);
    *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar3;
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)((int)this + 0x284) == 0xc) {
    param_3 = local_4 - *(float *)(iVar1 + 0x10);
    fVar2 = param_1 - *(float *)(iVar1 + 0xc);
    param_1 = param_2 - *(float *)(iVar1 + 8);
    param_2 = fVar2;
    fVar3 = (float10)FUN_100afde0(&param_1);
    *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar3;
    return;
  }
  param_3 = param_3 - *(float *)(iVar1 + 0x10);
  param_2 = param_2 - *(float *)(iVar1 + 0xc);
  param_1 = param_1 - *(float *)(iVar1 + 8);
  fVar3 = (float10)FUN_100afde0(&param_1);
  *(float *)(*(int *)((int)this + 4) + 0xac) = (float)fVar3;
  return;
}

