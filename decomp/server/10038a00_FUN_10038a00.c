
void __fastcall FUN_10038a00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x114) != 0) {
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x114));
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x118));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e8);
  if (iVar1 != 0) {
    (*DAT_10121e0c)(*(int *)(DAT_10122044 + 0x98) + iVar1);
  }
  return;
}

