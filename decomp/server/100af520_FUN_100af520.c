
void __cdecl FUN_100af520(undefined2 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 in_stack_00000014;
  undefined2 in_stack_00000018;
  
  iVar1 = FUN_100af4d0();
  *param_1 = (short)iVar1;
  iVar1 = FUN_100af4d0();
  param_1[1] = (short)iVar1;
  lVar2 = __ftol();
  *(char *)(param_1 + 3) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)((int)param_1 + 7) = (char)lVar2;
  lVar2 = __ftol();
  *(char *)(param_1 + 4) = (char)lVar2;
  *(undefined1 *)((int)param_1 + 9) = in_stack_00000014;
  param_1[2] = in_stack_00000018;
  return;
}

