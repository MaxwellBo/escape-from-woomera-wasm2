
void __fastcall FUN_10034580(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_10061e48;
  puVar3 = (undefined4 *)param_1[0x31];
  puVar1 = param_1 + 0x2f;
  param_1[0x61] = 0;
  if (puVar3 == puVar1) {
    param_1[0x31] = puVar1;
    param_1[0x30] = puVar1;
    return;
  }
  do {
    (**(code **)(*(int *)*puVar3 + 0x40))(0);
    puVar2 = (undefined4 *)puVar3[2];
    FUN_10049a73((undefined *)puVar3);
    puVar3 = puVar2;
  } while (puVar2 != puVar1);
  param_1[0x31] = puVar1;
  param_1[0x30] = puVar1;
  return;
}

