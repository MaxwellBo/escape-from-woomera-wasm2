
void __thiscall FUN_10031460(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_100314a0(this);
  uVar1 = FUN_100348c0(param_1);
  *(undefined4 *)((int)this + 600) = uVar1;
  uVar1 = FUN_100348c0(param_2);
  *(undefined4 *)((int)this + 0x25c) = uVar1;
  *(undefined1 *)((int)this + 0x260) = 1;
  FUN_100315e0(this);
  return;
}

