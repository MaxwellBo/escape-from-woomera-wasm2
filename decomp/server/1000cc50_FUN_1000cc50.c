
void __thiscall FUN_1000cc50(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0x23) {
    FUN_1009a1e0(this,param_1);
    return;
  }
  bVar1 = FUN_10019450((uint *)((int)this + 0x160));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_10019460((uint *)((int)this + 0x160));
    iVar3 = (**(code **)(*piVar2 + 0xcc))();
    if (iVar3 != 0) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x138) = 0x3fc00000;
    }
  }
  FUN_1009a1e0(this,param_1);
  return;
}

