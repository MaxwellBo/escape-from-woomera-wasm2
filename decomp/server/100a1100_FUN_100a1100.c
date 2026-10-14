
void __fastcall FUN_100a1100(int *param_1)

{
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  if (*(int *)(param_1[1] + 0x1c8) != 0) {
    (**(code **)(*param_1 + 8))(0x3f000000);
  }
  return;
}

