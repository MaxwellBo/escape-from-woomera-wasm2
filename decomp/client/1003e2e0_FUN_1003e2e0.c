
undefined4 __thiscall
FUN_1003e2e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Panel *pPVar1;
  char *_Source;
  size_t _Count;
  
  FUN_10026030(param_3,param_2);
  pPVar1 = (Panel *)FUN_10026090();
  if (pPVar1 == (Panel *)&DAT_00000004) {
    _Count = 0x40;
    _Source = FUN_10026180();
    _strncpy((char *)((int)this + 0xa60),_Source,_Count);
    *(undefined1 *)((int)this + 0xa9f) = 0;
  }
  FUN_1003d2f0(this,pPVar1);
  return 1;
}

