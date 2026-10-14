
void __thiscall FUN_1007b5a0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x178);
  fVar2 = *(float *)(iVar5 + 0xc);
  fVar3 = *(float *)(iVar5 + 0x17c);
  fVar4 = *(float *)(iVar5 + 0x10);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return;
}

