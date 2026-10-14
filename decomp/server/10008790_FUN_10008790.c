
undefined4 __cdecl FUN_10008790(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8) + param_1 + param_2 * 0xb0;
  *param_3 = *(undefined4 *)(iVar1 + 0x60);
  param_3[1] = *(undefined4 *)(iVar1 + 100);
  param_3[2] = *(undefined4 *)(iVar1 + 0x68);
  *param_4 = *(undefined4 *)(iVar1 + 0x6c);
  param_4[1] = *(undefined4 *)(iVar1 + 0x70);
  param_4[2] = *(undefined4 *)(iVar1 + 0x74);
  return 1;
}

