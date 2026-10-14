
void __cdecl FUN_10018d00(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_1 != 0)) {
    FUN_100b1770(param_1 + 0x80,(int)param_2);
    if ((param_2[3] == 0) && ((*param_2 != 0 && (*(int **)(param_1 + 0x7c) != (int *)0x0)))) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 0x30))(param_2);
    }
  }
  return;
}

