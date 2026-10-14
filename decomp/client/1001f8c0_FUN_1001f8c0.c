
void __fastcall FUN_1001f8c0(int param_1)

{
  FUN_1001f070((undefined4 *)(param_1 + 0x414));
  FUN_1001f070((undefined4 *)(param_1 + 0x410));
  FUN_1001f0a0((undefined4 *)(param_1 + 0x418));
  *(undefined4 *)(param_1 + 0x41c) = 0;
  if (*(undefined **)(param_1 + 0x430) != (undefined *)0x0) {
    FUN_10049a73(*(undefined **)(param_1 + 0x430));
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  if (*(undefined **)(param_1 + 0x434) != (undefined *)0x0) {
    FUN_10049a73(*(undefined **)(param_1 + 0x434));
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  if (*(undefined **)(param_1 + 0x438) != (undefined *)0x0) {
    FUN_10049a73(*(undefined **)(param_1 + 0x438));
    *(undefined4 *)(param_1 + 0x438) = 0;
  }
  return;
}

