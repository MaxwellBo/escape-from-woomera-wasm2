
void FUN_10041ab0(void)

{
  int *piVar1;
  int *piVar2;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar2 = DAT_100baeec;
  piStack_c = (int *)*DAT_100baeec;
  if (DAT_100baef4 == 0) {
    DAT_100baef4 = 0;
    piVar1 = piStack_c;
    while (piStack_c = piVar1, piVar1 != piVar2) {
      FUN_100433d0((int *)&piStack_c);
      FUN_10042bb0(&DAT_100baee8,&uStack_4,piVar1);
      piVar1 = piStack_c;
    }
  }
  else {
    piVar2 = (int *)DAT_100baeec[1];
    if ((int *)DAT_100baeec[1] != DAT_100baefc) {
      do {
        FUN_10042f90((int *)piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_10043570(piVar2 + 3,0);
        FUN_10049a73((undefined *)piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_100baefc);
    }
    DAT_100baeec[1] = (int)DAT_100baefc;
    DAT_100baef4 = 0;
    *DAT_100baeec = (int)DAT_100baeec;
    DAT_100baeec[2] = (int)DAT_100baeec;
    FUN_10042600(&DAT_100baee8,&uStack_8);
  }
  FUN_10049a73((undefined *)DAT_100baeec);
  DAT_100baeec = (int *)0x0;
  DAT_100baef4 = 0;
  FUN_100571a0(&piStack_c);
  piVar2 = DAT_100baefc;
  DAT_100baef8 = DAT_100baef8 + -1;
  piVar1 = (int *)0x0;
  if (DAT_100baef8 == 0) {
    DAT_100baefc = (int *)0x0;
    piVar1 = piVar2;
  }
  FUN_1005723c();
  if (piVar1 != (int *)0x0) {
    FUN_10049a73((undefined *)piVar1);
  }
  return;
}

