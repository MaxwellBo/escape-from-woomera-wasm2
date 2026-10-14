
undefined4 __thiscall FUN_100b5a50(void *this,int param_1)

{
  byte *pbVar1;
  
  pbVar1 = FUN_100b58c0(this,param_1);
  if (pbVar1 != (byte *)0x0) {
    return *(undefined4 *)(pbVar1 + 0x60);
  }
  return 0;
}

