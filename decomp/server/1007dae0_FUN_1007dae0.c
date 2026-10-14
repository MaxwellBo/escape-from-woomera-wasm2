
void __thiscall FUN_1007dae0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  iVar4 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      piVar2 = (int *)FUN_100af1c0(iVar4);
      if (((piVar2 != (int *)0x0) && (iVar4 != iVar1)) &&
         (iVar3 = (**(code **)(*DAT_10121db8 + 200))(param_1,piVar2), iVar3 == 1)) {
        (**(code **)(*piVar2 + 0x80))(param_2,param_3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

