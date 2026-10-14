
undefined4 * __cdecl FUN_100295c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *this;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (this = *(undefined4 **)(iVar1 + 0x7c), this == (undefined4 *)0x0)) {
    this = (undefined4 *)(*DAT_10121f04)(iVar1,0xb8);
    if (this == (undefined4 *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      *this = &PTR_FUN_100e20bc;
    }
    this[1] = iVar2;
  }
  *(int *)this[1] = (int)&DAT_10108050 - *(int *)(DAT_10122044 + 0x98);
  FUN_10029640(this,param_1,param_2);
  return this;
}

