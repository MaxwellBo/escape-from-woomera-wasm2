
void __cdecl FUN_100b02a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_100b0180(param_3);
  if (((iVar1 != 0) && (param_3 != -1)) && (param_4 != 0)) {
    if ((DAT_10121de8 == 1) && (param_3 == 0xf7)) {
      param_3 = 0;
    }
    iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (iVar1 != 0) {
      param_4 = param_4 * 2;
    }
    if (0xff < param_4) {
      param_4 = 0xff;
    }
    (*DAT_10121ec0)(4,0x17,param_1,0);
    (*DAT_10121ec8)(0x73);
    (*DAT_10121edc)(*param_1);
    (*DAT_10121edc)(param_1[1]);
    (*DAT_10121edc)(param_1[2]);
    (*DAT_10121ed0)((int)DAT_10131d08);
    (*DAT_10121ed0)((int)DAT_10131cf4);
    (*DAT_10121ec8)(param_3);
    iVar1 = param_4 / 10;
    if (iVar1 < 3) {
LAB_100b037b:
      (*DAT_10121ec8)(3);
      (*DAT_10121ec4)();
      return;
    }
    if (iVar1 < 0x10) {
      if (iVar1 < 3) goto LAB_100b037b;
    }
    else {
      iVar1 = 0x10;
    }
    (*DAT_10121ec8)(iVar1);
    (*DAT_10121ec4)();
  }
  return;
}

