
void __thiscall FUN_10019780(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)((int)this + 0x10) == 0) && (*(int *)((int)this + 0x18) == 0)) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x104) = param_1;
    uVar1 = *(undefined4 *)(*(int *)((int)this + 4) + 0x104);
    *(undefined4 *)((int)this + 0x54) = uVar1;
    *(undefined4 *)((int)this + 0x58) = uVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x54) = param_1;
  FUN_100196a0((int)this);
  FUN_100632b0((int)this,param_2);
  return;
}

