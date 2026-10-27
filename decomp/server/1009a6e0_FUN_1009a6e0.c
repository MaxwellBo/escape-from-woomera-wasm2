
void __fastcall FUN_1009a6e0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    for (piVar1 = FUN_1009a5f0(param_1,0,iVar4); piVar1 != (int *)0x0;
        piVar1 = FUN_1009a5f0(param_1,piVar1,iVar4)) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x74))();
      iVar3 = (**(code **)(*piVar2 + 0xb8))();
      if (iVar3 != 0) {
        piVar2[0xa8] = piVar2[0xa8] | 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}

