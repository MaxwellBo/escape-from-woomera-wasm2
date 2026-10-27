
int FUN_1004da57(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1004dca4();
  if (DAT_100bca38 == '\0') {
    return iVar2;
  }
  iVar4 = 0;
  FUN_1004ca8b(2);
  iVar2 = 3;
  if (3 < DAT_100be180) {
    do {
      iVar5 = iVar2 * 4;
      pFVar1 = *(FILE **)(iVar5 + DAT_100bd164);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar3 = FUN_1004a0a2(pFVar1), iVar3 != -1)) {
          iVar4 = iVar4 + 1;
        }
        if (0x13 < iVar2) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_100bd164) + 0x20));
          FUN_1004ad7e(*(undefined **)(iVar5 + DAT_100bd164));
          *(undefined4 *)(iVar5 + DAT_100bd164) = 0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_100be180);
  }
  FUN_1004caec(2);
  return iVar4;
}

