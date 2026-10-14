
void __fastcall FUN_1002d380(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_100b2124)(s_cl_himodels_10079af4);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (*DAT_100b2124)(s_developer_10079ae8);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (*DAT_100b2124)(s_r_drawentities_10079ad8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (*DAT_100b212c)();
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  (*DAT_100b2130)(param_1 + 0x4098,param_1 + 0x409c);
  uVar1 = (*DAT_100b2138)();
  *(undefined4 *)(param_1 + 0x40a8) = uVar1;
  uVar1 = (*DAT_100b213c)();
  *(undefined4 *)(param_1 + 0x40ac) = uVar1;
  uVar1 = (*DAT_100b2140)();
  *(undefined4 *)(param_1 + 0x40a4) = uVar1;
  uVar1 = (*DAT_100b2144)();
  *(undefined4 *)(param_1 + 0x40a0) = uVar1;
  return;
}

