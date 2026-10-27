
char __cdecl FUN_100bdc40(undefined4 *param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  
  if (param_1 != param_2) {
    do {
      if ((param_3 == '\0') || (cVar1 = (**(code **)(*(int *)*param_1 + 4))(param_4), cVar1 == '\0')
         ) {
        param_3 = '\0';
      }
      else {
        param_3 = '\x01';
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}

