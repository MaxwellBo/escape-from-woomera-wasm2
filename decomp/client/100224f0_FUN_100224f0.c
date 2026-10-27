
void FUN_100224f0(void)

{
  int iVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = (*DAT_100a5080)();
  if (iVar1 < 2) {
    (*DAT_100a5078)(&uStack_c);
    if (DAT_100a97b0 == 0) {
      DAT_100a97b0 = 1;
      DAT_100a973c = uStack_8;
      DAT_100a9738 = uStack_c;
      DAT_100a9740 = 0x41f00000;
    }
    (*DAT_100a5084)(s_cam_command_10078da4,0);
  }
  return;
}

