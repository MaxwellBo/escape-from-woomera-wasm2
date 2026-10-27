
int __thiscall
FUN_1001e950(void *this,int param_1,undefined4 param_2,byte param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0x15a8);
  piVar1 = (int *)(iVar5 * 0x10 + *(int *)((int)this + 0x74));
  iVar4 = piVar1[1] - *piVar1;
  if (0 < param_4) {
    if (param_4 < 100) {
      if ((param_3 & 4) != 0) {
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar5 = iVar5 + param_4 / 100;
      if (iVar5 < 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x70) + iVar5 * 4);
      }
      (*DAT_100a5000)(uVar2,param_5,param_6,param_7);
      (*DAT_100a500c)(0,param_1,param_2,
                      (param_4 / 100 + *(int *)((int)this + 0x15a8)) * 0x10 +
                      *(int *)((int)this + 0x74));
      param_1 = param_1 + iVar4;
    }
    if (param_4 < 10) {
      if ((param_3 & 6) != 0) {
        param_1 = param_1 + iVar4;
      }
    }
    else {
      iVar5 = (param_4 % 100) / 10;
      iVar3 = iVar5 + *(int *)((int)this + 0x15a8);
      if (iVar3 < 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(*(int *)((int)this + 0x70) + iVar3 * 4);
      }
      (*DAT_100a5000)(uVar2,param_5,param_6,param_7);
      (*DAT_100a500c)(0,param_1,param_2,
                      (iVar5 + *(int *)((int)this + 0x15a8)) * 0x10 + *(int *)((int)this + 0x74));
      param_1 = param_1 + iVar4;
    }
    iVar5 = param_4 % 10 + *(int *)((int)this + 0x15a8);
    if (iVar5 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)((int)this + 0x70) + iVar5 * 4);
    }
    (*DAT_100a5000)(uVar2,param_5,param_6,param_7);
    (*DAT_100a500c)(0,param_1,param_2,
                    (param_4 % 10 + *(int *)((int)this + 0x15a8)) * 0x10 +
                    *(int *)((int)this + 0x74));
    return param_1 + iVar4;
  }
  if ((param_3 & 1) != 0) {
    if (iVar5 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)((int)this + 0x70) + iVar5 * 4);
    }
    (*DAT_100a5000)(uVar2,param_5,param_6,param_7);
    if ((param_3 & 4) != 0) {
      param_1 = param_1 + iVar4;
    }
    if ((param_3 & 6) != 0) {
      param_1 = param_1 + iVar4;
    }
    (*DAT_100a500c)(0,param_1,param_2,
                    *(int *)((int)this + 0x15a8) * 0x10 + *(int *)((int)this + 0x74));
    return param_1 + iVar4;
  }
  return param_1;
}

