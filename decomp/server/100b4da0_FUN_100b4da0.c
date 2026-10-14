
undefined4 __fastcall FUN_100b4da0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xb8);
  do {
    if (*piVar2 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 6);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xd0);
  do {
    if (*piVar2 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x20);
  return 1;
}

