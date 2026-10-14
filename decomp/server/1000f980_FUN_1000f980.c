
void __thiscall FUN_1000f980(void *this,undefined4 param_1)

{
  int iVar1;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0x1d0) = param_1;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x1d0);
  if (iVar1 != 0) {
    iVar1 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + iVar1));
    if (iVar1 != 0) {
      *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) | 0x10;
      FUN_10019420((void *)((int)this + 0x168),iVar1);
      return;
    }
  }
  (*DAT_10121efc)(2,s_BM__Finished_the_path___10103938);
  *(uint *)((int)this + 0x2a0) = *(uint *)((int)this + 0x2a0) | 8;
  return;
}

