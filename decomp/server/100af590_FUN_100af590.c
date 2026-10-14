
void __cdecl FUN_100af590(undefined2 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0xd0))();
    if (iVar1 != 0) {
      (*DAT_10121ec0)(1,DAT_10124864,0,*(undefined4 *)(param_2[1] + 0x208));
      (*DAT_10121ed0)(*param_1);
      (*DAT_10121ed0)(param_1[1]);
      (*DAT_10121ed0)((int)(short)param_1[2]);
      (*DAT_10121ec8)(*(undefined1 *)(param_1 + 3));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_1 + 7));
      (*DAT_10121ec8)(*(undefined1 *)(param_1 + 4));
      (*DAT_10121ec8)(*(undefined1 *)((int)param_1 + 9));
      (*DAT_10121ec4)();
    }
  }
  return;
}

