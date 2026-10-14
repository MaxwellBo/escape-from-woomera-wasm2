
void __thiscall FUN_1005afb0(void *this,int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  bVar1 = FUN_1005ae40(this,(int)param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_1 + 0xcc))();
    if (iVar2 != 0) {
      iVar2 = *param_1;
      uVar3 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
      if ((uVar3 & 2) != 0) {
        uVar3 = uVar3 & 1;
        lVar4 = __ftol();
        (**(code **)(iVar2 + 0x84))((int)lVar4,uVar3);
        return;
      }
      uVar3 = uVar3 & 1;
      lVar4 = __ftol();
      (**(code **)(iVar2 + 0x80))((int)lVar4,uVar3);
    }
  }
  return;
}

