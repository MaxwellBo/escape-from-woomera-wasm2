
void FUN_100c3250(void)

{
  int *piVar1;
  int *piVar2;
  int *piStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = DAT_10132c84;
  piStack_c = (int *)*DAT_10132c84;
  if (DAT_10132c8c == 0) {
    DAT_10132c8c = 0;
    piVar2 = piStack_c;
    while (piStack_c = piVar2, piVar2 != piVar1) {
      FUN_100c36b0((int *)&piStack_c);
      FUN_100c3960(&DAT_10132c80,&uStack_4,piVar2);
      piVar2 = piStack_c;
    }
  }
  else {
    piVar1 = (int *)DAT_10132c84[1];
    if ((int *)DAT_10132c84[1] != DAT_10132c78) {
      do {
        FUN_100c3d60((int *)piVar1[2]);
        piVar2 = (int *)*piVar1;
        FUN_100c4300(piVar1 + 3,0);
        FUN_100c8ce6((undefined *)piVar1);
        piVar1 = piVar2;
      } while (piVar2 != DAT_10132c78);
    }
    DAT_10132c84[1] = (int)DAT_10132c78;
    DAT_10132c8c = 0;
    *DAT_10132c84 = (int)DAT_10132c84;
    DAT_10132c84[2] = (int)DAT_10132c84;
    FUN_100c36a0(&DAT_10132c80,&uStack_8);
  }
  FUN_100c8ce6((undefined *)DAT_10132c84);
  DAT_10132c84 = (int *)0x0;
  DAT_10132c8c = 0;
  FUN_100d9cb0(&piStack_c);
  piVar1 = DAT_10132c78;
  DAT_10132c74 = DAT_10132c74 + -1;
  piVar2 = (int *)0x0;
  if (DAT_10132c74 == 0) {
    DAT_10132c78 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_100d9d4c();
  if (piVar2 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar2);
  }
  return;
}

