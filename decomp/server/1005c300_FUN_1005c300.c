
void __thiscall FUN_1005c300(void *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = FUN_1005ae40(param_1,(int)param_2);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = (**(code **)(*param_2 + 0xcc))();
    if (iVar3 != 0) {
      iVar3 = FUN_1005c270((byte *)(*(int *)(*(int *)((int)param_1 + 4) + 0x1c8) +
                                   *(int *)(DAT_10122044 + 0x98)));
      if (iVar3 != 0) {
        uVar1 = *(uint *)(*(int *)((int)param_1 + 4) + 0x1a0);
        (**(code **)(*DAT_10121db8 + 0xd8))(param_2,iVar3,uVar1 >> 1 & 1,uVar1 >> 2 & 1);
      }
    }
    if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 1) != 0) {
      FUN_100b0ef0((int)param_1);
    }
  }
  return;
}

