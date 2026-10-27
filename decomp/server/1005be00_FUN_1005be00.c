
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1005be00(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1005ae40(this,(int)param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = (**(code **)(*param_1 + 0xcc))();
    if (iVar2 != 0) {
      iVar2 = *(int *)((int)this + 4);
      if (_DAT_100dd5f8 <= *(float *)(iVar2 + 0x1e0)) {
        (**(code **)(*param_1 + 0x60))(iVar2,iVar2,*(float *)(iVar2 + 0x1e0),0);
      }
      else {
        (**(code **)(*param_1 + 100))(-*(float *)(iVar2 + 0x1e0),0);
      }
    }
    FUN_10098bd0(this,param_1,param_3,param_4);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
      FUN_100b0ef0((int)this);
    }
  }
  return;
}

