
void __fastcall FUN_10037c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x34];
  *param_1 = &PTR_setPos_10062724;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_100626c4;
    FUN_10049a73((undefined *)puVar1[9]);
    FUN_10049a73((undefined *)puVar1[10]);
    FUN_10049a73((undefined *)puVar1);
  }
  return;
}

