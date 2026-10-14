
bool __fastcall FUN_100b40b0(int param_1)

{
  bool bVar1;
  
  if ((&DAT_10131e20)[*(int *)(param_1 + 0xe4) * 0xb] == 0) {
    return true;
  }
  bVar1 = *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) != 0;
  if ((&DAT_10131e28)[*(int *)(param_1 + 0xe4) * 0xb] != 0) {
    bVar1 = bVar1 || *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x108) * 4) != 0
    ;
  }
  if (0 < *(int *)(param_1 + 0x10c)) {
    bVar1 = true;
  }
  return bVar1;
}

