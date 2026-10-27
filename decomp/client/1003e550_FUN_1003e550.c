
undefined4 __thiscall
FUN_1003e550(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *_Source;
  size_t _Count;
  
  FUN_10026030(param_3,param_2);
  _Count = 0x20;
  _Source = FUN_10026180();
  _strncpy((char *)((int)this + 0xab0),_Source,_Count);
  return 1;
}

