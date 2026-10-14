
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10055f00(void *param_1,int param_2,int param_3,float param_4,uint param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)((int)param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
  if (param_2 != 0) {
    iVar1 = *(int *)((int)param_1 + 4);
    fVar2 = *(float *)(iVar1 + 8) - *(float *)(param_2 + 8);
    uStack_8 = *(float *)(iVar1 + 0xc) - *(float *)(param_2 + 0xc);
    uStack_4 = *(float *)(iVar1 + 0x10) - *(float *)(param_2 + 0x10);
    fVar3 = SQRT(fVar2 * fVar2 + uStack_8 * uStack_8 + uStack_4 * uStack_4);
    if (fVar3 == _DAT_100dd5f8) {
      uStack_8 = 0.0;
      uStack_4 = 1.0;
      fVar2 = _DAT_100dd5f8;
    }
    else {
      fVar3 = _DAT_100dd618 / fVar3;
      fVar2 = fVar2 * fVar3;
      uStack_8 = uStack_8 * fVar3;
      uStack_4 = uStack_4 * fVar3;
    }
    uStack_8 = uStack_8 * _DAT_100e0eec;
    *(float *)(iVar1 + 0x20) = fVar2 * _DAT_100e0eec;
    uStack_4 = uStack_4 * _DAT_100e0eec;
    *(float *)(iVar1 + 0x24) = uStack_8;
    *(float *)(iVar1 + 0x28) = uStack_4;
  }
  FUN_1001f350(param_1,param_2,param_3,param_4,param_5);
  return;
}

