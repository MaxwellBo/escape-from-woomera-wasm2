
int FUN_100d3e9b(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  FUN_100cf6a6(2);
  iVar5 = 3;
  if (3 < DAT_101361e0) {
    do {
      iVar4 = iVar5 * 4;
      pFVar1 = *(FILE **)(iVar4 + DAT_101351cc);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar2 = FUN_100c8f53(pFVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar5) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar4 + DAT_101351cc) + 0x20));
          FUN_100c8cf1(*(undefined **)(iVar4 + DAT_101351cc));
          *(undefined4 *)(iVar4 + DAT_101351cc) = 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_101361e0);
  }
  FUN_100cf707(2);
  return iVar3;
}

