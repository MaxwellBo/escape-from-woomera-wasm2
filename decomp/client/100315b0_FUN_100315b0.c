
void __fastcall FUN_100315b0(int *param_1)

{
  *(bool *)((int)param_1 + 0x261) = *(char *)((int)param_1 + 0x261) == '\0';
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x30])(param_1);
  }
  FUN_100315e0(param_1);
  return;
}

