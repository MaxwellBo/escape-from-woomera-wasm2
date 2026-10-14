
int __thiscall FUN_10065cc0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1003d680(param_1);
  iVar2 = (**(code **)(*(int *)this + 0x18))();
  if ((iVar2 != 0) && (*(int *)(iVar1 + 0x248) != 0)) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x248)),param_1,param_1,3
                 ,0);
  }
  return iVar1;
}

