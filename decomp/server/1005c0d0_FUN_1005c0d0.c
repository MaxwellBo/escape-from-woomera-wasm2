
void __thiscall FUN_1005c0d0(void *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *this;
  int iVar4;
  undefined1 auStack_80 [128];
  
  FUN_1005acd0(param_1,param_2);
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar4 = 0;
    piVar1 = (int *)((int)param_1 + 0xbc);
    while (*piVar1 != 0) {
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
      if (0x1f < iVar4) {
        return;
      }
    }
    FUN_100b1090(*(char **)(param_2 + 4),auStack_80);
    uVar2 = (*DAT_10121f14)(auStack_80);
    *(undefined4 *)((int)param_1 + iVar4 * 4 + 0xbc) = uVar2;
    iVar3 = FUN_100c8388(this,*(byte **)(param_2 + 8));
    *(int *)((int)param_1 + iVar4 * 4 + 0x13c) = iVar3;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    *(int *)((int)param_1 + iVar4 * 4 + 0x13c) = iVar3;
    *(undefined4 *)(param_2 + 0xc) = 1;
  }
  return;
}

