
void __cdecl FUN_100c2c30(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = param_1;
  local_4 = 6;
  param_1 = param_1 + 0x144;
  do {
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      for (piVar3 = (int *)piVar1[0x38]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0x38]) {
        if (piVar3 == param_2) {
          (**(code **)(*piVar3 + 0x144))();
          if (piVar2[0x14c] == piVar1[0x38]) {
            piVar2[0x14c] = 0;
          }
          piVar1[0x38] = *(int *)(piVar1[0x38] + 0xe0);
          param_2[0x38] = 0;
          piVar3 = piVar1;
        }
        piVar1 = piVar3;
      }
      if ((int *)*param_1 == param_2) {
        (**(code **)(*(int *)*param_1 + 0x144))();
        if (piVar2[0x14c] == *param_1) {
          piVar2[0x14c] = 0;
        }
        *param_1 = *(int *)(*param_1 + 0xe0);
      }
    }
    param_1 = param_1 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(uint *)(piVar2[1] + 0x168) = *(uint *)(piVar2[1] + 0x168) & ~(1 << ((byte)param_2[0x39] & 0x1f))
  ;
  if ((int *)piVar2[0x14a] == param_2) {
    FUN_10081e70((int)piVar2);
    (**(code **)(*(int *)piVar2[0x14a] + 0x134))(0);
    *(undefined4 *)(piVar2[1] + 0xbc) = 0;
    *(undefined4 *)(piVar2[1] + 0xc0) = 0;
    piVar2[0x14a] = 0;
    (**(code **)(*piVar2 + 0x23c))();
    (*DAT_10121ec0)(1,DAT_10124884,0,*(undefined4 *)(piVar2[1] + 0x208));
    (*DAT_10121ec8)(0);
    (*DAT_10121ec8)(0);
    (*DAT_10121ec8)(0);
    (*DAT_10121ec4)();
    param_2[0x37] = 0;
    return;
  }
  (**(code **)(*piVar2 + 0x23c))();
  param_2[0x37] = 0;
  return;
}

