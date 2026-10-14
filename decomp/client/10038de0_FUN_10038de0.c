
void __thiscall FUN_10038de0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  
  piVar1 = param_3;
  if (param_2 == 0) {
    piVar2 = (int *)(**(code **)(*param_3 + 0x14c))();
    (**(code **)(*piVar2 + 0x34))(&param_3,&param_2);
    (**(code **)(*piVar1 + 0x8c))(&stack0x00000000,&stack0xfffffffc);
    lVar3 = __ftol();
    *(int *)(*(int *)(param_1 + 4) + 0x108) = (int)lVar3;
  }
  return;
}

