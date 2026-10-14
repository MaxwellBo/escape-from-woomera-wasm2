
bool __thiscall FUN_100137a0(void *this,undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int local_10 [4];
  
  iVar2 = (*DAT_100a5168)(param_1,local_10);
  if (iVar2 == 0) {
    return false;
  }
  bVar1 = FUN_10011fa0((void *)((int)this + 0x177f8),local_10);
  return bVar1;
}

