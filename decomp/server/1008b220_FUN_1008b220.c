
int * FUN_1008b220(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0x318);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      FUN_10002f30(piVar3);
      *piVar3 = (int)&PTR_FUN_100efd68;
    }
    piVar3[1] = iVar2;
  }
  FUN_100afe10((int)piVar3,&stack0x00000004);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x50) = in_stack_00000010;
  *(undefined4 *)(iVar2 + 0x54) = in_stack_00000014;
  *(undefined4 *)(iVar2 + 0x58) = in_stack_00000018;
  (**(code **)(*piVar3 + 0x28))();
  piVar3[0x1e] = (int)CRpgRocket::RocketTouch;
  piVar3[0xc5] = in_stack_00000020;
  *(int *)(in_stack_00000020 + 0x128) = *(int *)(in_stack_00000020 + 0x128) + 1;
  *(undefined4 *)(piVar3[1] + 0x198) = *(undefined4 *)(*(int *)(in_stack_0000001c + 4) + 0x208);
  return piVar3;
}

