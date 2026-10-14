
void __thiscall FUN_100b5a20(void *this,int param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = FUN_100b58c0(this,param_1);
  if (pbVar1 != (byte *)0x0) {
    *(undefined4 *)(pbVar1 + 0x60) = param_2;
  }
  return;
}

