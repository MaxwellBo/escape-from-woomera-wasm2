
undefined4 __thiscall FUN_1008ca50(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100b3ba0(param_1,param_2);
  *(uint *)(*(int *)(param_2 + 4) + 0x168) =
       *(uint *)(*(int *)(param_2 + 4) + 0x168) | 1 << ((byte)param_1[0x39] & 0x1f);
  param_1[0x2b] = 0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x170))();
    return uVar2;
  }
  return 0;
}

