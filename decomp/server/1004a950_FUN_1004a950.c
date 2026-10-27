
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004a950(void *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  uVar2 = in_stack_0000001c;
  iVar1 = in_stack_00000018;
  if (*(int *)(in_stack_00000018 + 0x34) == 0xb) {
    iVar3 = FUN_10008520(param_1,1);
    if (((iVar3 == 0) && ((uVar2 & 0xc6) != 0)) &&
       (param_3 = param_3 - _DAT_100ddacc, param_3 <= _DAT_100dd5f8)) {
      uStack_18 = 0x1004a99c;
      FUN_100b06f0((undefined4 *)(iVar1 + 0x14));
      param_3 = 0.01;
    }
    *(undefined4 *)(iVar1 + 0x34) = 1;
  }
  FUN_10003850(auStack_20,(undefined4 *)&stack0x0000000c);
  FUN_100203e0(param_1,param_2,param_3);
  return;
}

