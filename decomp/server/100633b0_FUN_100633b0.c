
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100633b0(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float10 fVar12;
  float in_stack_ffffffb8;
  undefined8 uVar13;
  ulonglong uVar14;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar5 = *(int *)(param_1 + 4);
  fVar9 = param_2 - *(float *)(iVar5 + 8);
  fVar10 = param_3 - *(float *)(iVar5 + 0xc);
  fVar11 = param_4 - *(float *)(iVar5 + 0x10);
  if (((float)_DAT_100dfb88 < SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10)) &&
     (fVar12 = (float10)(*DAT_10121eec)(), fVar12 != (float10)_DAT_100dd5f8)) {
    piVar6 = *(int **)(param_1 + 4);
    in_stack_ffffffb8 = SUB84((double)param_3,0);
    (*DAT_10121efc)(1,s_AssignOrigin__s__s____f__f__f__g_10111880,
                    *piVar6 + *(int *)(DAT_10122044 + 0x98),
                    piVar6[0x73] + *(int *)(DAT_10122044 + 0x98),(double)(float)piVar6[2],
                    (double)(float)piVar6[3],(double)(float)piVar6[4],(double)param_2);
  }
  uVar14 = CONCAT44(&param_2,param_1);
  uVar13 = CONCAT44(0x10063494,in_stack_ffffffb8);
  FUN_100afe10(param_1,&param_2);
  if ((param_5 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar7 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar7 + 0xc);
    fVar2 = *(float *)(iVar5 + 0xc);
    fVar3 = *(float *)(iVar7 + 0x10);
    fVar4 = *(float *)(iVar5 + 0x10);
    *(float *)(param_1 + 0x20) = *(float *)(iVar7 + 8) - *(float *)(iVar5 + 8);
    *(float *)(param_1 + 0x24) = fVar1 - fVar2;
    *(float *)(param_1 + 0x28) = fVar3 - fVar4;
  }
  for (iVar5 = *(int *)(param_1 + 0x18); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x1c)) {
    iVar7 = *(int *)(iVar5 + 4);
    if ((*(int *)(iVar7 + 0x108) == 7) &&
       (((iVar8 = *(int *)(param_1 + 4), *(float *)(iVar7 + 0x20) != *(float *)(iVar8 + 0x20) ||
         (*(float *)(iVar7 + 0x24) != *(float *)(iVar8 + 0x24))) ||
        (*(float *)(iVar7 + 0x28) != *(float *)(iVar8 + 0x28))))) {
      fStack_14 = fVar9 + *(float *)(iVar7 + 8);
      uVar14 = uVar14 & 0xffffffff;
      fStack_10 = fVar10 + *(float *)(iVar7 + 0xc);
      fStack_c = fVar11 + *(float *)(iVar7 + 0x10);
      FUN_10003850(&stack0xffffffb8,&fStack_14);
    }
    else {
      uVar14 = uVar14 & 0xffffffff;
      FUN_1000b550(&param_2,(float *)&stack0xffffffb8,(float *)(iVar5 + 0x20));
    }
    FUN_100633b0(iVar5,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),(float)uVar14,
                 (int)(uVar14 >> 0x20));
  }
  return;
}

