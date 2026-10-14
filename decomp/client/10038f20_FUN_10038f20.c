
void __thiscall FUN_10038f20(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 600) < 100) {
    *(int **)((int)this + *(int *)((int)this + 600) * 4 + 200) = param_1;
    *(int *)((int)this + 600) = *(int *)((int)this + 600) + 1;
    (**(code **)(*param_1 + 0x40))(this);
    (**(code **)(*param_1 + 0x20c))(3);
    iVar1 = *(int *)((int)this + 600);
    if (iVar1 < 10) {
      FUN_100331f0(param_1,(char)iVar1 + '0');
      return;
    }
    if (iVar1 == 10) {
      FUN_100331f0(param_1,'0');
    }
  }
  return;
}

