
int * __thiscall FUN_100db856(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  uint uVar5;
  undefined1 local_8;
  
  uVar5 = 0;
  iVar2 = FUN_100db775(this,0);
  if (iVar2 == 0) {
    return this;
  }
  iVar2 = *(int *)(*(int *)(*(int *)this + 4) + 0x30 + (int)this);
  *(undefined4 *)(*(int *)(*(int *)this + 4) + 0x30 + (int)this) = 0;
  if ((param_1 != 0) && (iVar2 != 1)) {
    do {
      iVar3 = FUN_100dbc64(*(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this));
      if (iVar3 == -1) {
        puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
        *puVar1 = *puVar1 | 1;
        if (uVar5 != 0) goto LAB_100db8fb;
        puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
        *puVar1 = *puVar1 | 6;
        break;
      }
      uVar4 = FUN_100c862b(this_00,iVar3);
      if (uVar4 != 0) break;
      local_8 = (undefined1)iVar3;
      *(undefined1 *)(uVar5 + param_1) = local_8;
      FUN_100dbc2b(*(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this));
      uVar5 = uVar5 + 1;
    } while (uVar5 < iVar2 - 1U);
    if (uVar5 != 0) {
LAB_100db8fb:
      *(undefined1 *)(uVar5 + param_1) = 0;
      goto LAB_100db902;
    }
  }
  puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
  *puVar1 = *puVar1 | 2;
LAB_100db902:
  FUN_100da2d0(this);
  return this;
}

