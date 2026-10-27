
undefined4 __cdecl Initialize(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = &DAT_100a4ff0;
                    /* 0x18c00  509  Initialize */
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 7) {
    return 0;
  }
  puVar2 = &DAT_100a4ff0;
  for (iVar1 = 0x62; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_100090d0();
  return 1;
}

