
void __cdecl FUN_1004d858(undefined *param_1)

{
  if (DAT_1007be10 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1007be10), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1007e630) {
        FUN_1004ad7e(*(undefined **)(param_1 + 0x50));
      }
      FUN_1004ad7e(param_1);
    }
    TlsSetValue(DAT_1007be10,(LPVOID)0x0);
    return;
  }
  return;
}

