
int * __cdecl FUN_100bdc80(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  
  for (; (param_1 != param_2 && (*(int *)(*param_1 + 0xc) != 1)); param_1 = param_1 + 1) {
  }
  if (param_4 != 0) {
    cVar1 = *(char *)(param_4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(param_4 + -1) = cVar1 + -1;
      return param_1;
    }
    FUN_100c8ce6((undefined *)(param_4 + -1));
  }
  return param_1;
}

