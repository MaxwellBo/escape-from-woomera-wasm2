
void __thiscall FUN_1005a620(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_2 = *(undefined4 *)(iVar1 + 0x44);
  param_2[1] = *(undefined4 *)(iVar1 + 0x48);
  param_2[2] = *(undefined4 *)(iVar1 + 0x4c);
  return;
}

