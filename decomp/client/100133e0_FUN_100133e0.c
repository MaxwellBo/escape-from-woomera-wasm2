
int __thiscall FUN_100133e0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x19008);
  do {
    if (*piVar2 == param_1) {
      return iVar1 * 0x10 + 0x18ffc + (int)this;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 7);
  return 0;
}

