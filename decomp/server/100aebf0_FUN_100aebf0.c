
int __cdecl FUN_100aebf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x208);
  }
  while ((iVar1 = (*DAT_10121e40)(iVar1,param_2,param_3), iVar1 != 0 &&
         (iVar2 = (*DAT_10121f20)(iVar1), iVar2 != 0))) {
    if (*(int *)(iVar1 + 0x7c) != 0) {
      return *(int *)(iVar1 + 0x7c);
    }
  }
  return 0;
}

