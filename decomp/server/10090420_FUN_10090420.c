
void __fastcall FUN_10090420(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xc5]));
  iVar2 = 0;
  do {
    if (piVar1 == (int *)0x0) {
      if (iVar2 == 0) {
        piVar1 = (int *)FUN_100aec40(0,*(int *)(DAT_10122044 + 0x98) + param_1[0xc5]);
        goto LAB_100904a7;
      }
      break;
    }
    if ((*(byte *)(piVar1[1] + 0x1a4) & 0x20) != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x74))();
    }
    piVar1 = (int *)FUN_100af030((int)piVar1,(byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0xc5])
                                );
  } while (iVar2 == 0);
  goto LAB_100904dd;
  while( true ) {
    iVar2 = (**(code **)(*piVar1 + 0x74))();
    piVar1 = (int *)FUN_100aec40((int)piVar1,*(int *)(DAT_10122044 + 0x98) + param_1[0xc5]);
    if (iVar2 != 0) break;
LAB_100904a7:
    if (piVar1 == (int *)0x0) {
      if (iVar2 == 0) goto LAB_1009052a;
      break;
    }
  }
LAB_100904dd:
  iVar2 = (*DAT_10121f30)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x208));
  if (iVar2 != 0) {
    FUN_10008970(iVar2,(byte *)(param_1[0xc3] + *(int *)(DAT_10122044 + 0x98)));
    FUN_10008970(iVar2,(byte *)(param_1[0xc4] + *(int *)(DAT_10122044 + 0x98)));
  }
LAB_1009052a:
  FUN_10019470(param_1);
  return;
}

