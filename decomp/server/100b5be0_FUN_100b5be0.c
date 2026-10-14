
void __fastcall FUN_100b5be0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)*param_1;
  while (puVar2 != (undefined *)0x0) {
    puVar1 = *(undefined **)(puVar2 + 100);
    FUN_100c8cf1(puVar2);
    puVar2 = puVar1;
  }
  FUN_100b58b0(param_1);
  return;
}

