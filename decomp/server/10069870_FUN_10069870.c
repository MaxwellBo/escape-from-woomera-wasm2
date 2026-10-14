
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10069870(int *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int in_stack_00000018;
  uint in_stack_0000001c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_8;
  
  if (param_1[0xdd] == 3) {
    param_1[0xdd] = 2;
  }
  if (((param_1[0xdd] == 2) && (*(int *)(in_stack_00000018 + 0x34) == 2)) &&
     (_DAT_100de4ac < param_3)) {
    param_1[0xdd] = 3;
  }
  if (param_1[0xdd] != 3) {
    iVar2 = param_1[1];
    fStack_18 = *(float *)(in_stack_00000018 + 0x14) - *(float *)(iVar2 + 8);
    fStack_8 = *(float *)(in_stack_00000018 + 0x18) - *(float *)(iVar2 + 0xc);
    fStack_10 = *(float *)(in_stack_00000018 + 0x1c) - *(float *)(iVar2 + 0x10);
    fVar1 = SQRT(fStack_8 * fStack_8 + fStack_18 * fStack_18 + fStack_10 * fStack_10);
    if (fVar1 == _DAT_100dd5f8) {
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 1.0;
    }
    else {
      fVar1 = _DAT_100dd618 / fVar1;
      fStack_18 = fVar1 * fStack_18;
      fStack_14 = fVar1 * fStack_8;
      fStack_10 = fStack_10 * fVar1;
    }
    lVar4 = __ftol();
    iVar2 = (int)lVar4;
    iVar3 = (**(code **)(*param_1 + 0x6c))();
    FUN_100b01f0((undefined4 *)(in_stack_00000018 + 0x14),&fStack_18,iVar3,iVar2);
  }
  FUN_100b2c20(param_2,(int)param_1,param_3,in_stack_0000001c);
  return;
}

