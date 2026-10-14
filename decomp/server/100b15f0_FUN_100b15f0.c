
void __thiscall FUN_100b15f0(int *param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x52c) != 0)) {
    fStack_4 = param_3[2] - *(float *)(iVar1 + 0x54c);
    fStack_8 = param_3[1] - *(float *)(iVar1 + 0x548);
    fStack_c = *param_3 - *(float *)(iVar1 + 0x544);
    FUN_100b15a0(param_2,&fStack_c);
  }
  FUN_100b15a0(param_2,param_3);
  return;
}

