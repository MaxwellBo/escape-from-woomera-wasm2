
void __fastcall FUN_100a4130(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (*DAT_10121f28)(1);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 8))(0x3f000000);
    iVar1 = param_1[1];
    fVar2 = *(float *)(iVar5 + 0x88) - *(float *)(iVar1 + 8);
    fVar4 = *(float *)(iVar5 + 0x8c) - *(float *)(iVar1 + 0xc);
    fVar3 = *(float *)(iVar5 + 0x90) - *(float *)(iVar1 + 0x10);
    if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) <= *(float *)(iVar1 + 0x144)) {
      FUN_100a41a0((int)param_1);
    }
  }
  return;
}

