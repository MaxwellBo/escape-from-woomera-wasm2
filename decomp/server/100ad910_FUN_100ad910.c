
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100ad910(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  if (*(int *)(in_stack_00000018 + 0x34) != 10) goto LAB_100ad983;
  if (*(float *)(*(int *)(param_1 + 4) + 0x1e4) == *DAT_10122044) {
    iVar1 = (*DAT_10121f70)(0,10);
    if (iVar1 < 1) goto LAB_100ad948;
  }
  else {
LAB_100ad948:
    (*DAT_10121f74)(0x3f800000,0x40000000);
    FUN_100b06f0((undefined4 *)(in_stack_00000018 + 0x14));
    *(float *)(*(int *)(param_1 + 4) + 0x1e4) = *DAT_10122044;
  }
  param_3 = 0.1;
LAB_100ad983:
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) != _DAT_100dd5f8) {
    FUN_100b2c20(param_2,param_1,param_3,in_stack_0000001c);
  }
  return;
}

