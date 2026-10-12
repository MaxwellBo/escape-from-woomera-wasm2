
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6780(void)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  uVar1 = FUN_100c5b80();
  if (CONCAT31(extraout_var,uVar1) == 0) {
    DAT_1011d14c = '\x01';
  }
  else if (DAT_1011d14c == '\0') goto LAB_100c67a7;
  FUN_100c6740();
  DAT_1011d14c = '\0';
LAB_100c67a7:
  FUN_100c80d0();
  FUN_100c80d0();
  FUN_100c35e0();
  FUN_100b8ff0();
  FUN_100c6950();
  _DAT_10134474 = 0;
  DAT_10134868 = 0xffffffff;
  _DAT_10134478 = 0;
  _DAT_1013447c = 0;
  DAT_1013447e = 0;
  DAT_10134870 = 0;
  FUN_100c6890(0,2);
  FUN_100c6890(1,2);
  uVar1 = FUN_100c5b80();
  if ((CONCAT31(extraout_var_00,uVar1) == 1) || (CONCAT31(extraout_var_00,uVar1) == 2)) {
    FUN_100c6890(2,2);
    FUN_100c6890(3,2);
    FUN_100c6890(4,2);
    FUN_100c6890(5,2);
    FUN_100c6890(6,2);
    FUN_100c6890(7,2);
    FUN_100c6890(8,2);
    FUN_100c6890(9,2);
    FUN_100c6890(10,2);
  }
  FUN_100c81a0(0,1);
  FUN_100c7810();
  return;
}

