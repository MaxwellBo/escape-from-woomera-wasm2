
void FUN_100c35e0(void)

{
  int *piVar1;
  int *piVar2;
  
  FUN_100c80d0();
  piVar2 = (int *)*DAT_10132c84;
  if (piVar2 != DAT_10132c84) {
    do {
      FUN_100c80d0();
      if ((undefined4 *)piVar2[2] == DAT_10132c78) {
        piVar1 = (int *)piVar2[1];
        if (piVar2 == (int *)piVar1[2]) {
          do {
            piVar2 = piVar1;
            piVar1 = (int *)piVar2[1];
          } while (piVar2 == (int *)piVar1[2]);
        }
        if ((int *)piVar2[2] != piVar1) goto LAB_100c3648;
      }
      else {
        piVar1 = (int *)FUN_100c3dd0((undefined4 *)piVar2[2]);
LAB_100c3648:
        piVar2 = piVar1;
      }
    } while (piVar2 != DAT_10132c84);
  }
  return;
}

