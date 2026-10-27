
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007d970(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  iVar1 = 0;
  do {
    FUN_100afc90(param_1 + 0x88,param_1 + 0x88,0,3,param_1,auStack_38);
    if (iStack_34 == 0) {
      return;
    }
    iVar1 = iVar1 + 1;
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + _DAT_100dd618;
  } while (iVar1 < 0x12);
  return;
}

