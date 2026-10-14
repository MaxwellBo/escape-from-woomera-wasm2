
int __thiscall FUN_10035bb0(void *this,byte *param_1)

{
  uint uVar1;
  void *this_00;
  void *extraout_ECX;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 8)) {
    iVar2 = 0;
    this_00 = this;
    do {
      uVar1 = FUN_10056910(this_00,param_1,(byte *)(*(int *)((int)this + 4) + iVar2));
      if (uVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x7c;
      this_00 = extraout_ECX;
    } while (iVar3 < *(int *)((int)this + 8));
  }
  return 0;
}

