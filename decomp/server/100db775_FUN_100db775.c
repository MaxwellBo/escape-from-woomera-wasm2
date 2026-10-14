
undefined4 __thiscall FUN_100db775(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x34) < 0) {
    FUN_100db550((LPCRITICAL_SECTION)((int)this + *(int *)(*(int *)this + 4) + 0x38));
  }
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar2 = *(int *)(*(int *)this + 4);
  uVar1 = *(uint *)(iVar2 + 8 + (int)this);
  if (uVar1 == 0) {
    if (*(int *)((int)this + iVar2 + 0x20) != 0) {
      if (param_1 != 0) {
        iVar2 = FUN_100db3a7(*(int *)((int)this + iVar2 + 4));
        if (param_1 <= iVar2) goto LAB_100db7d7;
      }
      FUN_100da602(*(int **)(*(int *)(*(int *)this + 4) + 0x20 + (int)this));
    }
LAB_100db7d7:
    iVar2 = *(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this);
    if (*(int *)(iVar2 + 0x30) < 0) {
      FUN_100db550((LPCRITICAL_SECTION)(iVar2 + 0x34));
    }
    if ((param_1 == 0) && ((*(byte *)(*(int *)(*(int *)this + 4) + 0x24 + (int)this) & 1) != 0)) {
      FUN_100dba38(this);
      uVar1 = *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
      if (uVar1 != 0) {
        *(uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this) = uVar1 | 2;
        iVar2 = *(int *)(*(int *)(*(int *)this + 4) + 4 + (int)this);
        if (*(int *)(iVar2 + 0x30) < 0) {
          FUN_100db55b((LPCRITICAL_SECTION)(iVar2 + 0x34));
        }
        goto LAB_100db833;
      }
    }
    uVar3 = 1;
  }
  else {
    *(uint *)((int)this + iVar2 + 8) = uVar1 | 2;
LAB_100db833:
    if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x34) < 0) {
      FUN_100db55b((LPCRITICAL_SECTION)((int)this + *(int *)(*(int *)this + 4) + 0x38));
    }
    uVar3 = 0;
  }
  return uVar3;
}

