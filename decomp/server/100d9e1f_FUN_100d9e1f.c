
undefined4 * __fastcall FUN_100d9e1f(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_100f7058;
  }
  return puVar1;
}

