
int FUN_100af8c0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (0x7fff < iVar1) {
    return 0x7fff;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  return iVar1;
}

