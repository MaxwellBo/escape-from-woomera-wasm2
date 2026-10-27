
void __thiscall FUN_10020500(void *this,uint param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_100a5150)();
  if (iVar1 == 1) {
    if ((param_1 & 0x18) != 0) {
      *(undefined4 *)((int)this + 0xca0) = 0;
    }
    if ((param_1 & 0x600) != 0) {
      *(undefined4 *)((int)this + 0xca4) = 0;
    }
  }
  return;
}

