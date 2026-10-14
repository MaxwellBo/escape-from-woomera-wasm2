
undefined4 __thiscall FUN_10091470(void *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_100b3d00(param_1,param_2);
  if (iVar1 != 0) {
    (*DAT_10121ec0)(1,DAT_101248cc,0,*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
    (*DAT_10121ec8)(*(undefined4 *)((int)param_1 + 0xe4));
    (*DAT_10121ec4)();
    return 1;
  }
  return 0;
}

