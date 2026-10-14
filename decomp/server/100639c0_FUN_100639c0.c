
void __cdecl FUN_100639c0(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  int iVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  if (param_5 < 1) {
    (*DAT_10121efc)();
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    (*DAT_10121efc)();
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar1 = *(int *)(param_1 + 0x18);
  local_8 = *(float *)(iVar2 + 0x60) - *(float *)(iVar3 + 0x60);
  local_4 = *(float *)(iVar2 + 100) - *(float *)(iVar3 + 100);
  local_18 = param_2 + (*(float *)(iVar2 + 0x5c) - *(float *)(iVar3 + 0x5c));
  local_14 = param_3 + local_8;
  local_10 = param_4 + local_4;
  if (iVar1 != 0) {
    iVar2 = 100;
    do {
      iVar3 = param_5 + -1;
      FUN_10003850(&stack0xffffffc8,&local_18);
      FUN_100639c0(iVar1,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,iVar3);
      iVar1 = *(int *)(iVar1 + 0x1c);
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) {
        (*DAT_10121efc)();
        break;
      }
    } while (iVar1 != 0);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(float *)(iVar2 + 0x5c) = local_18;
  *(float *)(iVar2 + 0x60) = local_14;
  *(float *)(iVar2 + 100) = local_10;
  return;
}

