
void __cdecl FUN_100afa50(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0xd0))();
  if (iVar1 != 0) {
    (*DAT_10121ec0)(1,DAT_101248dc,0,*(undefined4 *)(param_2[1] + 0x208));
    uVar2 = (*DAT_10121f24)(*(undefined4 *)(param_2[1] + 0x208));
    (*DAT_10121ec8)(uVar2);
    (*DAT_10121ee0)(param_1);
    (*DAT_10121ec4)();
  }
  return;
}

