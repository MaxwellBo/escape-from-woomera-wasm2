
uint * __cdecl FUN_10057174(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10053680(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}

