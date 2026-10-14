
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100b7b80(int *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (param_5 == 2) {
    iVar2 = param_1[1];
    fStack_24 = *(float *)(iVar2 + 8) -
                (*(float *)(param_2 + 0xd0) + *(float *)(param_2 + 0xc4)) * _DAT_100dd614;
    fStack_20 = *(float *)(iVar2 + 0xc) -
                (*(float *)(param_2 + 0xd4) + *(float *)(param_2 + 200)) * _DAT_100dd614;
    fStack_1c = *(float *)(iVar2 + 0x10) -
                (*(float *)(param_2 + 0xd8) + *(float *)(param_2 + 0xcc)) * _DAT_100dd614;
    fVar1 = SQRT(fStack_24 * fStack_24 + fStack_20 * fStack_20 + fStack_1c * fStack_1c);
    if (fVar1 == _DAT_100dd5f8) {
      fStack_24 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fStack_24 = fStack_24 * fVar1;
      fStack_20 = fStack_20 * fVar1;
      fStack_1c = fStack_1c * fVar1;
    }
    fVar3 = FUN_1001faf0((int)param_1,param_4);
    iVar2 = param_1[1];
    *(float *)(iVar2 + 0x20) = (float)((float10)fStack_24 * fVar3) + *(float *)(iVar2 + 0x20);
    *(float *)(iVar2 + 0x24) = (float)((float10)fStack_20 * fVar3) + *(float *)(iVar2 + 0x24);
    param_4 = param_4 * (float)_DAT_100e0eb8;
    *(float *)(iVar2 + 0x28) =
         (float)(fVar3 * (float10)fStack_1c + (float10)*(float *)(iVar2 + 0x28));
  }
  iVar2 = (**(code **)(*param_1 + 0xb8))();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x224))();
  }
  FUN_1001f350(param_1,param_2,param_3,param_4,param_5);
  return;
}

