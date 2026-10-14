
void __fastcall FUN_10048a20(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  default:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x41f00000;
    return;
  case 3:
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x41a00000;
    return;
  case 0xf:
  case 0x10:
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xb0) = 0x42700000;
    return;
  }
}

