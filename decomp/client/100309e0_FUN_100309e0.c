
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100309e0(int param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = (*DAT_100b217c)();
  if (iVar1 == 0) {
    uStack_4 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x2f8);
  }
  else {
    uStack_4 = 5;
  }
  (*DAT_100b218c)(uStack_4);
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
        if (*(int *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xb90) = 0;
        }
        (*DAT_100b21a0)(uStack_4);
        (*DAT_100b215c)();
        (*DAT_100b219c)();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 0x44) + 0xcc));
    }
  }
  if (*(float *)(*(int *)(param_1 + 0x2c) + 0xc) == _DAT_1005acc8) {
    (**(code **)(DAT_100a5138 + 4))(5);
    (*DAT_100b2160)();
    (**(code **)(DAT_100a5138 + 4))(0);
  }
  (*DAT_100b2190)();
  return;
}

