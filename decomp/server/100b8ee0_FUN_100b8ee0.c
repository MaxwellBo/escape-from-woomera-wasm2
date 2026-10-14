
void FUN_100b8ee0(void)

{
  int *piVar1;
  int *piVar2;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_1013240c;
  piStack_c = (int *)*DAT_1013240c;
  if (DAT_10132414 == 0) {
    DAT_10132414 = 0;
    piVar2 = piStack_c;
    while (piStack_c = piVar2, piVar2 != piVar1) {
      FUN_100bdbf0((int *)&piStack_c);
      FUN_100bc8e0(&DAT_10132408,&uStack_4,piVar2);
      piVar2 = piStack_c;
    }
  }
  else {
    piVar1 = (int *)DAT_1013240c[1];
    if ((int *)DAT_1013240c[1] != DAT_1013244c) {
      do {
        FUN_100bccb0((int *)piVar1[2]);
        piVar2 = (int *)*piVar1;
        FUN_100c8ce6((undefined *)piVar1);
        piVar1 = piVar2;
      } while (piVar2 != DAT_1013244c);
    }
    DAT_1013240c[1] = (int)DAT_1013244c;
    DAT_10132414 = 0;
    *DAT_1013240c = (int)DAT_1013240c;
    DAT_1013240c[2] = (int)DAT_1013240c;
    FUN_100bb760(&DAT_10132408,&uStack_8);
  }
  FUN_100c8ce6((undefined *)DAT_1013240c);
  DAT_1013240c = (int *)0x0;
  DAT_10132414 = 0;
  FUN_100d9cb0(&piStack_c);
  piVar1 = DAT_1013244c;
  DAT_10132448 = DAT_10132448 + -1;
  piVar2 = (int *)0x0;
  if (DAT_10132448 == 0) {
    DAT_1013244c = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_100d9d4c();
  if (piVar2 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar2);
  }
  return;
}

