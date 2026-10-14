
void __thiscall FUN_100540d0(void *param_1,undefined4 param_2,float param_3)

{
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  uint uStack_8;
  
  if ((in_stack_0000001c & 0x100) == 0) {
    uStack_8 = in_stack_0000001c;
    uStack_c = in_stack_00000018;
    FUN_10003850(auStack_18,(undefined4 *)&stack0x0000000c);
    FUN_100203e0(param_1,param_2,param_3);
  }
  return;
}

