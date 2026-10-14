
uint __thiscall FUN_100349d0(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 8))) {
    *param_2 = 1;
    iVar3 = *(int *)(param_1 + 0xc) + 1;
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + -1 + iVar3);
    *(int *)(param_1 + 0xc) = iVar3;
    return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),uVar1);
  }
  *param_2 = 0;
  return uVar2 & 0xffffff00;
}

