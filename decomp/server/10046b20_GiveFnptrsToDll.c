
void GiveFnptrsToDll(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10121e08;
                    /* 0x46b20  1  GiveFnptrsToDll */
  for (iVar1 = 0x8f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  DAT_10122044 = param_2;
  return;
}

