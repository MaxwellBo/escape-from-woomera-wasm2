
undefined4 * __thiscall FUN_1001f2c0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)((int)this + 0x418);
  iVar2 = 0;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (iVar2 == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
    iVar2 = iVar2 + 1;
  }
  return puVar1;
}

