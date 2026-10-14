
void __cdecl FUN_100b0f60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*DAT_10121e64)(param_1 - *(int *)(DAT_10122044 + 0x98));
  if (iVar1 == 0) {
LAB_100b0f8f:
    (*DAT_10121efc)(1,s_NULL_Ent_in_UTIL_PrecacheOther_1011b1b4);
    return;
  }
  iVar2 = (*DAT_10121f20)(iVar1);
  if (iVar2 == 0) goto LAB_100b0f8f;
  iVar2 = *(int *)(iVar1 + 0x288);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10121f1c)(0);
    if (iVar2 == 0) goto LAB_100b0fc7;
  }
  if (*(int **)(iVar2 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0x7c) + 0x2c))();
  }
LAB_100b0fc7:
  (*DAT_10121e60)(iVar1);
  return;
}

