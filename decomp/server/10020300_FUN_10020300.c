
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10020300(void *this,undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
            int param_6,uint param_7)

{
  int iVar1;
  undefined4 uStack_3c;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)(param_6 + 0x14) - param_3 * _DAT_100de4fc;
  local_8 = *(float *)(param_6 + 0x18) - param_4 * _DAT_100de4fc;
  local_4 = *(float *)(param_6 + 0x1c) - param_5 * _DAT_100de4fc;
  if (*(float *)(*(int *)((int)this + 4) + 0x16c) != _DAT_100dd5f8) {
    uStack_3c = 0x1002037f;
    FUN_100b2c20(param_1,(int)this,param_2,param_7);
    iVar1 = (**(code **)(*(int *)this + 0x6c))();
    if (iVar1 != -1) {
      FUN_10003850(&uStack_3c,&local_c);
      FUN_100b2c80();
      param_6 = *(int *)this;
      FUN_10003850(&uStack_3c,&param_3);
      (**(code **)(param_6 + 0x70))(param_2);
    }
  }
  return;
}

