
int FUN_10053bed(void)

{
  FILE *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  FUN_1004ca8b(2);
  iVar5 = 3;
  if (3 < DAT_100be180) {
    do {
      iVar4 = iVar5 * 4;
      pFVar1 = *(FILE **)(iVar4 + DAT_100bd164);
      if (pFVar1 != (FILE *)0x0) {
        if (((pFVar1->_flag & 0x83) != 0) && (iVar2 = FUN_1004a0a2(pFVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar5) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar4 + DAT_100bd164) + 0x20));
          FUN_1004ad7e(*(undefined **)(iVar4 + DAT_100bd164));
          *(undefined4 *)(iVar4 + DAT_100bd164) = 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_100be180);
  }
  FUN_1004caec(2);
  return iVar3;
}

