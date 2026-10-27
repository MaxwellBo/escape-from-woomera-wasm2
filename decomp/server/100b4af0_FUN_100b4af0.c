
undefined4 __thiscall FUN_100b4af0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_100b4d10(this,param_1);
  if (iVar1 != 0) {
    return 0;
  }
  if ((int *)param_1[0x37] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x37] + 0x8c))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x160))();
  iVar1 = *(int *)((int)this + iVar2 * 4 + 0xb8);
  if (iVar1 == 0) {
    *(int **)((int)this + iVar2 * 4 + 0xb8) = param_1;
    param_1[0x38] = 0;
  }
  else {
    param_1[0x38] = iVar1;
    *(int **)((int)this + iVar2 * 4 + 0xb8) = param_1;
  }
  *(uint *)(param_1[1] + 0x1a0) = *(uint *)(param_1[1] + 0x1a0) | 0x40000000;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x118) = 0x80;
  *(undefined4 *)(param_1[1] + 0xb4) = 0;
  *(undefined4 *)(param_1[1] + 0xb8) = 0;
  *(undefined4 *)(param_1[1] + 0x198) = *(undefined4 *)(*(int *)((int)this + 4) + 0x208);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x37] = 0;
  return 1;
}

