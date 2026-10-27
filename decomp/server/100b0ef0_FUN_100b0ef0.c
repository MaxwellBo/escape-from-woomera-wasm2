
void __cdecl FUN_100b0ef0(int param_1)

{
  if (param_1 != 0) {
    FUN_100987e0(param_1);
    *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x40000000
    ;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1cc) = 0;
  }
  return;
}

