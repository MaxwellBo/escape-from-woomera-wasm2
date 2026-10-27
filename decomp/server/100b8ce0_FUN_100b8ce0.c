
void FUN_100b8ce0(void)

{
  int *piVar1;
  int *piVar2;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_1013242c;
  piStack_c = (int *)*DAT_1013242c;
  if (DAT_10132434 == 0) {
    DAT_10132434 = 0;
    piVar2 = piStack_c;
    while (piStack_c = piVar2, piVar2 != piVar1) {
      FUN_100bdb40((int *)&piStack_c);
      FUN_100bc460(&DAT_10132428,&uStack_4,piVar2);
      piVar2 = piStack_c;
    }
  }
  else {
    piVar1 = (int *)DAT_1013242c[1];
    if ((int *)DAT_1013242c[1] != DAT_10132444) {
      do {
        FUN_100bc860((int *)piVar1[2]);
        piVar2 = (int *)*piVar1;
        FUN_100be300(piVar1 + 3,0);
        FUN_100c8ce6((undefined *)piVar1);
        piVar1 = piVar2;
      } while (piVar2 != DAT_10132444);
    }
    DAT_1013242c[1] = (int)DAT_10132444;
    DAT_10132434 = 0;
    *DAT_1013242c = (int)DAT_1013242c;
    DAT_1013242c[2] = (int)DAT_1013242c;
    FUN_100bb5a0(&DAT_10132428,&uStack_8);
  }
  FUN_100c8ce6((undefined *)DAT_1013242c);
  DAT_1013242c = (int *)0x0;
  DAT_10132434 = 0;
  FUN_100d9cb0(&piStack_c);
  piVar1 = DAT_10132444;
  DAT_10132440 = DAT_10132440 + -1;
  piVar2 = (int *)0x0;
  if (DAT_10132440 == 0) {
    DAT_10132444 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_100d9d4c();
  if (piVar2 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar2);
  }
  return;
}

