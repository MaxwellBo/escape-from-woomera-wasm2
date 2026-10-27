
void __cdecl
FUN_10062db0(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  int iVar1;
  int iVar2;
  float in_stack_ffffffc8;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float fVar3;
  float fVar4;
  float fVar5;
  
  for (iVar1 = *(int *)(param_1 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if ((*(byte *)(iVar1 + 0x5c) & 8) == 0) {
      iVar2 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar2 + 0x28);
      *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar1 + 0x5c) | 8;
    }
    if ((*(byte *)(iVar1 + 0x5c) & 0x10) == 0) {
      iVar2 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar2 + 0x5c);
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar2 + 0x60);
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar2 + 100);
      *(uint *)(iVar1 + 0x5c) = *(uint *)(iVar1 + 0x5c) | 0x10;
    }
    iVar2 = *(int *)(iVar1 + 4);
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - param_2;
    *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - param_3;
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) - param_4;
    iVar2 = *(int *)(iVar1 + 4);
    *(float *)(iVar2 + 0x5c) = *(float *)(iVar2 + 0x5c) - param_5;
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) - param_6;
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) - param_7;
    fVar3 = param_5;
    fVar4 = param_6;
    fVar5 = param_7;
    FUN_10003850(&stack0xffffffc8,&param_2);
    FUN_10062db0(iVar1,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,fVar3,fVar4,fVar5);
  }
  return;
}

