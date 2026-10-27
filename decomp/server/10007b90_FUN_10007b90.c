
int __thiscall FUN_10007b90(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iStack_4;
  
  iVar4 = -1;
  iVar5 = 0;
  iStack_4 = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    lVar6 = __ftol();
    FUN_100c84d7((DWORD)lVar6);
    _rand();
    if (*(int *)(param_1 + 0x144) == 1) {
      iVar1 = _rand();
      iVar1 = iVar1 % *(int *)(param_1 + 0x100) + 1;
      if (0 < *(int *)(param_1 + 0xbc)) {
        piVar2 = (int *)(param_1 + 0x104);
        do {
          iVar1 = iVar1 - *piVar2;
          if (iVar1 < 1) break;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xbc));
      }
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0xbc)) {
        piVar2 = (int *)(param_1 + 0x104);
        do {
          iVar1 = _rand();
          if (iVar1 % 100 <= *piVar2) break;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xbc));
      }
    }
  }
  if (iVar5 < *(int *)(param_1 + 0xbc)) {
    do {
      iVar1 = FUN_100af030(param_2,(byte *)(*(int *)(param_1 + 0xc0 + iVar5 * 4) +
                                           *(int *)(DAT_10122044 + 0x98)));
      if ((iVar1 != 0) &&
         ((iVar3 = (*DAT_10121f20)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208)), iVar4 == -1 ||
          (iVar3 < iVar4)))) {
        iVar4 = iVar3;
        iStack_4 = iVar1;
      }
      if (*(int *)(param_1 + 0x144) == 1) {
        return iStack_4;
      }
      if (*(int *)(param_1 + 0x144) == 2) {
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 0xbc) <= iVar5) {
          return iStack_4;
        }
        piVar2 = (int *)(param_1 + 0x104 + iVar5 * 4);
        do {
          iVar1 = _rand();
          if (iVar1 % 100 < *piVar2) break;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar5 < *(int *)(param_1 + 0xbc));
      }
      else {
        iVar5 = iVar5 + 1;
      }
    } while (iVar5 < *(int *)(param_1 + 0xbc));
  }
  return iStack_4;
}

