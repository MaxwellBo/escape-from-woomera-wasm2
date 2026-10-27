
void __cdecl FUN_100637d0(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  int iVar4;
  
  if (param_5 < 1) {
    (*DAT_10121efc)();
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (*DAT_10121efc)();
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = *(int *)(param_1 + 0x18);
  param_2 = param_2 + (*(float *)(iVar1 + 0x20) - *(float *)(iVar3 + 0x20));
  param_3 = param_3 + (*(float *)(iVar1 + 0x24) - *(float *)(iVar3 + 0x24));
  param_4 = param_4 + (*(float *)(iVar1 + 0x28) - *(float *)(iVar3 + 0x28));
  if (iVar2 != 0) {
    iVar3 = 100;
    iVar1 = param_5 + -1;
    do {
      iVar4 = iVar1;
      FUN_10003850(&stack0xffffffc8,&param_2);
      FUN_100637d0(iVar2,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,iVar4);
      iVar2 = *(int *)(iVar2 + 0x1c);
      iVar3 = iVar3 + -1;
      if (iVar3 < 1) {
        (*DAT_10121efc)();
        break;
      }
    } while (iVar2 != 0);
  }
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0x20) = param_2;
  *(float *)(iVar1 + 0x24) = param_3;
  *(float *)(iVar1 + 0x28) = param_4;
  return;
}

