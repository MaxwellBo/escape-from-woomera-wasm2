
void __thiscall FUN_1006e9a0(int param_1,undefined4 param_2)

{
  if (99 < *(int *)(param_1 + 400)) {
    FUN_100c9014((byte *)s_Error__101130e4);
    return;
  }
  *(undefined4 *)(param_1 + *(int *)(param_1 + 400) * 4) = param_2;
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  return;
}

