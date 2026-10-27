
void __cdecl FUN_1002bd60(int param_1,int param_2)

{
  uint uVar1;
  
  DAT_100acc38 = param_1;
  if (*(int *)(param_1 + 0xdc) == 0) {
    if (*(int *)(param_1 + 0x4f5b0) != 0) {
      *(undefined4 *)(param_1 + 0x44) = DAT_100bcdd0;
      *(undefined4 *)(DAT_100acc38 + 0x48) = DAT_100bcdd4;
      *(undefined4 *)(DAT_100acc38 + 0x4c) = DAT_100bcdd8;
      DAT_100b6764 = DAT_100bcdd0;
      DAT_100b676c = DAT_100bcdd8;
      DAT_100b6768 = DAT_100bcdd4;
      DAT_100b6fc8 = 1;
      *(undefined4 *)(DAT_100acc38 + 0x38) = DAT_100bcdc0;
      *(undefined4 *)(DAT_100acc38 + 0x3c) = DAT_100bcdc4;
      *(undefined4 *)(DAT_100acc38 + 0x40) = DAT_100bcdc8;
      DAT_100b6f88 = DAT_100bcdc0;
      DAT_100b6f8c = DAT_100bcdc4;
      DAT_100b6f90 = DAT_100bcdc8;
      DAT_100b6ff0 = 1;
      return;
    }
  }
  else {
    FUN_1002b6e0((uint)(param_2 != 0));
    if (*(int *)(DAT_100acc38 + 0xe0) == -1) {
      uVar1 = *(uint *)(DAT_100acc38 + 0xb8) & 0xfffffdff;
    }
    else {
      uVar1 = *(uint *)(DAT_100acc38 + 0xb8) | 0x200;
    }
    *(uint *)(DAT_100acc38 + 0xb8) = uVar1;
    if ((*(int *)(DAT_100acc38 + 8) == 0) && (*(int *)(DAT_100acc38 + 0xdc) == 3)) {
      *(undefined4 *)(DAT_100acc38 + 0xc4) = 0x3f800000;
    }
    DAT_100bcdd0 = *(undefined4 *)(DAT_100acc38 + 0x44);
    DAT_100bcdd4 = *(undefined4 *)(DAT_100acc38 + 0x48);
    DAT_100bcdd8 = *(undefined4 *)(DAT_100acc38 + 0x4c);
    DAT_100bcdc0 = *(undefined4 *)(DAT_100acc38 + 0x38);
    DAT_100bcdc4 = *(undefined4 *)(DAT_100acc38 + 0x3c);
    DAT_100bcdc8 = *(undefined4 *)(DAT_100acc38 + 0x40);
  }
  return;
}

