
void __thiscall FUN_10070d00(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0xc0);
  if ((iVar1 < 0x80) && (param_1 != param_2)) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar2 = (int *)((int)this + 0x2c4);
      do {
        if ((piVar2[-0x80] == param_1) && (*piVar2 == param_2)) {
          return;
        }
        if ((piVar2[-0x80] == param_2) && (*piVar2 == param_1)) {
          return;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar1);
    }
    *(int *)((int)this + iVar1 * 4 + 0xc4) = param_1;
    *(int *)((int)this + *(int *)((int)this + 0xc0) * 4 + 0x2c4) = param_2;
    *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) + 1;
  }
  return;
}

