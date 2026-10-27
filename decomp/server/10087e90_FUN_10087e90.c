
int FUN_10087e90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar4 = 0;
  if (0 < *(int *)(DAT_10126a38 + 0x20f50)) {
    iVar5 = 0;
    iVar3 = DAT_10126a38;
    do {
      iVar2 = *(int *)(iVar5 + 0x20f84 + iVar3);
      iVar1 = iVar5 + 0x20f54 + iVar3;
      if (((iVar2 != 0) &&
          (iVar2 = (**(code **)(iVar3 + 0x4f590))(iVar2), iVar3 = DAT_10126a38, iVar2 == 0)) &&
         (*(int *)(iVar1 + 100) == -0x10)) {
        iVar3 = (**(code **)(DAT_10126a38 + 0x4f598))(iVar1,&fStack_c);
        fStack_c = *(float *)(DAT_10126a38 + 0x38) - fStack_c;
        fStack_8 = *(float *)(DAT_10126a38 + 0x3c) - fStack_8;
        fStack_4 = *(float *)(DAT_10126a38 + 0x40) - fStack_4;
        iVar2 = (**(code **)(DAT_10126a38 + 0x4f57c))(iVar3,*(undefined4 *)(iVar3 + 8),&fStack_c);
        iVar3 = DAT_10126a38;
        if (iVar2 != -1) {
          return iVar1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xe0;
    } while (iVar4 < *(int *)(iVar3 + 0x20f50));
  }
  return 0;
}

