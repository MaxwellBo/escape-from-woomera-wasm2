
void __cdecl FUN_100aecd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_10122060 == 0) {
    (*DAT_10121efc)(1,s_AddToAliasList_has_no_AliasList__1011b128);
    return;
  }
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x1000;
  iVar1 = *(int *)(DAT_10122060 + 0xb8);
  if (iVar1 != 0) {
    if (iVar1 != param_1) {
      for (iVar2 = *(int *)(iVar1 + 0xb8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xb8)) {
        if (iVar2 == param_1) {
          return;
        }
        iVar1 = iVar2;
      }
      *(int *)(iVar1 + 0xb8) = param_1;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    return;
  }
  *(int *)(DAT_10122060 + 0xb8) = param_1;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}

