
void __thiscall FUN_10057990(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((0x1f < *(int *)((int)this + 0x60)) && (iVar1 = FUN_1001a170(this,param_3), iVar1 != 0)) {
    uVar2 = (**(code **)(*(int *)this + 0x58))();
    switch(uVar2) {
    case 0:
    case 3:
      if (*(int *)((int)this + 0xcc) != 0) {
        *(undefined4 *)((int)this + 0xb8) = 1;
        (**(code **)(*(int *)this + 8))((float)*(int *)((int)this + 0xcc));
        FUN_100577d0(this);
        return;
      }
      *(undefined4 *)((int)this + 0xb8) = 2;
      break;
    case 1:
    case 2:
      if (*(int *)((int)this + 0xd0) == 0) {
        *(undefined4 *)((int)this + 0xb8) = 0;
        FUN_100577d0(this);
        return;
      }
      *(undefined4 *)((int)this + 0xb8) = 3;
      (**(code **)(*(int *)this + 8))((float)*(int *)((int)this + 0xd0));
      FUN_100577d0(this);
      return;
    }
    FUN_100577d0(this);
  }
  return;
}

