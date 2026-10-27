
void __cdecl FUN_100638f0(int param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  int iVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_18 = param_2;
    local_14 = param_3;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    local_18 = param_2 + *(float *)(iVar1 + 0x20);
    local_14 = param_3 + *(float *)(iVar1 + 0x24);
    param_4 = param_4 + *(float *)(iVar1 + 0x28);
    local_c = local_18;
    local_8 = local_14;
    local_4 = param_4;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  local_10 = param_4;
  if (iVar1 != 0) {
    iVar2 = 100;
    do {
      iVar3 = 100;
      FUN_10003850(&stack0xffffffcc,&local_18);
      FUN_100637d0(iVar1,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,iVar3);
      iVar1 = *(int *)(iVar1 + 0x1c);
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) {
        (*DAT_10121efc)();
        break;
      }
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 4);
  *(float *)(iVar1 + 0x20) = local_18;
  *(float *)(iVar1 + 0x24) = local_14;
  *(float *)(iVar1 + 0x28) = local_10;
  return;
}

