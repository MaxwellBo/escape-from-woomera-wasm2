
void __fastcall FUN_1007f410(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x530) != 0) {
    if ((*(int **)(param_1 + 0x528) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x528) + 0x130))(), iVar3 == 0)) {
      return;
    }
    FUN_10081e70(param_1);
    if (*(int **)(param_1 + 0x528) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x528) + 0x134))(0);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x528);
    piVar2 = *(int **)(param_1 + 0x530);
    *(int **)(param_1 + 0x528) = piVar2;
    *(undefined4 *)(param_1 + 0x530) = uVar1;
    (**(code **)(*piVar2 + 300))();
    (**(code **)(**(int **)(param_1 + 0x528) + 0x138))();
  }
  return;
}

