
uint __cdecl FUN_10094630(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  int in_stack_0000001c;
  int in_stack_00000020;
  char local_40 [64];
  
  if (DAT_10131048 == 0) {
    return 0xffffffff;
  }
  local_40[0] = '\0';
  uVar1 = FUN_10094520(param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_100942c0(uVar1,local_40,in_stack_0000001c,in_stack_00000020);
  return uVar1;
}

