
undefined4 __fastcall FUN_10016150(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) == 0) {
    iVar1 = *(int *)(param_1 + 0x238);
    if (0 < iVar1) {
      piVar3 = (int *)(param_1 + 0x1b8);
      do {
        if (*piVar3 == 0) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
    if (iVar2 == iVar1) {
      if ((*(int *)(param_1 + 0x23c) != 0) &&
         (iVar2 = FUN_100b5a50(&DAT_101323a8,*(int *)(param_1 + 0x23c)), iVar2 != 1)) {
        return 0;
      }
      return 2;
    }
  }
  return 0;
}

