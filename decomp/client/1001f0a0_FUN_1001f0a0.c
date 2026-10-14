
void FUN_1001f0a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      FUN_10049a73((undefined *)puVar2[6]);
      FUN_10049a73((undefined *)puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
  }
  return;
}

