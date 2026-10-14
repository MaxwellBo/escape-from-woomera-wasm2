
int * FUN_1008b030(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0xb8);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_FUN_100efc50;
    }
    piVar3[1] = iVar2;
  }
  (**(code **)(*piVar3 + 0x28))();
  *(int *)piVar3[1] = (int)s_laser_spot_10115474 - *(int *)(DAT_10122044 + 0x98);
  return piVar3;
}

