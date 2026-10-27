
void FUN_10018da0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x7c);
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x7c);
  }
  if ((piVar2 != (int *)0x0) && ((*(uint *)(piVar2[1] + 0x1a4) & 0x40000000) == 0)) {
    (**(code **)(*piVar2 + 0xe4))(uVar1,uVar1,3,0);
  }
  return;
}

