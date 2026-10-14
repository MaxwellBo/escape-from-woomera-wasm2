
undefined4 __thiscall FUN_1003d790(void *this,void *param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)param_1 + 4) + 0x170) != 0) {
    return 0;
  }
  if (((&DAT_10131e20)[param_2[0x39] * 0xb] != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0xa0))
                        (param_1,(&DAT_10131e20)[param_2[0x39] * 0xb],
                         (&DAT_10131e24)[param_2[0x39] * 0xb]), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_10082230(param_1,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

