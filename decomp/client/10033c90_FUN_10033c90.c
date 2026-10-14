
undefined4 __thiscall FUN_10033c90(void *this,int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_10034150(this,param_1,param_2);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = piVar1;
  if ((int *)*piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)*piVar1 + 0x40))(0);
  }
  *piVar1 = (int)param_3;
  if (param_3 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_3 + 0x40))(this);
  }
  *(undefined1 *)((int)this + 0xbc) = 1;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

