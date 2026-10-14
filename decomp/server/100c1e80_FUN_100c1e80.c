
void __thiscall FUN_100c1e80(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x2c));
    iVar1 = *(int *)this;
    uVar2 = (**(code **)(iVar1 + 8))(param_1,0x4000);
    (**(code **)(iVar1 + 4))(uVar2);
  }
  if (param_2 != 0) {
    *(int *)((int)this + 0x28) = param_2;
  }
  return;
}

