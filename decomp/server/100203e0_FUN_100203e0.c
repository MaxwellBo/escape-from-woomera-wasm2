
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100203e0(void *this,undefined4 param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  float fStack_14;
  
  if (*(float *)(*(int *)((int)this + 4) + 0x16c) == _DAT_100dd5f8) {
    return;
  }
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(in_stack_00000018 + 0x34);
  switch(*(undefined4 *)(in_stack_00000018 + 0x34)) {
  case 1:
    fVar2 = _DAT_10126b7c;
    break;
  case 2:
    fVar2 = _DAT_10126b80;
    break;
  case 3:
    fVar2 = _DAT_10126b84;
    break;
  case 4:
  case 5:
    fVar2 = _DAT_10126b8c;
    break;
  case 6:
  case 7:
    fVar2 = _DAT_10126b88;
    break;
  default:
    goto switchD_10020416_default;
  }
  param_2 = fVar2 * param_2;
switchD_10020416_default:
  fStack_14 = param_2;
  uStack_18 = 0x10020457;
  uStack_18 = (**(code **)(*(int *)this + 0x6c))();
  FUN_10003850(auStack_24,(undefined4 *)(in_stack_00000018 + 0x14));
  FUN_100b2c80();
  iVar1 = *(int *)this;
  fStack_14 = (float)in_stack_0000001c;
  FUN_10003850(auStack_24,(undefined4 *)&stack0x0000000c);
  (**(code **)(iVar1 + 0x70))(param_2);
  FUN_100b2c20(fStack_14,(int)this,param_2,in_stack_0000001c);
  return;
}

