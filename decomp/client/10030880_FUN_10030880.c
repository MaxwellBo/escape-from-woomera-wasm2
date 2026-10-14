
void __fastcall FUN_10030880(int *param_1)

{
  int iVar1;
  
  (*DAT_100b2194)();
  (*DAT_100b2180)(0);
  if (*(int *)(param_1[0xc] + 0x304) == 0x13) {
    *(undefined4 *)(param_1[0xc] + 0x304) = 0;
    (**(code **)(*param_1 + 0x4c))();
    iVar1 = (*DAT_100b2198)();
    if (iVar1 == 0) {
      (**(code **)(DAT_100a5138 + 4))(5);
    }
    (*DAT_100b2180)(2);
    (**(code **)(DAT_100a5138 + 0x2c))(param_1[0x16],0);
    *(undefined4 *)(param_1[0xc] + 0x304) = 0x13;
    (**(code **)(*param_1 + 0x4c))();
    iVar1 = (*DAT_100b2198)();
    if (iVar1 == 0) {
      (**(code **)(DAT_100a5138 + 4))(0);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x4c))();
  }
  return;
}

