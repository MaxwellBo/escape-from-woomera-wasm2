
void __thiscall FUN_1009cc00(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[3] != 0) {
    return;
  }
  if (((((param_2 != 0) && (param_3 != (int *)0x0)) && ((*(byte *)(param_3 + 0x69) & 8) != 0)) &&
      ((iVar1 = param_3[0x82], iVar1 != 0 || (iVar1 = (*DAT_10121f1c)(0), iVar1 != 0)))) &&
     ((iVar1 = *(int *)(iVar1 + 0x7c), iVar1 != 0 &&
      ((iVar1 != param_2 && (iVar1 = (**(code **)(*param_1 + 200))(param_2,iVar1), iVar1 == 1))))))
  {
    (*DAT_10121ec0)(2,DAT_101248ac,0,0);
    uVar2 = (*DAT_10121f24)(param_3[0x82]);
    (*DAT_10121ec8)(uVar2);
    uVar2 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_2 + 4) + 0x208));
    (*DAT_10121ec8)(uVar2);
    (*DAT_10121ee0)(s_teammate_10118084);
    (*DAT_10121ec4)();
    return;
  }
  FUN_10065510(param_2,param_3,param_4);
  return;
}

