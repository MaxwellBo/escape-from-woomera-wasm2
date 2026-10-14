
void __fastcall FUN_1004dcd0(int param_1)

{
  undefined4 uVar1;
  
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x16);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ed0)(uVar1);
  (*DAT_10121ed0)(DAT_10122054);
  (*DAT_10121ec8)(10);
  (*DAT_10121ec8)(2);
  if (*(int *)(param_1 + 0x30c) == 0) {
    (*DAT_10121ec8)(0xb3);
    (*DAT_10121ec8)(0x27);
    uVar1 = 0xe;
  }
  else {
    if (*(int *)(param_1 + 0x30c) != 1) goto LAB_1004dd66;
    (*DAT_10121ec8)(0xff);
    (*DAT_10121ec8)(0x80);
    uVar1 = 0;
  }
  (*DAT_10121ec8)(uVar1);
LAB_1004dd66:
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec4)();
  return;
}

