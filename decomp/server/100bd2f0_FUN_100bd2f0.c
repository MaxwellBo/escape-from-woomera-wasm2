
void FUN_100bd2f0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined1 *)0x0) {
      uVar1 = *param_3;
      *(undefined4 *)(param_1 + 4) = 0;
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_100ba9a0(param_1,param_3,0,DAT_100f7054);
      param_1[0x10] = param_3[0x10];
      param_3[0x10] = 0;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    }
    param_1 = param_1 + 0x18;
  }
  return;
}

