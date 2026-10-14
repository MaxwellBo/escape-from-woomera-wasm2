
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10030920(int param_1)

{
  int iVar1;
  
  (*DAT_100b218c)(0);
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) == 0x40000000) {
    (*DAT_100b2168)();
  }
  else if (*(int *)(*(int *)(param_1 + 0x2c) + 0xc) == 0x40400000) {
    (*DAT_100b2160)();
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc)) {
      do {
        (*DAT_100b2148)(iVar1,param_1 + 0x48,param_1 + 0x4c);
        (*DAT_100b215c)();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc));
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == _DAT_1005acc8) {
    (**(code **)(DAT_100a5138 + 4))(5);
    (*DAT_100b2160)();
    (**(code **)(DAT_100a5138 + 4))(0);
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == _DAT_1005c36c) {
    (*DAT_100b2164)();
  }
                    /* WARNING: Could not recover jumptable at 0x100309d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100b2190)();
  return;
}

