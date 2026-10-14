
void FUN_10089890(int param_1,int param_2)

{
  uint uVar1;
  
  DAT_10126a38 = param_1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_10089220((uint)(param_2 != 0));
    if (*(int *)(DAT_10126a38 + 0xe0) == -1) {
      uVar1 = *(uint *)(DAT_10126a38 + 0xb8) & 0xfffffdff;
    }
    else {
      uVar1 = *(uint *)(DAT_10126a38 + 0xb8) | 0x200;
    }
    *(uint *)(DAT_10126a38 + 0xb8) = uVar1;
    if ((*(int *)(DAT_10126a38 + 8) == 0) && (*(int *)(DAT_10126a38 + 0xdc) == 3)) {
      *(undefined4 *)(DAT_10126a38 + 0xc4) = 0x3f800000;
    }
  }
  return;
}

