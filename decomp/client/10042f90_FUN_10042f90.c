
void FUN_10042f90(int *param_1)

{
  int *piVar1;
  
  if (param_1 != DAT_100baefc) {
    do {
      FUN_10042f90((int *)param_1[2]);
      piVar1 = (int *)*param_1;
      FUN_10042240((int)(param_1 + 3));
      FUN_10049a73((undefined *)param_1);
      param_1 = piVar1;
    } while (piVar1 != DAT_100baefc);
  }
  return;
}

