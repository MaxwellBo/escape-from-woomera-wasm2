
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046370(void)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  
  iVar1 = 0;
  DAT_100bc350 = 0;
  (*DAT_100a50bc)();
  if (0 < DAT_100bc48c) {
    piVar2 = &DAT_100bb728;
    do {
      FUN_10044f70(piVar2);
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (iVar1 < DAT_100bc48c);
  }
  DAT_100bc338 = 1;
  fVar3 = FUN_10044870();
  _DAT_100bc354 = (float)fVar3;
  return;
}

