
void __fastcall FUN_10035bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x160))();
  if (param_1[0x74] != iVar1) {
    param_1[0xc5] = 0;
    param_1[0x74] = iVar1;
  }
  *(undefined4 *)(param_1[1] + 0x58) = 0;
  *(undefined4 *)(param_1[1] + 0x50) = 0;
  param_1[0xc2] = DAT_10121dd8;
  param_1[0xc3] = DAT_10121ddc;
  param_1[0xc4] = DAT_10121de0;
  return;
}

