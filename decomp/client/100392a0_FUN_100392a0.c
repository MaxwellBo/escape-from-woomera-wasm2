
void __fastcall FUN_100392a0(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x24))(1);
  for (piVar1 = (int *)param_1[0x2f]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x2f]) {
    (**(code **)(*piVar1 + 0x24))(1);
  }
  return;
}

