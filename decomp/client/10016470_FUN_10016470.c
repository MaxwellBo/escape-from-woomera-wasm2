
undefined4 __thiscall FUN_10016470(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)this + param_1 * 0x2c + 0x2900);
  do {
    if (*piVar2 != 0) {
      iVar1 = FUN_10015ed0(this,*piVar2);
      if (iVar1 != 0) {
        return *(undefined4 *)((int)this + (iVar3 + param_1 * 0xb) * 4 + 0x2900);
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 10);
  return 0;
}

