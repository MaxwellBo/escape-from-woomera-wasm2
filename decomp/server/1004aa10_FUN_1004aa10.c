
void __fastcall FUN_1004aa10(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 1:
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x43160000;
    return;
  default:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42b40000;
    return;
  case 3:
  case 0xf:
  case 0x10:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x43340000;
    return;
  case 5:
  case 0x33:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x41f00000;
    return;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42f00000;
    return;
  }
}

