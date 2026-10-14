
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100355a0(int param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x118) = 0x80;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  lVar1 = __ftol();
  *(int *)(param_1 + 0x30c) = (int)lVar1;
  return;
}

