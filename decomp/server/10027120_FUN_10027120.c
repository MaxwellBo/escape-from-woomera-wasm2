
void __thiscall FUN_10027120(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_10063390(param_1);
      return;
    }
    FUN_10063390(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_10063390(param_1);
    return;
  }
  FUN_10063390(param_1);
  return;
}

