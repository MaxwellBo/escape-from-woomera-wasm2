
void __cdecl FUN_10065e80(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
    while (puVar3 != puVar1) {
      puVar2 = (undefined4 *)*puVar3;
      FUN_100c8ce6((undefined *)puVar3);
      puVar3 = puVar2;
    }
    FUN_100c8ce6((undefined *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

