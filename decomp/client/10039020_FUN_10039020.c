
void __fastcall FUN_10039020(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 600)) {
    piVar1 = (int *)(param_1 + 200);
    do {
      (**(code **)(*(int *)*piVar1 + 0x234))(0);
      if (*(int *)(*piVar1 + 0xf4) != 0) {
        FUN_10039020(*(int *)(*piVar1 + 0xf4));
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 600));
  }
  return;
}

