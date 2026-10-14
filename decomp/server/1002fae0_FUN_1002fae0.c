
void __fastcall FUN_1002fae0(int *param_1)

{
  if (param_1[0x2e] == 1) {
    param_1[0x2e] = 2;
    if ((*(byte *)(param_1[1] + 0x1a0) & 8) == 0) {
      (**(code **)(*param_1 + 8))(*(undefined4 *)(param_1[1] + 0x1dc));
      return;
    }
  }
  else {
    param_1[0x2e] = 0;
  }
  return;
}

