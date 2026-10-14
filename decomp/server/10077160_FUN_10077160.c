
void __thiscall FUN_10077160(void *this,undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x1a4);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffdfffff;
  }
  else {
    uVar1 = uVar1 | 0x200000;
  }
  *(uint *)(*(int *)((int)this + 4) + 0x1a4) = uVar1;
  (**(code **)(*(int *)this + 4))(param_1,1);
  return;
}

