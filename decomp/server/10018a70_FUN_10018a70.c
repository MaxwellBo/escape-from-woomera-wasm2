
undefined4 __thiscall FUN_10018a70(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_3 + 0x208);
  if (iVar1 == 0) {
    iVar1 = (*DAT_10121f1c)(0);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_10018a96;
    }
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x7c);
LAB_10018a96:
  (**(code **)(*param_1 + 0xe4))(uVar2,param_1,3,0);
  return 1;
}

