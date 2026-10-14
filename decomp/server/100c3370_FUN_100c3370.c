
void FUN_100c3370(void)

{
  int *piVar1;
  int *piVar2;
  int *local_8;
  undefined4 local_4;
  
  piVar2 = DAT_10132c84;
  local_8 = (int *)*DAT_10132c84;
  if (DAT_10132c8c == 0) {
    DAT_10132c8c = 0;
    piVar1 = local_8;
    while (local_8 = piVar1, piVar1 != piVar2) {
      FUN_100c36b0((int *)&local_8);
      FUN_100c3960(&DAT_10132c80,&local_4,piVar1);
      piVar1 = local_8;
    }
    FUN_100c35e0();
    return;
  }
  piVar2 = (int *)DAT_10132c84[1];
  if ((int *)DAT_10132c84[1] != DAT_10132c78) {
    do {
      FUN_100c3d60((int *)piVar2[2]);
      piVar1 = (int *)*piVar2;
      FUN_100c3660((int)(piVar2 + 3));
      FUN_100c8ce6((undefined *)piVar2);
      piVar2 = piVar1;
    } while (piVar1 != DAT_10132c78);
  }
  DAT_10132c84[1] = (int)DAT_10132c78;
  DAT_10132c8c = 0;
  *DAT_10132c84 = (int)DAT_10132c84;
  DAT_10132c84[2] = (int)DAT_10132c84;
  FUN_100c35e0();
  return;
}

