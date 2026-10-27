
undefined4 * __thiscall FUN_100576fe(void *this,undefined4 *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_100660cc;
  sVar1 = _strlen((char *)*param_1);
  puVar2 = operator_new(sVar1 + 1);
  *(uint **)((int)this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_10053680(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)((int)this + 8) = 1;
  return this;
}

