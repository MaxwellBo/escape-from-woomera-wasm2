
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10065af0(void *param_1,void *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if (_DAT_100dd5f8 < _DAT_101096a4) {
    if ((*(byte *)(&DAT_10131e3c + param_3[0x39] * 0xb) & 8) != 0) {
      uVar2 = FUN_1003d790(param_1,param_2,param_3);
      return uVar2;
    }
    iVar4 = 0;
    piVar3 = (int *)((int)param_2 + 0x510);
    do {
      for (iVar1 = *piVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
        if (*(int *)(iVar1 + 0xe4) == param_3[0x39]) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < 6);
  }
  uVar2 = FUN_1003d790(param_1,param_2,param_3);
  return uVar2;
}

