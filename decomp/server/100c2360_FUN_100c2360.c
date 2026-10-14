
void __thiscall FUN_100c2360(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    uVar1 = (**(code **)(*(int *)this + 8))(*(undefined4 *)((int)this + 0x24),0x4000);
    *(undefined4 *)((int)this + 0x2c) = uVar1;
  }
  FUN_100c24c0(this,*(undefined4 **)((int)this + 0x2c),param_1);
  FUN_100c23f0((int)this);
  return;
}

