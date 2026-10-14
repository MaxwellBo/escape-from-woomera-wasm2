
undefined4 __cdecl FUN_100b0750(char *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*DAT_10121db8 + 0x20))();
  if (iVar1 == 0) {
    return 1;
  }
  if ((*param_1 != '\0') && (*param_2 != 0)) {
    uVar2 = FUN_100d8b20(param_1,(byte *)param_1,param_2);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

