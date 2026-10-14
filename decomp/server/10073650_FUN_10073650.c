
void __thiscall FUN_10073650(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 200) == 0) {
    uVar2 = ~*(uint *)(*(int *)((int)this + 4) + 0x1a0) & 1;
    iVar1 = FUN_1001a140(param_3,uVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)((int)this + 4);
      if (uVar2 != 0) {
        *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 1;
        return;
      }
      *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) & 0xfffffffe;
    }
  }
  else {
    uVar2 = ~*(uint *)(*(int *)((int)this + 4) + 0x1a0) >> 0xf & 1;
    iVar1 = FUN_1001a140(param_3,uVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)((int)this + 4);
      if (uVar2 != 0) {
        *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
        return;
      }
      *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) & 0xffff7fff;
      return;
    }
  }
  return;
}

