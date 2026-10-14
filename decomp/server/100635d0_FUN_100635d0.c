
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100635d0(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  double in_stack_ffffffb8;
  double in_stack_ffffffc0;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar3 = *(int *)(param_1 + 4);
  fVar7 = param_2 - *(float *)(iVar3 + 0x50);
  fVar8 = param_3 - *(float *)(iVar3 + 0x54);
  fVar9 = param_4 - *(float *)(iVar3 + 0x58);
  if ((float)_DAT_100dfb88 < SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9)) {
    in_stack_ffffffc0 = 2.6995408781349424e-231;
    fVar10 = (float10)(*DAT_10121eec)();
    if (fVar10 != (float10)_DAT_100dd5f8) {
      piVar4 = *(int **)(param_1 + 4);
      in_stack_ffffffc0 = (double)param_4;
      in_stack_ffffffb8 = (double)param_3;
      (*DAT_10121efc)(1,s_SetAngles__s__s____f__f__f__goes_101118b4,
                      *piVar4 + *(int *)(DAT_10122044 + 0x98),
                      piVar4[0x73] + *(int *)(DAT_10122044 + 0x98),(double)(float)piVar4[0x14],
                      (double)(float)piVar4[0x15],(double)(float)piVar4[0x16],(double)param_2);
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  *(float *)(iVar3 + 0x50) = param_2;
  *(float *)(iVar3 + 0x54) = param_3;
  *(float *)(iVar3 + 0x58) = param_4;
  if ((param_5 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    fVar1 = *(float *)(iVar3 + 0x54);
    fVar2 = *(float *)(iVar3 + 0x58);
    *(float *)(param_1 + 0x2c) = param_2 - *(float *)(iVar3 + 0x50);
    *(float *)(param_1 + 0x30) = param_3 - fVar1;
    *(float *)(param_1 + 0x34) = param_4 - fVar2;
  }
  for (iVar3 = *(int *)(param_1 + 0x18); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1c)) {
    iVar5 = *(int *)(param_1 + 4);
    iVar6 = *(int *)(iVar3 + 4);
    if (((*(float *)(iVar6 + 0x5c) == *(float *)(iVar5 + 0x5c)) &&
        (*(float *)(iVar6 + 0x60) == *(float *)(iVar5 + 0x60))) &&
       (*(float *)(iVar6 + 100) == *(float *)(iVar5 + 100))) {
      in_stack_ffffffc0 = (double)((ulonglong)in_stack_ffffffc0 & 0xffffffff);
      FUN_1000b550(&param_2,(float *)&stack0xffffffb8,(float *)(iVar3 + 0x2c));
    }
    else {
      fStack_14 = fVar7 + *(float *)(iVar6 + 0x50);
      in_stack_ffffffc0 = (double)((ulonglong)in_stack_ffffffc0 & 0xffffffff);
      fStack_10 = fVar8 + *(float *)(iVar6 + 0x54);
      fStack_c = fVar9 + *(float *)(iVar6 + 0x58);
      FUN_10003850(&stack0xffffffb8,&fStack_14);
    }
    FUN_100635d0(iVar3,SUB84(in_stack_ffffffb8,0),(float)((ulonglong)in_stack_ffffffb8 >> 0x20),
                 SUB84(in_stack_ffffffc0,0),(int)((ulonglong)in_stack_ffffffc0 >> 0x20));
  }
  return;
}

