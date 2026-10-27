
void FUN_100b8590(void)

{
  int *piVar1;
  int *piVar2;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_1013241c;
  piStack_c = (int *)*DAT_1013241c;
  if (DAT_10132424 == 0) {
    DAT_10132424 = 0;
    piVar2 = piStack_c;
    while (piStack_c = piVar2, piVar2 != piVar1) {
      FUN_100bda90((int *)&piStack_c);
      FUN_100bbd40(&DAT_10132418,&uStack_4,piVar2);
      piVar2 = piStack_c;
    }
  }
  else {
    piVar1 = (int *)DAT_1013241c[1];
    if ((int *)DAT_1013241c[1] != DAT_1013243c) {
      do {
        FUN_100bc180((int *)piVar1[2]);
        piVar2 = (int *)*piVar1;
        FUN_100be280(piVar1 + 3,0);
        FUN_100c8ce6((undefined *)piVar1);
        piVar1 = piVar2;
      } while (piVar2 != DAT_1013243c);
    }
    DAT_1013241c[1] = (int)DAT_1013243c;
    DAT_10132424 = 0;
    *DAT_1013241c = (int)DAT_1013241c;
    DAT_1013241c[2] = (int)DAT_1013241c;
    FUN_100baeb0(&DAT_10132418,&uStack_8);
  }
  FUN_100c8ce6((undefined *)DAT_1013241c);
  DAT_1013241c = (int *)0x0;
  DAT_10132424 = 0;
  FUN_100d9cb0(&piStack_c);
  piVar1 = DAT_1013243c;
  DAT_10132438 = DAT_10132438 + -1;
  piVar2 = (int *)0x0;
  if (DAT_10132438 == 0) {
    DAT_1013243c = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_100d9d4c();
  if (piVar2 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar2);
  }
  return;
}

