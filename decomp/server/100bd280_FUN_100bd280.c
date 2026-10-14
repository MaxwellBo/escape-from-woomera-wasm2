
undefined1 * FUN_100bd280(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined1 *)0x0) {
      uVar1 = *param_1;
      *(undefined4 *)(param_3 + 4) = 0;
      *param_3 = uVar1;
      *(undefined4 *)(param_3 + 8) = 0;
      *(undefined4 *)(param_3 + 0xc) = 0;
      FUN_100ba9a0(param_3,param_1,0,DAT_100f7054);
      param_3[0x10] = param_1[0x10];
      param_1[0x10] = 0;
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    }
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 0x18;
  } while (param_1 != param_2);
  return param_3;
}

