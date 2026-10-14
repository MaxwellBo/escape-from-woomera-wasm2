
void __thiscall FUN_10048fb0(void *param_1,int *param_2)

{
  if ((*param_2 < 0x23) || (0x24 < *param_2)) {
    FUN_10005140(param_1,param_2);
  }
  else if (*(int *)((int)param_1 + 0xd4) != 0) {
    if ((*(uint *)((int)param_1 + 0x15c) & 0x40000000) == 0) {
      *(undefined4 *)((int)param_1 + 0x1e0) = 4;
    }
    *(undefined4 *)((int)param_1 + 0x78) = 0;
    *(undefined4 *)((int)param_1 + 0x1d0) = 1;
    return;
  }
  return;
}

