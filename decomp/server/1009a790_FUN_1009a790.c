
void __thiscall FUN_1009a790(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  do {
    for (piVar1 = FUN_1009a5f0(this,0,iVar4); piVar1 != (int *)0x0;
        piVar1 = FUN_1009a5f0(this,piVar1,iVar4)) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x74))();
      if (((piVar2 != (int *)0x0) &&
          (iVar3 = FUN_10019410((uint *)(piVar2 + 0x5a)), iVar3 == param_1)) &&
         (local_4 = local_4 + 1, param_2 < local_4)) {
        (**(code **)(*piVar2 + 0x228))(1);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}

