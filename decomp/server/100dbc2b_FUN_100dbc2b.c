
void __fastcall FUN_100dbc2b(int *param_1)

{
  if (param_1[2] == 0) {
    if ((uint)param_1[0xb] <= (uint)param_1[10]) {
      (**(code **)(*param_1 + 0x20))();
    }
    if ((uint)param_1[10] < (uint)param_1[0xb]) {
      param_1[10] = param_1[10] + 1;
    }
    return;
  }
  if (param_1[3] == -1) {
    (**(code **)(*param_1 + 0x20))();
    return;
  }
  param_1[3] = -1;
  return;
}

