
void FUN_10022bf0(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_100a9994;
  if (DAT_100a9994 == (int *)0x0) {
    DAT_100a9994 = (int *)0x0;
    return;
  }
  do {
    piVar1 = (int *)*piVar2;
    FUN_1004ad7e((undefined *)piVar2);
    piVar2 = piVar1;
  } while (piVar1 != (int *)0x0);
  DAT_100a9994 = piVar1;
  return;
}

