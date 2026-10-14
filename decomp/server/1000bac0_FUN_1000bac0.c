
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1000bac0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  iVar1 = *(int *)(in_stack_00000018 + 0x34);
  if ((iVar1 != 6) || ((in_stack_0000001c & 0x482) == 0)) {
    if ((param_3 <= _DAT_100ddaf8) && ((iVar1 != 1 && (iVar1 != 2)))) {
      FUN_100b06f0((undefined4 *)(in_stack_00000018 + 0x14));
      return;
    }
    FUN_100b2c20(param_2,param_1,param_3,in_stack_0000001c);
    lVar2 = __ftol();
    *(int *)(param_1 + 0x378) = (int)lVar2;
  }
  return;
}

