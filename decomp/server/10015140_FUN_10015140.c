
void __fastcall FUN_10015140(int param_1)

{
  byte *pbVar1;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    (*DAT_10121e60)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    return;
  }
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    pbVar1 = FUN_100b58c0(&DAT_101323a8,*(int *)(param_1 + 0xb8));
    if (pbVar1 == (byte *)0x0) {
      FUN_100b5980(&DAT_101323a8,*(int *)(param_1 + 0xb8),*(int *)(DAT_10122044 + 0xc),
                   *(int *)(param_1 + 0xc0));
    }
  }
  return;
}

