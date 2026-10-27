
int __cdecl FUN_100aed50(undefined4 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = -1;
  piVar1 = (int *)FUN_100af030(0,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  do {
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x118))(param_1), iVar2 != 0)) &&
       ((iVar3 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x208)), iVar4 == -1 ||
        (iVar3 < iVar4)))) {
      iVar4 = iVar3;
      iVar5 = iVar2;
    }
    piVar1 = (int *)FUN_100af030((int)piVar1,param_2);
  } while (piVar1 != (int *)0x0);
  return iVar5;
}

