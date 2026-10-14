
uint __cdecl FUN_100c2dc0(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x510);
  do {
    for (iVar1 = *piVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xe0)) {
      param_1 = FUN_100d8b20(*(void **)(DAT_10122044 + 0x98),
                             (byte *)(**(int **)(iVar1 + 4) + (int)*(void **)(DAT_10122044 + 0x98)),
                             param_2);
      if (param_1 == 0) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 6);
  return param_1 & 0xffffff00;
}

