
void __thiscall FUN_10002a20(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_2 = *(undefined4 *)(iVar1 + 8);
  param_2[1] = *(undefined4 *)(iVar1 + 0xc);
  param_2[2] = *(undefined4 *)(iVar1 + 0x10);
  return;
}

