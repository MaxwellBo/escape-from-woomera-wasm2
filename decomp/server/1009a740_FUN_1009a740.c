
void __fastcall FUN_1009a740(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    for (piVar1 = FUN_1009a5f0(param_1,0,iVar3); piVar1 != (int *)0x0;
        piVar1 = FUN_1009a5f0(param_1,piVar1,iVar3)) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x74))();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1a0))();
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

