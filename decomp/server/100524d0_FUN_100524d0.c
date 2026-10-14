
void __thiscall FUN_100524d0(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x314);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *(float *)(param_1 + 0x324) = fVar1 * *param_3;
  *(float *)(param_1 + 0x328) = fVar1 * fVar2;
  *(float *)(param_1 + 0x32c) = fVar1 * fVar3;
  return;
}

