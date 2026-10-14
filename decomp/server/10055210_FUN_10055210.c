
undefined4 __thiscall FUN_10055210(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x170) != 0) {
    return 0;
  }
  if ((*(uint *)(iVar1 + 0x168) & 0x80000000) != 0) {
    return 0;
  }
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = s__HEV_AAx_1010fa8c;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x208);
    pcVar3 = s__HEV_A0_1010fa98;
  }
  FUN_10094bb0(uVar2,pcVar3);
  *(uint *)(*(int *)(param_1 + 4) + 0x168) = *(uint *)(*(int *)(param_1 + 4) + 0x168) | 0x80000000;
  return 1;
}

