
int FUN_100cf960(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_100cfc93();
  if (DAT_101349b0 == '\0') {
    return iVar2;
  }
  iVar4 = 0;
  FUN_100cf6a6(2);
  iVar2 = 3;
  if (3 < DAT_101361e0) {
    do {
      iVar5 = iVar2 * 4;
      pFVar1 = *(FILE **)(iVar5 + DAT_101351cc);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar3 = FUN_100c8f53(pFVar1), iVar3 != -1)) {
          iVar4 = iVar4 + 1;
        }
        if (0x13 < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_101351cc) + 0x20));
          FUN_100c8cf1(*(undefined **)(iVar5 + DAT_101351cc));
          *(undefined4 *)(iVar5 + DAT_101351cc) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_101361e0);
  }
  FUN_100cf707(2);
  return iVar4;
}

