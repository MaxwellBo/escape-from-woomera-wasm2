
undefined4 __thiscall FUN_100961f0(void *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  bVar2 = FUN_10019450((uint *)((int)this + 0x308));
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 1;
  }
  iVar3 = FUN_10096e20((int)this);
  if (iVar3 != 0) {
    *(undefined4 *)((int)this + 0x33c) = 0x400;
    return 1;
  }
  pvVar4 = (void *)FUN_10019410((uint *)((int)this + 0x308));
  if (pvVar4 == (void *)0x0) {
    pvVar4 = this;
  }
  uVar1 = *(uint *)((int)pvVar4 + 0x330);
  if (uVar1 != param_1) {
    iVar3 = 0;
    do {
      uVar5 = 1 << ((byte)iVar3 & 0x1f);
      if (((param_1 & uVar5) != 0) && ((uVar1 & uVar5) == 0)) {
        *(uint *)((int)pvVar4 + 0x330) = uVar1 | uVar5;
        *(uint *)((int)this + 0x33c) = uVar5;
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xb);
  }
  return 0;
}

