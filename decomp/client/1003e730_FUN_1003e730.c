
undefined4 __thiscall
FUN_1003e730(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *_Source;
  short sVar2;
  size_t _Count;
  
  if (*(int *)((int)this + 0xaac) == 0) {
    return 1;
  }
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  sVar2 = (short)uVar1;
  if ((0 < sVar2) && (sVar2 < 0x41)) {
    _Count = 0x10;
    _Source = FUN_10026180();
    _strncpy(&DAT_100b6010 + sVar2 * 0x18,_Source,_Count);
  }
  FUN_10036920(*(int **)((int)this + 0xaac));
  return 1;
}

