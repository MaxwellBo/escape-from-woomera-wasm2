
void __thiscall FUN_100290a0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1001a140(param_3,*(int *)((int)this + 0xc4));
  if (iVar1 != 0) {
    *(uint *)((int)this + 0xc4) = (uint)(*(int *)((int)this + 0xc4) == 0);
  }
  if (*(int *)((int)this + 0xc4) != 0) {
    *(code **)((int)this + 0x74) = CBubbling::FizzThink;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  FUN_10019680((int)this);
  return;
}

