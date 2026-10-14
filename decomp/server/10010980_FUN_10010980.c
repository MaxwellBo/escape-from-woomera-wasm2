
int * __cdecl FUN_10010980(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0xbc);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_FUN_100def3c;
    }
    piVar3[1] = iVar2;
  }
  (**(code **)(*piVar3 + 0x28))();
  FUN_100afe10((int)piVar3,&stack0x00000008);
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x20) = in_stack_00000014;
  *(undefined4 *)(iVar2 + 0x24) = in_stack_00000018;
  *(undefined4 *)(iVar2 + 0x28) = in_stack_0000001c;
  *(undefined4 *)(piVar3[1] + 0x198) = param_1;
  *(undefined4 *)(piVar3[1] + 0x144) = 0x40200000;
  piVar3[0x1d] = (int)CBMortar::Animate;
  (**(code **)(*piVar3 + 8))(0x3dcccccd);
  return piVar3;
}

