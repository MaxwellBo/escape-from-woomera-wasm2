
void __thiscall FUN_10078460(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = *(int *)((int)this + 4);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(iVar3 + 0x14);
  fVar5 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *(float *)(iVar3 + 0x1c);
  fVar1 = *(float *)(param_1 + 0xe0);
  fVar2 = *(float *)(param_1 + 0xe4);
  *(float *)((int)this + 0xd4) = fVar4 + *(float *)(param_1 + 0xdc);
  *(float *)((int)this + 0xd8) = fVar5 + fVar1;
  *(float *)((int)this + 0xdc) = fVar6 + fVar2;
  fVar1 = *(float *)(param_1 + 0xec);
  fVar2 = *(float *)(param_1 + 0xf0);
  *(float *)((int)this + 0xe0) = fVar4 + *(float *)(param_1 + 0xe8);
  *(float *)((int)this + 0xe4) = fVar5 + fVar1;
  *(float *)((int)this + 0xe8) = fVar6 + fVar2;
  return;
}

