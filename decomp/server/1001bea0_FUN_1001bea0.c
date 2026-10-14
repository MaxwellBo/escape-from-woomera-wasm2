
void FUN_1001bea0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_100c80d0();
  FUN_100c6970(0);
  iVar2 = 0;
  DAT_10121cd4 = 1;
  if (0 < param_2) {
    do {
      if (((*param_1 == 0) && (param_3 <= iVar2)) && (param_1[0x1f] != 0)) {
        piVar1 = param_1;
        if (((param_1 == (int *)0x0) && (piVar1 = (int *)(*DAT_10121f1c)(0), piVar1 == (int *)0x0))
           || ((piVar1 = (int *)piVar1[0x1f], piVar1 == (int *)0x0 ||
               ((*(uint *)(piVar1[1] + 0x1a4) & 0x80000000) != 0)))) {
          (*DAT_10121efc)(1,s_Can_t_instance__s_1010572c,
                          *(int *)(DAT_10122044 + 0x98) + param_1[0x20]);
        }
        else {
          (**(code **)(*piVar1 + 0x40))();
        }
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0xc9;
    } while (iVar2 < param_2);
  }
  FUN_1007af20();
  return;
}

