
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100c74a0(undefined4 param_1)

{
  int iVar1;
  
  for (iVar1 = FUN_100aec40(0,param_1); iVar1 != 0; iVar1 = FUN_100aec40(iVar1,param_1)) {
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x138) = 0;
    *(float *)(*(int *)(iVar1 + 4) + 0x104) = *DAT_10122044 + _DAT_100f9398;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x108) = 0;
    FUN_100afe10(iVar1,*(int *)(iVar1 + 4) + 8);
  }
  return;
}

