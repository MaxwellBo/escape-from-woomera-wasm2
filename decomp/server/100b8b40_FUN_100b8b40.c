
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8b40(void)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  
  piVar3 = DAT_10132400;
  if (DAT_101323fc != DAT_10132400) {
    piVar5 = DAT_101323fc + 1;
    do {
      if (((char)piVar5[3] != '\0') && (puVar2 = (undefined *)piVar5[4], puVar2 != (undefined *)0x0)
         ) {
        FUN_100bb820((int)puVar2);
        FUN_100c8ce6(puVar2);
      }
      if (*piVar5 != 0) {
        pcVar4 = (char *)FUN_100bbc50(*piVar5);
        if ((*pcVar4 == '\0') || (pcVar4 = (char *)FUN_100bbc50(*piVar5), *pcVar4 == -1)) {
          FUN_100bbd30((undefined *)(*piVar5 + -1));
        }
        else {
          pcVar4 = (char *)FUN_100bbc50(*piVar5);
          *pcVar4 = *pcVar4 + -1;
        }
      }
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar1 = piVar5 + 5;
      piVar5 = piVar5 + 6;
    } while (piVar1 != piVar3);
  }
  FUN_100c8ce6((undefined *)DAT_101323fc);
  DAT_101323fc = (int *)0x0;
  DAT_10132400 = (int *)0x0;
  _DAT_10132404 = 0;
  return;
}

