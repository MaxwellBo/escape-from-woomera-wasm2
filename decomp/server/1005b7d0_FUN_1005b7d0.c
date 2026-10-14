
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1005b7d0(void *param_1,int *param_2,undefined4 param_3,int param_4,float param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_1005ae40(param_1,(int)param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (param_4 == 2) {
      if (param_5 < _DAT_100dd5f8) {
        *(undefined4 *)((int)param_1 + 0xbc) = 0xffffffff;
        return;
      }
      iVar3 = *DAT_10121db8;
      uVar2 = (**(code **)(*param_2 + 0xd4))();
      uVar2 = (**(code **)(iVar3 + 0xcc))(uVar2);
      *(undefined4 *)((int)param_1 + 0xbc) = uVar2;
      return;
    }
    iVar3 = FUN_1005b8b0(param_1,param_2);
    if (iVar3 != 0) {
      FUN_10098bd0(param_1,param_2,*(int *)((int)param_1 + 0xc0),param_5);
      if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
        FUN_100b0ef0((int)param_1);
      }
    }
  }
  return;
}

