
void __fastcall FUN_100183e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  do {
    if (*piVar2 != 0) {
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 0xc);
  param_1[0x31] = 0;
  return;
}

