
void FUN_10033b60(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 1;
  if (0 < *(int *)(DAT_10122044 + 0x90)) {
    do {
      iVar1 = FUN_100af1c0(iVar2);
      if (iVar1 != 0) {
        (*DAT_10121ec0)(1,DAT_1012487c,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x208));
        lVar3 = __ftol();
        (*DAT_10121ec8)((int)lVar3);
        lVar3 = __ftol();
        (*DAT_10121ec8)((int)lVar3);
        lVar3 = __ftol();
        (*DAT_10121ec8)((int)lVar3);
        (*DAT_10121ed0)();
        (*DAT_10121ed0)();
        (*DAT_10121ed0)();
        (*DAT_10121ec4)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(DAT_10122044 + 0x90));
  }
  return;
}

