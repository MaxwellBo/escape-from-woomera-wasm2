
void __thiscall FUN_10003110(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 0x17c);
  fVar2 = *(float *)(iVar5 + 0x10);
  fVar3 = *(float *)(iVar5 + 0x178);
  fVar4 = *(float *)(iVar5 + 0xc);
  *param_2 = *(float *)(iVar5 + 0x174) + *(float *)(iVar5 + 8);
  param_2[1] = fVar3 + fVar4;
  param_2[2] = fVar1 + fVar2;
  return;
}

