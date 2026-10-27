
undefined4 * __thiscall FUN_100c2410(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_100c2550(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    (**(code **)(*(int *)this + 0x24))(s_out_of_dynamic_memory_in_yy_crea_1011c5e4);
  }
  puVar1[3] = param_2;
  iVar2 = FUN_100c2550(param_2 + 2);
  puVar1[1] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x24))(s_out_of_dynamic_memory_in_yy_crea_1011c5e4);
  }
  puVar1[5] = 1;
  FUN_100c24c0(this,puVar1,param_1);
  return puVar1;
}

