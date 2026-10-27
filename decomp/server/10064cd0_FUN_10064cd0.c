
undefined4 FUN_10064cd0(void *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iStack_4;
  
  piVar2 = param_2;
  iVar4 = -1;
  piVar5 = (int *)0x0;
  iVar3 = (**(code **)(*param_2 + 0x130))();
  if (iVar3 == 0) {
    return 0;
  }
  iStack_4 = 0;
  param_2 = (int *)((int)param_1 + 0x510);
  do {
    for (piVar1 = (int *)*param_2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x38]) {
      iVar3 = *(int *)(&DAT_10131e40 + piVar1[0x39] * 0x2c);
      if (((iVar3 < 0) || (iVar3 != *(int *)(&DAT_10131e40 + piVar2[0x39] * 0x2c))) ||
         (piVar1 == piVar2)) {
        if (((iVar4 < iVar3) && (piVar1 != piVar2)) &&
           (iVar3 = (**(code **)(*piVar1 + 0x128))(), iVar3 != 0)) {
          iVar4 = *(int *)(&DAT_10131e40 + piVar1[0x39] * 0x2c);
          piVar5 = piVar1;
        }
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0x128))();
        if ((iVar3 != 0) && (iVar3 = FUN_10082370(param_1,piVar1), iVar3 != 0)) {
          return 1;
        }
      }
    }
    iStack_4 = iStack_4 + 1;
    param_2 = param_2 + 1;
    if (5 < iStack_4) {
      if (piVar5 != (int *)0x0) {
        FUN_10082370(param_1,piVar5);
        return 1;
      }
      return 0;
    }
  } while( true );
}

