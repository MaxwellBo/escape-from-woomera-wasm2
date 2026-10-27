
undefined4 __thiscall FUN_100db033(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this);
  if ((piVar1[0x13] == -1) && (iVar2 = (**(code **)(*piVar1 + 8))(param_1,param_2), iVar2 != 0)) {
    return *(undefined4 *)(*(int *)(*(int *)this + 4) + 4 + (int)this);
  }
  FUN_100db07b((void *)(*(int *)(*(int *)this + 4) + (int)this),
               *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this) | 2);
  return 0;
}

