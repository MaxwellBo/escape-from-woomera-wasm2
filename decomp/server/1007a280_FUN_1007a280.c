
void __thiscall FUN_1007a280(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_1001a140(param_3,*(int *)((int)this + 0x308));
  if (iVar2 != 0) {
    if (*(int *)((int)this + 0x308) != 0) {
      (**(code **)(*(int *)this + 0x164))();
      return;
    }
    *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0x40000000;
    iVar2 = (**(code **)(*(int *)this + 0xd8))();
    FUN_10019420((uint *)((int)this + 0x168),iVar2);
    bVar1 = FUN_10019450((uint *)((int)this + 0x168));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x160) =
           *(undefined4 *)(*(int *)((int)this + 4) + 0x1b0);
      CGunTarget::Next(this);
    }
  }
  return;
}

