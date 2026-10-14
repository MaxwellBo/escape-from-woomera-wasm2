
void __thiscall FUN_10032720(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0xb;
  puVar2 = (undefined4 *)((int)this + 0xd4);
  do {
    (**(code **)(*(int *)puVar2[0x18] + 0x234))(0);
    (**(code **)(*(int *)*puVar2 + 0x24))(0);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((10 < param_1) || (param_1 < 0)) {
    param_1 = 0;
  }
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0x134) + 0x234))(1);
  (**(code **)(**(int **)((int)this + param_1 * 4 + 0xd4) + 0x24))(1);
  *(int *)((int)this + 0xd6c) = param_1;
  (**(code **)(**(int **)((int)this + 0x168) + 0x20c))(0,0);
  (**(code **)(**(int **)((int)this + 0x168) + 0x220))();
  return;
}

