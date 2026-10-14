
undefined4 __cdecl FUN_1007e9b0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x54))(param_1);
  if (iVar1 == 2) {
    piVar2 = (int *)FUN_100aeba0(0,param_2[1] + 8,0x43000000);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        return 1;
      }
      iVar1 = (**(code **)(*piVar2 + 0xcc))();
      if ((iVar1 != 0) && (piVar2 != param_1)) break;
      piVar2 = (int *)FUN_100aeba0((int)piVar2,param_2[1] + 8,0x43000000);
    }
  }
  return 0;
}

