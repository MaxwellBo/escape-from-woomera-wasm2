
void __fastcall FUN_1003fa90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x234))(0);
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  iVar1 = 5;
  do {
    (**(code **)(*(int *)puVar2[6] + 0x234))(0);
    (**(code **)(*(int *)*puVar2 + 0x24))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (unaff_retaddr == 6) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x234))(1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xfc + unaff_retaddr * 4) + 0x234))(1);
    (**(code **)(**(int **)(param_1 + 0xe4 + unaff_retaddr * 4) + 0x24))(1);
  }
  *(int *)(param_1 + 0x120) = unaff_retaddr;
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x220))();
  return;
}

