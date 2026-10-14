
void __fastcall FUN_1004f850(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 1:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42700000;
    return;
  case 3:
  case 4:
  case 0xf:
  case 0x10:
    break;
  case 0x12:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42b40000;
  return;
}

