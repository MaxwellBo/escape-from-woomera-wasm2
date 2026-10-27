
bool __fastcall FUN_1000a340(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xe4) * 0x2c;
  if (*(int *)(&DAT_1007f280 + iVar1) == 0) {
    return true;
  }
  bVar2 = *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) != 0;
  if (*(int *)(&DAT_1007f288 + iVar1) != 0) {
    bVar2 = bVar2 || *(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x108) * 4) != 0
    ;
  }
  if (0 < *(int *)(param_1 + 0x10c)) {
    bVar2 = true;
  }
  return bVar2;
}

