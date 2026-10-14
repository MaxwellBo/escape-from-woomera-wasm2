
void __cdecl FUN_100afb80(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xd0))();
    if (iVar1 != 0) {
      (*DAT_10121ec0)(1,DAT_101248a8,0,*(undefined4 *)(param_2[1] + 0x208));
      (*DAT_10121ee0)(param_1);
      (*DAT_10121ec4)();
    }
  }
  return;
}

