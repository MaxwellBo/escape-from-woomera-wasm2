
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1001a390(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(float *)(DAT_10122044 + 0x18) == _DAT_100dd5f8) &&
     (*(float *)(DAT_10122044 + 0x14) == _DAT_100dd5f8)) {
    (*DAT_10121ea4)(s_reload_101053d4);
    return;
  }
  if (param_2 != 0) {
    FUN_100b5770(param_1);
  }
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar1 = (*DAT_10121e5c)();
    if (iVar1 != 0) {
      iVar3 = iVar1 + 0x80;
    }
  }
  iVar1 = *(int *)(iVar3 + 0x208);
  if ((iVar1 == 0) || (piVar2 = *(int **)(iVar1 + 0x7c), piVar2 == (int *)0x0)) {
    piVar2 = (int *)(*DAT_10121f04)(iVar1,0x69c);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_10002f30(piVar2);
      *piVar2 = (int)&PTR_FUN_100e0904;
    }
    piVar2[1] = iVar3;
  }
  (**(code **)(*piVar2 + 0x28))();
  FUN_100c6970(param_1);
  return;
}

