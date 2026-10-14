
void FUN_1001c440(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(void **)(param_1 + 0x7c) == (void *)0x0)) {
    (*DAT_10121efc)(1,s_PlayerCustomization__Couldn_t_ge_10105f00);
    return;
  }
  if (param_2 == 0) {
    (*DAT_10121efc)(1,s_PlayerCustomization__NULL_custom_10105ed4);
    return;
  }
  iVar1 = *(int *)(param_2 + 0x44);
  if (-1 < iVar1) {
    if (iVar1 < 3) {
      return;
    }
    if (iVar1 == 3) {
      FUN_10081f00(*(void **)(param_1 + 0x7c),*(int *)(param_2 + 0x94));
      return;
    }
  }
  (*DAT_10121efc)(1,s_PlayerCustomization__Unknown_cus_10105ea0);
  return;
}

