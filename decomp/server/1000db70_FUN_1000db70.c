
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000db70(void *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  iVar2 = in_stack_00000018;
  iVar1 = *(int *)(in_stack_00000018 + 0x34);
  if (1 < iVar1) {
    if (iVar1 < 4) {
      if ((in_stack_0000001c & 0x46) != 0) {
        param_3 = param_3 * _DAT_100dd614;
      }
    }
    else if (iVar1 == 10) {
      if (((in_stack_0000001c & 0x86) != 0) &&
         (param_3 = param_3 - _DAT_100ddacc, param_3 <= _DAT_100dd5f8)) {
        uStack_18 = 0x1000dbbd;
        FUN_100b06f0((undefined4 *)(in_stack_00000018 + 0x14));
        param_3 = 0.01;
      }
      *(undefined4 *)(iVar2 + 0x34) = 1;
    }
  }
  FUN_10003850(auStack_20,(undefined4 *)&stack0x0000000c);
  FUN_100203e0(param_1,param_2,param_3);
  return;
}

