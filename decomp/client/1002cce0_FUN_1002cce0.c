
undefined4 __thiscall
FUN_1002cce0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  size_t _Count;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  if ((-1 < (int)uVar1) && ((int)uVar1 < 2)) {
    _Count = 0x80;
    _Source = FUN_10026180();
    _strncpy((char *)((int)this + uVar1 * 0x80 + 0x14),_Source,_Count);
    *(undefined1 *)((int)this + uVar1 * 0x80 + 0x93) = 0;
    if (this == (void *)0xffffffec) {
      uRam00000220 = 1;
      uRamfffffffc = *(uint *)((int)this + 0x10) & 0xfffffffe;
      return 1;
    }
    *(undefined4 *)((int)this + 0x234) = 1;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    return 1;
  }
  return 1;
}

