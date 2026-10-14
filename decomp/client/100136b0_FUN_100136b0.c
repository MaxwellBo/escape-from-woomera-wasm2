
void __fastcall FUN_100136b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_10049a73(*(undefined **)(param_1 + 0x177e8));
  *(undefined4 *)(param_1 + 0x177e8) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x177ec));
  *(undefined4 *)(param_1 + 0x177ec) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x177e4));
  *(undefined4 *)(param_1 + 0x177e4) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x17740));
  *(undefined4 *)(param_1 + 0x17740) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x17744));
  *(undefined4 *)(param_1 + 0x17744) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x17748));
  *(undefined4 *)(param_1 + 0x17748) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x1774c));
  *(undefined4 *)(param_1 + 0x1774c) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x17750));
  *(undefined4 *)(param_1 + 0x17750) = 0;
  FUN_10049a73(*(undefined **)(param_1 + 0x17754));
  *(undefined4 *)(param_1 + 0x17754) = 0;
  piVar1 = (int *)(param_1 + 0x17758);
  iVar2 = 0x20;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x1fc))(0);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x177f0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x177f0) + 0x1fc))(0);
  }
  return;
}

