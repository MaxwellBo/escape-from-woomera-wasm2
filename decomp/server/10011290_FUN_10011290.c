
void __thiscall FUN_10011290(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x58))();
  iVar2 = FUN_1001a140(param_3,(uint)(iVar1 == 2));
  if (iVar2 != 0) {
    if ((iVar1 == 2) != 0) {
      FUN_10011230((int)this);
      return;
    }
    FUN_10011260((int)this);
  }
  return;
}

