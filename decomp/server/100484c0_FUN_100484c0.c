
void __thiscall FUN_100484c0(void *param_1,int *param_2)

{
  if (*param_2 == 0x24) {
    if (*(int *)((int)param_1 + 0x330) == 0) {
      if ((*(uint *)((int)param_1 + 0x15c) & 0x40000000) != 0) {
        return;
      }
      *(undefined4 *)((int)param_1 + 0x1e0) = 4;
      return;
    }
  }
  else if (*param_2 == 0x5d) {
    return;
  }
  FUN_100057f0(param_1,param_2);
  return;
}

