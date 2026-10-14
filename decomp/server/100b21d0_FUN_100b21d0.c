
void __thiscall FUN_100b21d0(void *this,ushort *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100b2210(this);
  *param_1 = (ushort)uVar1;
  uVar1 = FUN_100b2210(this);
  param_1[1] = (ushort)uVar1;
  uVar2 = FUN_100b2290(this);
  *(undefined4 *)(param_1 + 2) = uVar2;
  FUN_100b2320(this,(uint)*param_1);
  return;
}

