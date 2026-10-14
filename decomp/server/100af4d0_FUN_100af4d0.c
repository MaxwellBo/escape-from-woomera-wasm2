
int FUN_100af4d0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    return 0;
  }
  if (0xffff < iVar1) {
    iVar1 = 0xffff;
  }
  return iVar1;
}

