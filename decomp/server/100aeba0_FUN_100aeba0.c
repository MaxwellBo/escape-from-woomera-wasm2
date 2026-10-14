
undefined4 __cdecl FUN_100aeba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  }
  iVar2 = (*DAT_10121e48)(uVar1,param_2,param_3);
  if (iVar2 != 0) {
    iVar3 = (*DAT_10121f20)(iVar2);
    if (iVar3 != 0) {
      return *(undefined4 *)(iVar2 + 0x7c);
    }
  }
  return 0;
}

