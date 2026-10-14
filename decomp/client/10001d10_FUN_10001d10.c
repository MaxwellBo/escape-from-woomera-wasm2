
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10001d10(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(iVar5 + 200);
  fVar2 = *(float *)(iVar5 + 0xd4);
  fVar3 = *(float *)(iVar5 + 0xcc);
  fVar4 = *(float *)(iVar5 + 0xd8);
  *param_2 = (*(float *)(iVar5 + 0xc4) + *(float *)(iVar5 + 0xd0)) * _DAT_10059cec;
  param_2[1] = (fVar1 + fVar2) * _DAT_10059cec;
  param_2[2] = (fVar3 + fVar4) * _DAT_10059cec;
  return;
}

