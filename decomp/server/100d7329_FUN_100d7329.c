
float10 __cdecl FUN_100d7329(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_100d73d9(param_2);
  if (iVar1 != 0) {
    FUN_100d744b();
    iVar1 = FUN_100d742b();
    if (iVar1 == 0) {
      FUN_100d73b1(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_100d744b();
  FUN_100d73b1(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}

