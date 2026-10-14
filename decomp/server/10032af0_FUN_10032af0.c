
void __thiscall FUN_10032af0(void *this,undefined4 param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  longlong lVar3;
  
  bVar1 = FUN_10019450((uint *)((int)this + 0xc4));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_10019680((int)this);
    *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
    return;
  }
  (*DAT_10121ec0)(4,0x17,*(int *)((int)this + 4) + 8,0);
  (*DAT_10121ec8)(0x1c);
  iVar2 = FUN_10019460((uint *)((int)this + 0xc4));
  iVar2 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x208));
  (*DAT_10121ed0)(iVar2 + *(int *)(*(int *)((int)this + 4) + 0x184) * 0x1000);
  (*DAT_10121edc)(*(undefined4 *)((int)this + 0xb8));
  (*DAT_10121edc)(*(undefined4 *)((int)this + 0xbc));
  (*DAT_10121edc)(*(undefined4 *)((int)this + 0xc0));
  (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 0x14c));
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  lVar3 = __ftol();
  (*DAT_10121ec8)((int)lVar3);
  (*DAT_10121ec8)(param_1);
  (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 4) + 0x164));
  (*DAT_10121ec4)();
  return;
}

