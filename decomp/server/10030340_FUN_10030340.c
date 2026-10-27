
void __thiscall FUN_10030340(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1c8);
  if (iVar1 == 0) {
    iVar1 = FUN_1001a170(this,param_3);
    if (iVar1 == 0) {
      return;
    }
    FUN_10030420(this,(int)this,param_3);
  }
  else {
    for (iVar1 = FUN_100af060(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1),param_1); iVar1 != 0
        ; iVar1 = FUN_100af060(iVar1,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                             *(int *)(*(int *)((int)this + 4) + 0x1c8)),param_1)) {
      FUN_10030420(this,iVar1,param_3);
    }
  }
  if (param_3 == 1) {
    *(uint *)(*(int *)((int)this + 4) + 0x1a0) =
         *(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0xfffffffe;
    return;
  }
  if (param_3 == 0) {
    iVar1 = *(int *)((int)this + 4);
    uVar2 = *(uint *)(iVar1 + 0x1a0);
  }
  else {
    if (param_3 != 3) {
      return;
    }
    iVar1 = *(int *)((int)this + 4);
    uVar2 = *(uint *)(iVar1 + 0x1a0);
    if ((uVar2 & 1) != 0) {
      *(uint *)(iVar1 + 0x1a0) = uVar2 & 0xfffffffe;
      return;
    }
  }
  *(uint *)(iVar1 + 0x1a0) = uVar2 | 1;
  return;
}

