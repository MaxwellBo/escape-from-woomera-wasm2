
void FUN_1001f040(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)*param_1;
    while (puVar3 = puVar1, puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar3 != param_2) {
        *puVar3 = puVar2;
        puVar2 = puVar3;
      }
    }
    *param_1 = puVar2;
  }
  return;
}

