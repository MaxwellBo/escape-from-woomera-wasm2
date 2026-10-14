
void __fastcall FUN_1003c9a0(void *param_1)

{
  if (*(int *)((int)param_1 + 0xc4) != 0) {
    if (*(int *)((int)param_1 + 200) != 0) {
      FUN_10039020(*(int *)((int)param_1 + 200));
    }
    *(undefined4 *)((int)param_1 + 0x20c) = 0;
    FUN_1003cac0(param_1,(int *)0x0);
    FUN_1003dcc0((int)param_1);
  }
  return;
}

