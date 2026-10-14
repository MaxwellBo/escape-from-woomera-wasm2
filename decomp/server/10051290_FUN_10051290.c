
void __thiscall FUN_10051290(void *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_1001ec30(param_1,param_2,param_3);
  iVar1 = *(int *)((int)param_1 + 4);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return;
}

