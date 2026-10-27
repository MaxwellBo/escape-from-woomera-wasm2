
undefined4 __thiscall FUN_1004e840(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b3d00(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x150))();
      *(undefined4 *)(param_2 + 0x534 + iVar1 * 4) = 8;
    }
    (*DAT_10121ec0)(1,DAT_101248cc,0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
    (*DAT_10121ec8)(param_1[0x39]);
    (*DAT_10121ec4)();
    return 1;
  }
  return 0;
}

