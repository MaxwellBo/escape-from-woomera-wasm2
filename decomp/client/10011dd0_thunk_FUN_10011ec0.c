
void __fastcall thunk_FUN_10011ec0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  
  iVar3 = 0x100;
  puVar4 = param_1;
  do {
    puVar2 = *(undefined **)(puVar4 + 0x14);
    while (puVar2 != puVar4) {
      puVar1 = *(undefined **)(puVar2 + 0x14);
      FUN_10049a73(puVar2);
      puVar2 = puVar1;
    }
    puVar4 = puVar4 + 0x18;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10012050((int)param_1);
  return;
}

