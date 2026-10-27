
int __thiscall FUN_10016ac0(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x84);
  while( true ) {
    if (piVar2[-1] == param_1) {
      *param_2 = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xd4);
      param_2[1] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xd8);
      param_2[2] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xdc);
      param_2[3] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xe0);
      return (int)this + iVar1 * 0x148 + 0xd0;
    }
    if (*piVar2 == param_1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x52;
    if (0x1f < iVar1) {
      return 0;
    }
  }
  *param_2 = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xe8);
  param_2[1] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xec);
  param_2[2] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xf0);
  param_2[3] = *(undefined4 *)((int)this + iVar1 * 0x148 + 0xf4);
  return (int)this + iVar1 * 0x148 + 0xe4;
}

