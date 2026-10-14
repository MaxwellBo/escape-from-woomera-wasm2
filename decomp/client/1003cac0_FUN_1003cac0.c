
void __thiscall FUN_1003cac0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x214)) {
    puVar2 = (undefined4 *)((int)this + 200);
    do {
      (**(code **)(*(int *)*puVar2 + 0x24))(0);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 0x214));
  }
  *(int **)((int)this + 0x208) = param_1;
  if (param_1 != (int *)0x0) {
    FUN_100392a0(param_1);
  }
  return;
}

