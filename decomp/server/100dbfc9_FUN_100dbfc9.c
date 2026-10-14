
int __thiscall FUN_100dbfc9(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    if ((param_2 == 0) || (param_3 == 0)) {
      *(undefined4 *)(param_1 + 8) = 1;
    }
    else {
      *(int *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(param_1 + 0x14) = param_2 + param_3;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

