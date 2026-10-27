
void __thiscall FUN_10030420(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((param_2 != 1) && ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) == 0)) {
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(99);
    uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    (*DAT_10121ed0)(uVar1);
    (*DAT_10121ec4)();
    return;
  }
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x16);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ed0)(uVar1);
  (*DAT_10121ed0)(*(undefined4 *)((int)this + 0xb8));
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  lVar2 = __ftol();
  (*DAT_10121ec8)((int)lVar2);
  (*DAT_10121ec4)();
  return;
}

